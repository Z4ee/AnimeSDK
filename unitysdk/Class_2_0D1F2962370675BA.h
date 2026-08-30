#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Object; }

#define CLASS_2_0D1F2962370675BA_METHOD_2_10AEFFE6314C3D88_OFFSET UNITYSDK_OFFSET(0xF441530)
#define CLASS_2_0D1F2962370675BA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF4418C0)
#define CLASS_2_0D1F2962370675BA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF4417F0)
#define CLASS_2_0D1F2962370675BA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF441830)
#define CLASS_2_0D1F2962370675BA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF441650)
#define CLASS_2_0D1F2962370675BA__CTOR_OFFSET UNITYSDK_OFFSET(0xF441920)

inline static constexpr unsigned int Class_2_0D1F2962370675BA_TypeDefinitionIndex = 79527;

class Class_2_0D1F2962370675BA : public ::Class_1_3713064DEE761936
{
public:
	::System::Object* CFKHNPGEAJA; // 0x20
	::RPG::Client::FateRin::View::Battle::FateRinEffectController* CPIIOIPAAKK; // 0x28
	::UnityEngine::Vector3 IPBOCIPNDMG; // 0x30
	::UnityEngine::Vector3 IEBJLLHDMAG; // 0x3C
	::System::Boolean BEMMCKLJICI; // 0x48
	::UnityEngine::Vector3 IMFHNDBKHLI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA__CTOR_OFFSET))(this);
	}

	static ::Class_2_0D1F2962370675BA* Method_2_10AEFFE6314C3D88(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::Class_2_0D1F2962370675BA*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA_METHOD_2_10AEFFE6314C3D88_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D1F2962370675BA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
