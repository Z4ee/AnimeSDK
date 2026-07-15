#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class String; }

#define CLASS_1_D928AFB1A2434A0E_METHOD_1_059C4DEF7C83D94F_OFFSET UNITYSDK_OFFSET(0x15EAC2E0)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_05E10F4A3388E492_1_OFFSET UNITYSDK_OFFSET(0x15EAC0F0)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_05E10F4A3388E492_OFFSET UNITYSDK_OFFSET(0x15EABFA0)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_267F5DE36676CEDB_OFFSET UNITYSDK_OFFSET(0x15EAC4B0)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x15EAC190)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_EACF710F6ADE4D40_OFFSET UNITYSDK_OFFSET(0x15EAC040)
#define CLASS_1_D928AFB1A2434A0E_METHOD_1_F24D6AF77FF24C00_OFFSET UNITYSDK_OFFSET(0x15EAC590)

inline static constexpr unsigned int Class_1_D928AFB1A2434A0E_TypeDefinitionIndex = 70361;

class Class_1_D928AFB1A2434A0E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::String* Method_1_05E10F4A3388E492(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_05E10F4A3388E492_OFFSET))(a1);
	}

	static ::System::String* Method_1_05E10F4A3388E492_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_05E10F4A3388E492_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_059C4DEF7C83D94F(::System::String* a1, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*&))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_059C4DEF7C83D94F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_267F5DE36676CEDB(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_267F5DE36676CEDB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F24D6AF77FF24C00(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_F24D6AF77FF24C00_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_EACF710F6ADE4D40(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D928AFB1A2434A0E_METHOD_1_EACF710F6ADE4D40_OFFSET))(a1);
	}
};
