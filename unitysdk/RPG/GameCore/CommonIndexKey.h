#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_COMMONINDEXKEY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x3B89C30)
#define RPG_GAMECORE_COMMONINDEXKEY_CREATECOMMONINDEXKEY_OFFSET UNITYSDK_OFFSET(0x1CFF0440)
#define RPG_GAMECORE_COMMONINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E960)
#define RPG_GAMECORE_COMMONINDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define RPG_GAMECORE_COMMONINDEXKEY_INIT_OFFSET UNITYSDK_OFFSET(0x3B89BF0)
#define RPG_GAMECORE_COMMONINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B6D770)
#define RPG_GAMECORE_COMMONINDEXKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF04E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonIndexKey_TypeDefinitionIndex = 10810;

	struct alignas(4) CommonIndexKey
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_HashCodeIndex()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CommonIndexKey_TypeDefinitionIndex)->GetStaticField(0x1D2F0);
		}
		static ::System::Boolean* StaticGet_IsInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CommonIndexKey_TypeDefinitionIndex)->GetStaticField(0x9D20);
		}
		::System::Int32 hashCode; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_INIT_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::CommonIndexKey CreateCommonIndexKey(::UnityEngine::AnyType a1, ::System::Byte a2)
		{
			return ((::RPG::GameCore::CommonIndexKey(*)(::UnityEngine::AnyType, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_CREATECOMMONINDEXKEY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Void CombineHash(::UnityEngine::AnyType a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_COMBINEHASH_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::CommonIndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
