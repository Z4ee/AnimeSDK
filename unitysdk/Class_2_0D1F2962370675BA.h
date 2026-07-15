#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Object; }

#define CLASS_2_0D1F2962370675BA_METHOD_2_10AEFFE6314C3D88_OFFSET UNITYSDK_OFFSET(0x1699B400)
#define CLASS_2_0D1F2962370675BA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1699B790)
#define CLASS_2_0D1F2962370675BA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1699B6C0)
#define CLASS_2_0D1F2962370675BA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1699B700)
#define CLASS_2_0D1F2962370675BA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1699B520)
#define CLASS_2_0D1F2962370675BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1699B7F0)

inline static constexpr unsigned int Class_2_0D1F2962370675BA_TypeDefinitionIndex = 75893;

class Class_2_0D1F2962370675BA : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::FateRin::View::Battle::FateRinEffectController* Field_2_0; // 0x20
	::System::Object* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::UnityEngine::Vector3 Field_2_4; // 0x40
	::UnityEngine::Vector3 Field_2_5; // 0x4C

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
