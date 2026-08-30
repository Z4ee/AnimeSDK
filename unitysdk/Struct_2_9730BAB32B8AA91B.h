#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System { class Object; }

#define STRUCT_2_9730BAB32B8AA91B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2DE9D10)
#define STRUCT_2_9730BAB32B8AA91B_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define STRUCT_2_9730BAB32B8AA91B_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define STRUCT_2_9730BAB32B8AA91B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2DE9D60)
#define STRUCT_2_9730BAB32B8AA91B_RESET_OFFSET UNITYSDK_OFFSET(0x2DE9D70)
#define STRUCT_2_9730BAB32B8AA91B_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC610)
#define STRUCT_2_9730BAB32B8AA91B_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xDAC0)
#define STRUCT_2_9730BAB32B8AA91B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2DE9CC0)
#define STRUCT_2_9730BAB32B8AA91B__CTOR_OFFSET UNITYSDK_OFFSET(0x2DE9CA0)

inline static constexpr unsigned int Struct_2_9730BAB32B8AA91B_TypeDefinitionIndex = 74760;

struct alignas(8) Struct_2_9730BAB32B8AA91B
{
	::RPG::Client::SwordTraining::SwordTrainingActionData* _Current_k__BackingField; // 0x10
	::System::UInt32 _Index_k__BackingField; // 0x18
	::RPG::Client::SwordTraining::SwordTrainingActionSelection* CFKHNPGEAJA; // 0x20

	::System::Void _ctor(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingActionData* get_Current()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::RPG::Client::SwordTraining::SwordTrainingActionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_SET_CURRENT_OFFSET))(this, a1);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_RESET_OFFSET))(this);
	}

	::System::UInt32 get_Index()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_9730BAB32B8AA91B_SET_INDEX_OFFSET))(this, a1);
	}
};
