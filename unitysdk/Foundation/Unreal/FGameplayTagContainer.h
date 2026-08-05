#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/Foundation/InlineList_2.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class IGameplayTagContainerVisitor; }
namespace System { class Object; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x883F80)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x883ED0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_1_OFFSET UNITYSDK_OFFSET(0x1890E760)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_OFFSET UNITYSDK_OFFSET(0x1890E590)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1890E860)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_VISITGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x883EC0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1890EC80)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x883DD0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainer_TypeDefinitionIndex = 11323;

	struct alignas(8) FGameplayTagContainer
	{
		static ::Foundation::Unreal::FGameplayTagContainer* StaticGet_Empty()
		{
			return (::Foundation::Unreal::FGameplayTagContainer*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainer_TypeDefinitionIndex)->GetStaticField(0x76B0);
		}
		::Foundation::InlineList_2<::Foundation::Unreal::FGameplayTag, ::Foundation::FixedArray2_1<::Foundation::Unreal::FGameplayTag>> GameplayTags; // 0x10
		::Foundation::InlineList_2<::Foundation::Unreal::FGameplayTag, ::Foundation::FixedArray8_1<::Foundation::Unreal::FGameplayTag>> ParentTags; // 0x30

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CTOR_OFFSET))(this, _);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CCTOR_OFFSET))();
		}

		static ::Foundation::Unreal::FGameplayTagContainer New(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_OFFSET))(tag);
		}

		static ::Foundation::Unreal::FGameplayTagContainer New_1()
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_1_OFFSET))();
		}

		static ::System::Boolean op_Equality(::Foundation::Unreal::FGameplayTagContainer& left, ::Foundation::Unreal::FGameplayTagContainer& right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Void VisitGameplayTag(::Foundation::Unreal::IGameplayTagContainerVisitor* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::IGameplayTagContainerVisitor*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_VISITGAMEPLAYTAG_OFFSET))(this, visitor);
		}

		::System::Boolean Equals(::Foundation::Unreal::FGameplayTagContainer other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
