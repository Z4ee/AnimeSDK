#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CameraShotData; }
namespace System { class Action; }

#define STRUCT_2_F0A0419FF1AFE70D_METHOD_2_1BECF24A1D60F5E5_OFFSET UNITYSDK_OFFSET(0x880550)
#define STRUCT_2_F0A0419FF1AFE70D_METHOD_2_458EBCEF7E8885FA_OFFSET UNITYSDK_OFFSET(0x8804A0)
#define STRUCT_2_F0A0419FF1AFE70D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x880530)
#define STRUCT_2_F0A0419FF1AFE70D_METHOD_2_CCEB877A7C43A295_OFFSET UNITYSDK_OFFSET(0x880520)

inline static constexpr unsigned int Struct_2_F0A0419FF1AFE70D_TypeDefinitionIndex = 81661;

struct alignas(8) Struct_2_F0A0419FF1AFE70D
{
	::System::Action* Field_2_0; // 0x10

	::System::Void Method_2_458EBCEF7E8885FA(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_METHOD_2_458EBCEF7E8885FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CCEB877A7C43A295(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_METHOD_2_CCEB877A7C43A295_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_1BECF24A1D60F5E5(::MoleMole::CameraShotData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_METHOD_2_1BECF24A1D60F5E5_OFFSET))(this, a1);
	}
};
