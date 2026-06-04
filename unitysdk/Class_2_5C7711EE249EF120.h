#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"

namespace RPG::Client { class PamChatQuickFunctionMessage; }
namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define CLASS_2_5C7711EE249EF120_METHOD_2_01746650EFB5C402_OFFSET UNITYSDK_OFFSET(0x13C1B840)
#define CLASS_2_5C7711EE249EF120_METHOD_2_140F1280BAEEA361_OFFSET UNITYSDK_OFFSET(0x13C1B710)
#define CLASS_2_5C7711EE249EF120_METHOD_2_148F44CC518F4549_OFFSET UNITYSDK_OFFSET(0x13C1B670)
#define CLASS_2_5C7711EE249EF120_METHOD_2_7191B2329FC9B1F8_OFFSET UNITYSDK_OFFSET(0x13C1B5D0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x13C1B8D0)
#define CLASS_2_5C7711EE249EF120_METHOD_2_99051BEEED8EB83D_OFFSET UNITYSDK_OFFSET(0x13C1B960)
#define CLASS_2_5C7711EE249EF120_METHOD_2_B4534AD7FD2900CC_OFFSET UNITYSDK_OFFSET(0x13C1B380)
#define CLASS_2_5C7711EE249EF120_METHOD_2_C752D10076D7D45E_OFFSET UNITYSDK_OFFSET(0x13C1B430)
#define CLASS_2_5C7711EE249EF120_METHOD_2_D68F88321A537429_OFFSET UNITYSDK_OFFSET(0x13C1B7B0)
#define CLASS_2_5C7711EE249EF120__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1B370)

inline static constexpr unsigned int Class_2_5C7711EE249EF120_TypeDefinitionIndex = 59230;

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

	::System::Void Method_2_7191B2329FC9B1F8(::RPG::Client::PamChatRelicExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatRelicExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_7191B2329FC9B1F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_148F44CC518F4549(::RPG::Client::PamChatTeamExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatTeamExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_148F44CC518F4549_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_140F1280BAEEA361(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_140F1280BAEEA361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D68F88321A537429(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_D68F88321A537429_OFFSET))(this, a1);
	}

	::System::Void Method_2_01746650EFB5C402(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_01746650EFB5C402_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_99051BEEED8EB83D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C7711EE249EF120_METHOD_2_99051BEEED8EB83D_OFFSET))(this, a1, a2);
	}
};
