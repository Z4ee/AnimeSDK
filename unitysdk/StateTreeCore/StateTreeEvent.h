#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEVENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6DB220)
#define STATETREECORE_STATETREEEVENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x246290)
#define STATETREECORE_STATETREEEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1E85BC60)
#define STATETREECORE_STATETREEEVENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA82650)
#define STATETREECORE_STATETREEEVENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEEVENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREEEVENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA82710)
#define STATETREECORE_STATETREEEVENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6DB220)
#define STATETREECORE_STATETREEEVENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x246290)
#define STATETREECORE_STATETREEEVENT_RESET_OFFSET UNITYSDK_OFFSET(0xA826B0)
#define STATETREECORE_STATETREEEVENT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEVENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6DB220)
#define STATETREECORE_STATETREEEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85BE30)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEvent_TypeDefinitionIndex = 30922;

	struct alignas(4) StateTreeEvent
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeEvent_TypeDefinitionIndex)->GetStaticField(0x25800);
		}
		::Foundation::Unreal::FGameplayTag Tag; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeEvent Create()
		{
			return ((::StateTreeCore::StateTreeEvent(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeEvent DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEvent(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEvent CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEvent(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEvent MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEvent(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeEvent& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEvent&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeEvent& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEvent&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeEvent__CopyAssign(::StateTreeCore::StateTreeEvent& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEvent&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEVENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
