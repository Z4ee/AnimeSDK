#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelDataSource.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AB1350)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AB12F0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AB12D0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AB12E0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_ISINVALID_OFFSET UNITYSDK_OFFSET(0x3AB1260)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179815D0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17981570)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x179814B0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17981650)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17981510)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x17981450)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOREDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0x3AB12C0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AB12B0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x179816E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelIndexKey_TypeDefinitionIndex = 61865;

	struct alignas(4) ResidentActivityPanelIndexKey
	{
		static ::RPG::Client::ResidentActivityPanelIndexKey* StaticGet_Empty()
		{
			return (::RPG::Client::ResidentActivityPanelIndexKey*)Il2CppClass::FromTypeDefinitionIndex(ResidentActivityPanelIndexKey_TypeDefinitionIndex)->GetStaticField(0x14800);
		}
		::RPG::Client::ResidentActivityPanelDataSource DataSource; // 0x10
		::System::UInt32 ID; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY__CCTOR_OFFSET))();
		}

		::System::Boolean IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_ISINVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::String* ToRedDotSubKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOREDDOTSUBKEY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::ResidentActivityPanelIndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::ResidentActivityPanelIndexKey a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ResidentActivityPanelIndexKey a1, ::RPG::Client::ResidentActivityPanelIndexKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
