#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"

namespace RPG::Client { class PamChatQuickFunctionMessage; }
namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define CLASS_2_5C7711EE249EF120_METHOD_2_485F3682F812D478_OFFSET UNITYSDK_OFFSET(0x15992530)
#define CLASS_2_5C7711EE249EF120_METHOD_2_4A0D719D9B6F0E01_OFFSET UNITYSDK_OFFSET(0x159923A0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_7F394AD56D876012_OFFSET UNITYSDK_OFFSET(0x159926E0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_802C858BEC28DAA2_OFFSET UNITYSDK_OFFSET(0x15992130)
#define CLASS_2_5C7711EE249EF120_METHOD_2_9F0453BE12082BA1_OFFSET UNITYSDK_OFFSET(0x15992260)
#define CLASS_2_5C7711EE249EF120_METHOD_2_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0x15992440)
#define CLASS_2_5C7711EE249EF120_METHOD_2_B22AC62BCA1F71BE_OFFSET UNITYSDK_OFFSET(0x15992300)
#define CLASS_2_5C7711EE249EF120_METHOD_2_B4534AD7FD2900CC_OFFSET UNITYSDK_OFFSET(0x15992080)
#define CLASS_2_5C7711EE249EF120_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15992600)
#define CLASS_2_5C7711EE249EF120__CTOR_OFFSET UNITYSDK_OFFSET(0x15992070)

inline static constexpr unsigned int Class_2_5C7711EE249EF120_TypeDefinitionIndex = 63354;

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

	::System::Void Method_2_802C858BEC28DAA2(::RPG::Client::PamChatQuickFunctionMessage* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_802C858BEC28DAA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F0453BE12082BA1(::RPG::Client::PamChatRelicExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatRelicExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_9F0453BE12082BA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B22AC62BCA1F71BE(::RPG::Client::PamChatTeamExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatTeamExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_B22AC62BCA1F71BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A0D719D9B6F0E01(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_4A0D719D9B6F0E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_B0DCF29309694C5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_485F3682F812D478(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_485F3682F812D478_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_7F394AD56D876012(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_7F394AD56D876012_OFFSET))(this, a1, a2);
	}
};
