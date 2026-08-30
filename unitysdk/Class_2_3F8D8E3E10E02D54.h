#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_2FAF1077756CF23B_OFFSET UNITYSDK_OFFSET(0xB83E100)
#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB83E460)
#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB83E390)
#define CLASS_2_3F8D8E3E10E02D54_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB83E3D0)
#define CLASS_2_3F8D8E3E10E02D54_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB83E250)
#define CLASS_2_3F8D8E3E10E02D54__CTOR_OFFSET UNITYSDK_OFFSET(0xB83E4C0)

inline static constexpr unsigned int Class_2_3F8D8E3E10E02D54_TypeDefinitionIndex = 79525;

class Class_2_3F8D8E3E10E02D54 : public ::Class_1_3713064DEE761936
{
public:
	::System::Action* BBNDNGACCFL; // 0x20
	::RPG::Client::FateRin::View::Battle::FateRinEffectController* CPIIOIPAAKK; // 0x28
	::System::Object* CFKHNPGEAJA; // 0x30
	::System::Boolean BEMMCKLJICI; // 0x38
	::UnityEngine::Vector3 IEBJLLHDMAG; // 0x3C
	::UnityEngine::Vector3 IPBOCIPNDMG; // 0x48
	::UnityEngine::Vector3 IMFHNDBKHLI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54__CTOR_OFFSET))(this);
	}

	static ::Class_2_3F8D8E3E10E02D54* Method_2_2FAF1077756CF23B(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action* a6)
	{
		return ((::Class_2_3F8D8E3E10E02D54*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54_METHOD_2_2FAF1077756CF23B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F8D8E3E10E02D54_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
