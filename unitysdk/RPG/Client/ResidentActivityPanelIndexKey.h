#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelDataSource.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x83910)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x838B0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x83890)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x838A0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_ISINVALID_OFFSET UNITYSDK_OFFSET(0x83820)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA2DC430)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xA2DC3D0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xA2DC310)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA2DC4C0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xA2DC370)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xA2DC2B0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOREDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0x83880)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x83870)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2DC550)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x83980)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x839C0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x83920)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelIndexKey_TypeDefinitionIndex = 50131;

	struct alignas(4) ResidentActivityPanelIndexKey
	{
		static ::RPG::Client::ResidentActivityPanelIndexKey* StaticGet_Empty()
		{
			return (::RPG::Client::ResidentActivityPanelIndexKey*)Il2CppClass::FromTypeDefinitionIndex(ResidentActivityPanelIndexKey_TypeDefinitionIndex)->GetStaticField(0x5D60);
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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::ResidentActivityPanelIndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::RPG::Client::ResidentActivityPanelIndexKey other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ResidentActivityPanelIndexKey left, ::RPG::Client::ResidentActivityPanelIndexKey right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ResidentActivityPanelIndexKey, ::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELINDEXKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
