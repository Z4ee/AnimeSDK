#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CameraShotData; }
namespace System { class Action; }

#define STRUCT_2_995753E09A173E79_METHOD_2_23A1CFE61714F558_OFFSET UNITYSDK_OFFSET(0x803710)
#define STRUCT_2_995753E09A173E79_METHOD_2_B8EEF46D1E3C55CE_OFFSET UNITYSDK_OFFSET(0x803740)
#define STRUCT_2_995753E09A173E79_METHOD_2_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0x803720)
#define STRUCT_2_995753E09A173E79_METHOD_2_CCEB877A7C43A295_OFFSET UNITYSDK_OFFSET(0x8037C0)

inline static constexpr unsigned int Struct_2_995753E09A173E79_TypeDefinitionIndex = 42025;

struct alignas(8) Struct_2_995753E09A173E79
{
	::System::Action* Field_2_0; // 0x10

	::System::Void Method_2_23A1CFE61714F558(::MoleMole::CameraShotData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_METHOD_2_23A1CFE61714F558_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_METHOD_2_C1EB52A4F4431ADE_OFFSET))(this);
	}

	::System::Void Method_2_B8EEF46D1E3C55CE(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_METHOD_2_B8EEF46D1E3C55CE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CCEB877A7C43A295(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_METHOD_2_CCEB877A7C43A295_OFFSET))(this, a1, a2, a3);
	}
};
