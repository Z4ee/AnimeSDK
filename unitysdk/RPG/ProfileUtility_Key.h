#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x383D720)
#define RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38643E0)
#define RPG_PROFILEUTILITY_KEY_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x60D0)
#define RPG_PROFILEUTILITY_KEY_GET_SAMPLENAME_OFFSET UNITYSDK_OFFSET(0x5B60)
#define RPG_PROFILEUTILITY_KEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABB40B0)
#define RPG_PROFILEUTILITY_KEY__CTOR_OFFSET UNITYSDK_OFFSET(0x38643B0)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_Key_TypeDefinitionIndex = 33350;

	struct alignas(8) ProfileUtility_Key
	{
		static ::RPG::ProfileUtility_Key* StaticGet_Null()
		{
			return (::RPG::ProfileUtility_Key*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_Key_TypeDefinitionIndex)->GetStaticField(0xC80);
		}
		::System::String* m_SampleName; // 0x10
		::System::String* m_Detail; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY__CCTOR_OFFSET))();
		}

		::System::String* get_SampleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GET_SAMPLENAME_OFFSET))(this);
		}

		::System::String* get_Detail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GET_DETAIL_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::ProfileUtility_Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::ProfileUtility_Key))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
