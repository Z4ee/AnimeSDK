#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define CLASS_3_43F8BD128E804CC3_METHOD_3_DB549928E9497557_OFFSET UNITYSDK_OFFSET(0x10C5A060)
#define CLASS_3_43F8BD128E804CC3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10C5A2C0)
#define CLASS_3_43F8BD128E804CC3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10C5A100)
#define CLASS_3_43F8BD128E804CC3__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5A340)
#define CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10C5A3B0)
#define CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10C5A350)

inline static constexpr unsigned int Class_3_43F8BD128E804CC3_TypeDefinitionIndex = 63626;

class Class_3_43F8BD128E804CC3 : public ::Class_2_A45A3A893E113CFD
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* Field_3_0; // 0x20
	::RPG::Client::TextID Field_3_2; // 0x28
	::System::Boolean Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3__CTOR_OFFSET))(this);
	}

	static ::Class_3_43F8BD128E804CC3* Method_3_DB549928E9497557(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a1, ::System::Boolean a2, ::RPG::Client::TextID a3)
	{
		return ((::Class_3_43F8BD128E804CC3*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_METHOD_3_DB549928E9497557_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
