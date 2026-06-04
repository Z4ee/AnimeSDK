#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_B779786ED1CB5B0A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x815B0)
#define STRUCT_2_B779786ED1CB5B0A_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x81510)
#define STRUCT_2_B779786ED1CB5B0A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x815F0)
#define STRUCT_2_B779786ED1CB5B0A_RESET_OFFSET UNITYSDK_OFFSET(0x81670)
#define STRUCT_2_B779786ED1CB5B0A_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x81560)
#define STRUCT_2_B779786ED1CB5B0A__CTOR_OFFSET UNITYSDK_OFFSET(0x81490)

inline static constexpr unsigned int Struct_2_B779786ED1CB5B0A_TypeDefinitionIndex = 69933;

struct alignas(8) Struct_2_B779786ED1CB5B0A
{
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*> Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>*))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingActionData* get_Current()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B779786ED1CB5B0A_RESET_OFFSET))(this);
	}
};
