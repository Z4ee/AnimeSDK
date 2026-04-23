#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_COMMONINDEXKEY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x22BB720)
#define RPG_GAMECORE_COMMONINDEXKEY_CREATECOMMONINDEXKEY_OFFSET UNITYSDK_OFFSET(0x18827A20)
#define RPG_GAMECORE_COMMONINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x299F0)
#define RPG_GAMECORE_COMMONINDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_COMMONINDEXKEY_INIT_OFFSET UNITYSDK_OFFSET(0x22BB6E0)
#define RPG_GAMECORE_COMMONINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22A9EE0)
#define RPG_GAMECORE_COMMONINDEXKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18827AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonIndexKey_TypeDefinitionIndex = 23544;

	struct alignas(4) CommonIndexKey
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_HashCodeIndex()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CommonIndexKey_TypeDefinitionIndex)->GetStaticField(0x2FE30);
		}
		static ::System::Boolean* StaticGet_IsInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CommonIndexKey_TypeDefinitionIndex)->GetStaticField(0xC060);
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
		static ::RPG::GameCore::CommonIndexKey CreateCommonIndexKey(::UnityEngine::AnyType anyType, ::System::Byte hashIndex)
		{
			return ((::RPG::GameCore::CommonIndexKey(*)(::UnityEngine::AnyType, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_CREATECOMMONINDEXKEY_OFFSET))(anyType, hashIndex);
		}
		*/

		/*
		::System::Void CombineHash(::UnityEngine::AnyType anyType, ::System::Byte hashIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_COMBINEHASH_OFFSET))(this, anyType, hashIndex);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::CommonIndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONINDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
