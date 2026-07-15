#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PamChatQuickFunctionMessage; }
namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define CLASS_1_98274A1A3981A020__CTOR_OFFSET UNITYSDK_OFFSET(0x17204420)

inline static constexpr unsigned int Class_1_98274A1A3981A020_TypeDefinitionIndex = 60439;

class Class_1_98274A1A3981A020 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_3 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020__CTOR_OFFSET))(this, a1);
	}
};
