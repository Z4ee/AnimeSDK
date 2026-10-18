#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1558;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define CLASS_2_5AAB0F9F181EF85B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1584FF20)
#define CLASS_2_5AAB0F9F181EF85B_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1584FE60)
#define CLASS_2_5AAB0F9F181EF85B_METHOD_2_BA4DBE862FD2D20B_OFFSET UNITYSDK_OFFSET(0x1584FCB0)
#define CLASS_2_5AAB0F9F181EF85B_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1584FEC0)
#define CLASS_2_5AAB0F9F181EF85B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1584FD60)
#define CLASS_2_5AAB0F9F181EF85B__CTOR_OFFSET UNITYSDK_OFFSET(0x1584FF80)

inline static constexpr unsigned int Class_2_5AAB0F9F181EF85B_TypeDefinitionIndex = 80850;

class Class_2_5AAB0F9F181EF85B : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* ADIGLGPDGGH; // 0x20
	::Class_0_16E4307DCC419505_1558* NBHJNGJIIEA; // 0x28
	::UnityEngine::Vector3 EIMIIPBMGKG; // 0x30
	::System::Boolean BEMMCKLJICI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B__CTOR_OFFSET))(this);
	}

	static ::Class_2_5AAB0F9F181EF85B* Method_2_BA4DBE862FD2D20B(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::UnityEngine::Vector3 a2, ::Class_0_16E4307DCC419505_1558* a3)
	{
		return ((::Class_2_5AAB0F9F181EF85B*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1558*))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B_METHOD_2_BA4DBE862FD2D20B_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AAB0F9F181EF85B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
