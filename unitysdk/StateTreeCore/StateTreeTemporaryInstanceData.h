#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xACA1B0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xAC9FA0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB53950)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xAC9F80)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACA2E0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xACA300)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xACA1F0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xACA110)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xACA230)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETEMPORARYINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xACA1B0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB53ED0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTemporaryInstanceData_TypeDefinitionIndex = 31573;

	struct alignas(8) StateTreeTemporaryInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTemporaryInstanceData_TypeDefinitionIndex)->GetStaticField(0x26B90);
		}
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::StateTreeCore::StateTreeStateHandle RootState; // 0x18
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x1A
		::System::UInt16 OwnerNodeIndex; // 0x20
		::UnrealTypes::FInstancedStruct Instance; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeTemporaryInstanceData Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTemporaryInstanceData(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreeTemporaryInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTemporaryInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTemporaryInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTemporaryInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTemporaryInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTemporaryInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeTemporaryInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTemporaryInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeTemporaryInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTemporaryInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTemporaryInstanceData__CopyAssign(::StateTreeCore::StateTreeTemporaryInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTemporaryInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETEMPORARYINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
