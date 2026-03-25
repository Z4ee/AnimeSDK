#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DB4F0)
#define RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20F8330)
#define RPG_PROFILEUTILITY_KEY_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define RPG_PROFILEUTILITY_KEY_GET_SAMPLENAME_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_PROFILEUTILITY_KEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E1330)
#define RPG_PROFILEUTILITY_KEY__CTOR_OFFSET UNITYSDK_OFFSET(0x20F8300)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_Key_TypeDefinitionIndex = 27617;

	struct alignas(8) ProfileUtility_Key
	{
		static ::RPG::ProfileUtility_Key* StaticGet_Null()
		{
			return (::RPG::ProfileUtility_Key*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_Key_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}
		::System::String* m_SampleName; // 0x10
		::System::String* m_Detail; // 0x18

		::System::Void _ctor(::System::String* sampleName, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY__CTOR_OFFSET))(this, sampleName, detail);
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

		::System::Boolean Equals(::RPG::ProfileUtility_Key other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::ProfileUtility_Key))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
