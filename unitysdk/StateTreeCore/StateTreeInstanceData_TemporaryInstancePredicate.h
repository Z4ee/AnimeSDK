#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

#define STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE_MATCHES_OFFSET UNITYSDK_OFFSET(0xAC6590)
#define STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE_UNREALTYPES_NATIVESTRUCTLIST_STATETREECORE_STATETREETEMPORARYINSTANCEDATA__IPREDICATE_MATCHES_OFFSET UNITYSDK_OFFSET(0xAC6590)
#define STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x497300)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceData_TemporaryInstancePredicate_TypeDefinitionIndex = 31576;

	struct alignas(8) StateTreeInstanceData_TemporaryInstancePredicate
	{
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _frame; // 0x10
		::StateTreeCore::StateTreeDataHandle _dataHandle; // 0x18

		::System::Void _ctor(::StateTreeCore::StateTreeExecutionFrame& frame, ::StateTreeCore::StateTreeDataHandle dataHandle)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE__CTOR_OFFSET))(this, frame, dataHandle);
		}

		/*
		::System::Boolean Matches(::StateTreeCore::StateTreeTemporaryInstanceData& tempInstance)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeTemporaryInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE_MATCHES_OFFSET))(this, tempInstance);
		}
		*/

		/*
		::System::Boolean UnrealTypes_NativeStructList_StateTreeCore_StateTreeTemporaryInstanceData__IPredicate_Matches(::StateTreeCore::StateTreeTemporaryInstanceData& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeTemporaryInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_TEMPORARYINSTANCEPREDICATE_UNREALTYPES_NATIVESTRUCTLIST_STATETREECORE_STATETREETEMPORARYINSTANCEDATA__IPREDICATE_MATCHES_OFFSET))(this, value);
		}
		*/
	};
}
