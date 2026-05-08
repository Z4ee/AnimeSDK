#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREERANDOMTIMEDURATION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6B7750)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C33ABC0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GETRANDOMDURATION_OFFSET UNITYSDK_OFFSET(0x9D3490)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9D3240)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9D3280)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_RANDOMVARIANCE_OFFSET UNITYSDK_OFFSET(0x9D3260)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9D34D0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9D3530)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6B7750)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_QUANTIZE_OFFSET UNITYSDK_OFFSET(0x1C33A860)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_RESET_OFFSET UNITYSDK_OFFSET(0x3046B0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_SET_OFFSET UNITYSDK_OFFSET(0x9D32A0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREERANDOMTIMEDURATION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6B7750)
#define STATETREECORE_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C33ACF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeRandomTimeDuration_TypeDefinitionIndex = 28417;

	struct alignas(2) StateTreeRandomTimeDuration
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x21950);
		}
		// static const ::System::Single Scale; // 0x0
		// static const ::System::UInt32 PersistentTypeHash = 0xBA1E9328; // 0x0
		::System::UInt16 _duration; // 0x10
		::System::UInt16 _randomVariance; // 0x12

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET))();
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_RandomVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_RANDOMVARIANCE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_ISEMPTY_OFFSET))(this);
		}

		static ::System::UInt16 Quantize(::System::Single value)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_QUANTIZE_OFFSET))(value);
		}

		::System::Void Set(::System::Single duration, ::System::Single randomVariance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_SET_OFFSET))(this, duration, randomVariance);
		}

		::System::Single GetRandomDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GETRANDOMDURATION_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeRandomTimeDuration Create()
		{
			return ((::StateTreeCore::StateTreeRandomTimeDuration(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeRandomTimeDuration DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeRandomTimeDuration(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeRandomTimeDuration CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeRandomTimeDuration(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeRandomTimeDuration MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeRandomTimeDuration(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeRandomTimeDuration& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRandomTimeDuration&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeRandomTimeDuration& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRandomTimeDuration&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeRandomTimeDuration__CopyAssign(::StateTreeCore::StateTreeRandomTimeDuration& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRandomTimeDuration&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREERANDOMTIMEDURATION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
