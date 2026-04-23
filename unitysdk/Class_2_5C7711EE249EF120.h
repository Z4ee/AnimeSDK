#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"

namespace RPG::Client { class PamChatQuickFunctionMessage; }
namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define CLASS_2_5C7711EE249EF120_METHOD_2_140F1280BAEEA361_OFFSET UNITYSDK_OFFSET(0x123C9900)
#define CLASS_2_5C7711EE249EF120_METHOD_2_33CB52BC5824B2C7_OFFSET UNITYSDK_OFFSET(0x123C97C0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_399C08F8B0DA6BEB_OFFSET UNITYSDK_OFFSET(0x123C9B50)
#define CLASS_2_5C7711EE249EF120_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x123C9AC0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_918AB612278D9CC7_OFFSET UNITYSDK_OFFSET(0x123C99A0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_AC8F4CA14263A485_OFFSET UNITYSDK_OFFSET(0x123C9860)
#define CLASS_2_5C7711EE249EF120_METHOD_2_B4534AD7FD2900CC_OFFSET UNITYSDK_OFFSET(0x123C9570)
#define CLASS_2_5C7711EE249EF120_METHOD_2_C752D10076D7D45E_OFFSET UNITYSDK_OFFSET(0x123C9620)
#define CLASS_2_5C7711EE249EF120_METHOD_2_FFDDD9CC0D2E78CB_OFFSET UNITYSDK_OFFSET(0x123C9A30)
#define CLASS_2_5C7711EE249EF120__CTOR_OFFSET UNITYSDK_OFFSET(0x123C9560)

inline static constexpr unsigned int Class_2_5C7711EE249EF120_TypeDefinitionIndex = 58300;

class Class_2_5C7711EE249EF120 : public ::Class_1_98274A1A3981A020
{
public:
	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4534AD7FD2900CC(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_B4534AD7FD2900CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C752D10076D7D45E(::RPG::Client::PamChatQuickFunctionMessage* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_C752D10076D7D45E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33CB52BC5824B2C7(::RPG::Client::PamChatRelicExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatRelicExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_33CB52BC5824B2C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AC8F4CA14263A485(::RPG::Client::PamChatTeamExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatTeamExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_AC8F4CA14263A485_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_140F1280BAEEA361(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_140F1280BAEEA361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_918AB612278D9CC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_918AB612278D9CC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFDDD9CC0D2E78CB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_FFDDD9CC0D2E78CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_399C08F8B0DA6BEB(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_399C08F8B0DA6BEB_OFFSET))(this, a1, a2);
	}
};
