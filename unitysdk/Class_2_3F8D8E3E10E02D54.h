#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_2FAF1077756CF23B_OFFSET UNITYSDK_OFFSET(0x17AEC620)
#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17AEC980)
#define CLASS_2_3F8D8E3E10E02D54_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17AEC8B0)
#define CLASS_2_3F8D8E3E10E02D54_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17AEC8F0)
#define CLASS_2_3F8D8E3E10E02D54_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17AEC770)
#define CLASS_2_3F8D8E3E10E02D54__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEC9E0)

inline static constexpr unsigned int Class_2_3F8D8E3E10E02D54_TypeDefinitionIndex = 75891;

class Class_2_3F8D8E3E10E02D54 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::FateRin::View::Battle::FateRinEffectController* Field_2_0; // 0x20
	::System::Object* Field_2_1; // 0x28
	::System::Action* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::UnityEngine::Vector3 Field_2_4; // 0x3C
	::UnityEngine::Vector3 Field_2_5; // 0x48
	::UnityEngine::Vector3 Field_2_6; // 0x54

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
