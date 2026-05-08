#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9397D0)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x939830)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_UNREALTYPES_ISTRUCT_FOUNDATION_UNREAL_FGAMEPLAYTAG__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD98820)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int StructWrapper_FGameplayTag_TypeDefinitionIndex = 25181;

	struct alignas(1) StructWrapper_FGameplayTag
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StructWrapper_FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x1EB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		::Foundation::Unreal::FGameplayTag DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::Foundation::Unreal::FGameplayTag CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::Foundation::Unreal::FGameplayTag MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::Foundation::Unreal::FGameplayTag& other)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_Foundation_Unreal_FGameplayTag__CopyAssign(::Foundation::Unreal::FGameplayTag& other)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_UNREALTYPES_ISTRUCT_FOUNDATION_UNREAL_FGAMEPLAYTAG__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
