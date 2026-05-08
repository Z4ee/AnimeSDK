#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDPARENTSFORTAG_OFFSET UNITYSDK_OFFSET(0x1B381C20)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDTAGFAST_OFFSET UNITYSDK_OFFSET(0x1B383320)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDTAG_OFFSET UNITYSDK_OFFSET(0x1B3832B0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_APPENDTAGS_OFFSET UNITYSDK_OFFSET(0x1B383110)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILLPARENTTAGS_OFFSET UNITYSDK_OFFSET(0x1B383620)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILTEREXACT_OFFSET UNITYSDK_OFFSET(0x1B382CE0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILTER_OFFSET UNITYSDK_OFFSET(0x1B382950)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_GETGAMEPLAYTAGPARENTS_OFFSET UNITYSDK_OFFSET(0x1B382690)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASALLEXACT_OFFSET UNITYSDK_OFFSET(0x1B3824D0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASALL_OFFSET UNITYSDK_OFFSET(0x1B3822C0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASANYEXACT_OFFSET UNITYSDK_OFFSET(0x1B382120)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASANY_OFFSET UNITYSDK_OFFSET(0x1B381F10)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASTAGEXACT_OFFSET UNITYSDK_OFFSET(0x1B381E80)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASTAG_OFFSET UNITYSDK_OFFSET(0x1B381D80)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B382680)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_NUM_OFFSET UNITYSDK_OFFSET(0x1B382670)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_REMOVETAGS_OFFSET UNITYSDK_OFFSET(0x1B3834A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_REMOVETAG_OFFSET UNITYSDK_OFFSET(0x1B3833A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_RESET_OFFSET UNITYSDK_OFFSET(0x1B3835F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3836B0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainerMethod_TypeDefinitionIndex = 8792;

	class FGameplayTagContainerMethod : public ::System::Object
	{
	public:
		static ::System::Func_3<::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag, ::System::Boolean>** StaticGet_Comparer()
		{
			return (::System::Func_3<::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainerMethod_TypeDefinitionIndex)->GetStaticField(0x7D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD__CCTOR_OFFSET))();
		}

		static ::System::Void AddParentsForTag(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDPARENTSFORTAG_OFFSET))(self, tag);
		}

		static ::System::Boolean HasTag(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tagToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASTAG_OFFSET))(self, tagToCheck);
		}

		static ::System::Boolean HasTagExact(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tagToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASTAGEXACT_OFFSET))(self, tagToCheck);
		}

		static ::System::Boolean HasAny(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASANY_OFFSET))(self, containerToCheck);
		}

		static ::System::Boolean HasAnyExact(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASANYEXACT_OFFSET))(self, containerToCheck);
		}

		static ::System::Boolean HasAll(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASALL_OFFSET))(self, containerToCheck);
		}

		static ::System::Boolean HasAllExact(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& containerToCheck)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_HASALLEXACT_OFFSET))(self, containerToCheck);
		}

		static ::System::Int32 Num(::Foundation::Unreal::FGameplayTagContainer& self)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_NUM_OFFSET))(self);
		}

		static ::System::Boolean IsEmpty(::Foundation::Unreal::FGameplayTagContainer& self)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ISEMPTY_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagContainer GetGameplayTagParents(::Foundation::Unreal::FGameplayTagContainer& self)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_GETGAMEPLAYTAGPARENTS_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagContainer Filter(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& other)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILTER_OFFSET))(self, other);
		}

		static ::Foundation::Unreal::FGameplayTagContainer FilterExact(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& other)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILTEREXACT_OFFSET))(self, other);
		}

		static ::System::Void AppendTags(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& other)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_APPENDTAGS_OFFSET))(self, other);
		}

		static ::System::Void AddTag(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tagToAdd)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDTAG_OFFSET))(self, tagToAdd);
		}

		static ::System::Void AddTagFast(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tagToAdd)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_ADDTAGFAST_OFFSET))(self, tagToAdd);
		}

		static ::System::Boolean RemoveTag(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTag tagToRemove, ::System::Boolean deferParentTag)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_REMOVETAG_OFFSET))(self, tagToRemove, deferParentTag);
		}

		static ::System::Void RemoveTags(::Foundation::Unreal::FGameplayTagContainer& self, ::Foundation::Unreal::FGameplayTagContainer& tagsToRemove)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_REMOVETAGS_OFFSET))(self, tagsToRemove);
		}

		static ::System::Void Reset(::Foundation::Unreal::FGameplayTagContainer& self)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_RESET_OFFSET))(self);
		}

		static ::System::Void FillParentTags(::Foundation::Unreal::FGameplayTagContainer& self)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD_FILLPARENTTAGS_OFFSET))(self);
		}
	};
}
