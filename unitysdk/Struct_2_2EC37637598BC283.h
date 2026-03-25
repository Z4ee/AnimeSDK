#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_2EC37637598BC283_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B160)
#define STRUCT_2_2EC37637598BC283_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC5B0C0)
#define STRUCT_2_2EC37637598BC283_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC5B1A0)
#define STRUCT_2_2EC37637598BC283_RESET_OFFSET UNITYSDK_OFFSET(0xC5B220)
#define STRUCT_2_2EC37637598BC283_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC5B110)
#define STRUCT_2_2EC37637598BC283__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B040)

inline static constexpr unsigned int Struct_2_2EC37637598BC283_TypeDefinitionIndex = 61609;

struct alignas(8) Struct_2_2EC37637598BC283
{
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*> Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>*))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingActionData* get_Current()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EC37637598BC283_RESET_OFFSET))(this);
	}
};
