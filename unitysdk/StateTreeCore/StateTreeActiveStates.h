#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates___states_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEACTIVESTATES_CLEAR_OFFSET UNITYSDK_OFFSET(0xA746D0)
#define STATETREECORE_STATETREEACTIVESTATES_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xA74670)
#define STATETREECORE_STATETREEACTIVESTATES_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA74620)
#define STATETREECORE_STATETREEACTIVESTATES_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA74780)
#define STATETREECORE_STATETREEACTIVESTATES_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA74760)
#define STATETREECORE_STATETREEACTIVESTATES_CREATE_OFFSET UNITYSDK_OFFSET(0x1E680590)
#define STATETREECORE_STATETREEACTIVESTATES_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA74750)
#define STATETREECORE_STATETREEACTIVESTATES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEACTIVESTATES_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA74730)
#define STATETREECORE_STATETREEACTIVESTATES_GETSTATESAFE_OFFSET UNITYSDK_OFFSET(0xA74520)
#define STATETREECORE_STATETREEACTIVESTATES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3645D0)
#define STATETREECORE_STATETREEACTIVESTATES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA74470)
#define STATETREECORE_STATETREEACTIVESTATES_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREEACTIVESTATES_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA747A0)
#define STATETREECORE_STATETREEACTIVESTATES_INDEXOFREVERSE_OFFSET UNITYSDK_OFFSET(0xA746E0)
#define STATETREECORE_STATETREEACTIVESTATES_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0xA74480)
#define STATETREECORE_STATETREEACTIVESTATES_LAST_OFFSET UNITYSDK_OFFSET(0xA744A0)
#define STATETREECORE_STATETREEACTIVESTATES_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA74780)
#define STATETREECORE_STATETREEACTIVESTATES_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA74760)
#define STATETREECORE_STATETREEACTIVESTATES_POP_OFFSET UNITYSDK_OFFSET(0xA745B0)
#define STATETREECORE_STATETREEACTIVESTATES_PUSH_OFFSET UNITYSDK_OFFSET(0xA74590)
#define STATETREECORE_STATETREEACTIVESTATES_RESET_OFFSET UNITYSDK_OFFSET(0xA74790)
#define STATETREECORE_STATETREEACTIVESTATES_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEACTIVESTATES__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA74780)
#define STATETREECORE_STATETREEACTIVESTATES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E680700)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeActiveStates_TypeDefinitionIndex = 30944;

	struct alignas(2) StateTreeActiveStates
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeActiveStates_TypeDefinitionIndex)->GetStaticField(0x256E0);
		}
		// static const ::System::Int32 MaxStates = 0x8; // 0x0
		::StateTreeCore::StateTreeActiveStates___states_e__FixedBuffer _states; // 0x10
		::System::Byte _numStates; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_COUNT_OFFSET))(this);
		}

		/*
		::StateTreeCore::StateTreeStateHandle get_Item(::System::Int32 index)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_ITEM_OFFSET))(this, index);
		}
		*/

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ISVALIDINDEX_OFFSET))(this, index);
		}

		/*
		::StateTreeCore::StateTreeStateHandle Last()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_LAST_OFFSET))(this);
		}
		*/

		/*
		::StateTreeCore::StateTreeStateHandle GetStateSafe(::System::Int32 index)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GETSTATESAFE_OFFSET))(this, index);
		}
		*/

		/*
		::System::Boolean Push(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_PUSH_OFFSET))(this, stateHandle);
		}
		*/

		/*
		::StateTreeCore::StateTreeStateHandle Pop()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_POP_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Contains(::StateTreeCore::StateTreeStateHandle state)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CONTAINS_OFFSET))(this, state);
		}
		*/

		/*
		::System::Boolean Contains_1(::StateTreeCore::StateTreeStateHandle stateHandle, ::System::Byte maxNumStatesToCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle, ::System::Byte))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CONTAINS_1_OFFSET))(this, stateHandle, maxNumStatesToCheck);
		}
		*/

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CLEAR_OFFSET))(this);
		}

		/*
		::System::Int32 IndexOfReverse(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Int32(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_INDEXOFREVERSE_OFFSET))(this, stateHandle);
		}
		*/

		/*
		::StateTreeCore::StateTreeActiveStates_Enumerator GetEnumerator()
		{
			return ((::StateTreeCore::StateTreeActiveStates_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeActiveStates Create()
		{
			return ((::StateTreeCore::StateTreeActiveStates(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeActiveStates DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeActiveStates(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeActiveStates CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeActiveStates(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeActiveStates MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeActiveStates(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeActiveStates& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeActiveStates& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeActiveStates__CopyAssign(::StateTreeCore::StateTreeActiveStates& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEACTIVESTATES__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
