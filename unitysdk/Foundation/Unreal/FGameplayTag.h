#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x98B3F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_GETSINGLETAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x98B320)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_GETTAGNAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_ISVALID_OFFSET UNITYSDK_OFFSET(0x98AE20)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESANYEXACT_OFFSET UNITYSDK_OFFSET(0x98B1A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESANY_OFFSET UNITYSDK_OFFSET(0x98B060)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESTAG_OFFSET UNITYSDK_OFFSET(0x98AE40)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B796C50)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B796C60)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_REQUESTGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1B796AE0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG_TOUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x98AE10)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7972A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTag_TypeDefinitionIndex = 8882;

	struct alignas(4) FGameplayTag
	{
		static ::Foundation::Unreal::FGameplayTag* StaticGet_Empty()
		{
			return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x3D20);
		}
		::Foundation::Unreal::FName _tagName; // 0x10

		::System::Void _ctor(::Foundation::Unreal::FName tagName)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG__CTOR_OFFSET))(this, tagName);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG__CCTOR_OFFSET))();
		}

		::System::UInt64 ToUnstableInt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_TOUNSTABLEINT_OFFSET))(this);
		}

		static ::Foundation::Unreal::FGameplayTag RequestGameplayTag(::Foundation::Unreal::FName tagName, ::System::Boolean errorIfNotFound)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_REQUESTGAMEPLAYTAG_OFFSET))(tagName, errorIfNotFound);
		}

		static ::System::Boolean op_Equality(::Foundation::Unreal::FGameplayTag left, ::Foundation::Unreal::FGameplayTag right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::Unreal::FGameplayTag left, ::Foundation::Unreal::FGameplayTag right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_OP_INEQUALITY_OFFSET))(left, right);
		}

		::Foundation::Unreal::FName GetTagName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_GETTAGNAME_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_ISVALID_OFFSET))(this);
		}

		::System::Boolean MatchesTag(::Foundation::Unreal::FGameplayTag tagToCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESTAG_OFFSET))(this, tagToCheck);
		}

		/*
		::System::Boolean MatchesAny(::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESANY_OFFSET))(this, containerToCheck);
		}
		*/

		/*
		::System::Boolean MatchesAnyExact(::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_MATCHESANYEXACT_OFFSET))(this, containerToCheck);
		}
		*/

		/*
		::Foundation::Unreal::FGameplayTagContainer& GetSingleTagContainer()
		{
			return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_GETSINGLETAGCONTAINER_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::Foundation::Unreal::FGameplayTag other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAG_EQUALS_OFFSET))(this, other);
		}
	};
}
