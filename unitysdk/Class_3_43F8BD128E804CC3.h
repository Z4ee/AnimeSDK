#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_33.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define CLASS_3_43F8BD128E804CC3_METHOD_3_DB549928E9497557_OFFSET UNITYSDK_OFFSET(0xCEC1FF0)
#define CLASS_3_43F8BD128E804CC3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCEC2250)
#define CLASS_3_43F8BD128E804CC3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCEC2090)
#define CLASS_3_43F8BD128E804CC3__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC22D0)
#define CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCEC2340)
#define CLASS_3_43F8BD128E804CC3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCEC22E0)

inline static constexpr unsigned int Class_3_43F8BD128E804CC3_TypeDefinitionIndex = 72688;

class Class_3_43F8BD128E804CC3 : public ::Class_2_A48F3719AA1CF200_33
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* Field_3_0; // 0x20
	::RPG::Client::TextID Field_3_1; // 0x28
	::System::Boolean Field_3_2; // 0x38

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
