#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define STRUCT_2_7DC5CBD32763D685_METHOD_2_22ADFB11B6D0F5DC_OFFSET UNITYSDK_OFFSET(0x7CE2A0)
#define STRUCT_2_7DC5CBD32763D685_METHOD_2_FBF4CA2221A0702E_OFFSET UNITYSDK_OFFSET(0x7CE1E0)

inline static constexpr unsigned int Struct_2_7DC5CBD32763D685_TypeDefinitionIndex = 79503;

struct alignas(8) Struct_2_7DC5CBD32763D685
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12
	::System::Boolean Field_2_3; // 0x13
	::MoleMole::UIPerformPageController* Field_2_4; // 0x18
	::System::Action* Field_2_5; // 0x20

	/*
	::Struct_2_DA3A109C3E0BFF6B Method_2_FBF4CA2221A0702E(::MoleMole::CameraShotData* a1)
	{
		return ((::Struct_2_DA3A109C3E0BFF6B(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_7DC5CBD32763D685_METHOD_2_FBF4CA2221A0702E_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_22ADFB11B6D0F5DC(::MoleMole::CameraShotData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_7DC5CBD32763D685_METHOD_2_22ADFB11B6D0F5DC_OFFSET))(this, a1);
	}
};
