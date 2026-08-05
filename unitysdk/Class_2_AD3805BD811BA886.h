#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_AD3805BD811BA886_METHOD_2_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x13C50A70)
#define CLASS_2_AD3805BD811BA886_METHOD_2_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x13C50C20)
#define CLASS_2_AD3805BD811BA886_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x13C50840)
#define CLASS_2_AD3805BD811BA886_METHOD_2_26192858CF73CB8E_OFFSET UNITYSDK_OFFSET(0x13C50950)
#define CLASS_2_AD3805BD811BA886_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x13C50C30)
#define CLASS_2_AD3805BD811BA886_METHOD_2_B9A6947D97AA9960_OFFSET UNITYSDK_OFFSET(0x13C50AE0)
#define CLASS_2_AD3805BD811BA886__CTOR_OFFSET UNITYSDK_OFFSET(0x13C509E0)

inline static constexpr unsigned int Class_2_AD3805BD811BA886_TypeDefinitionIndex = 64622;

class Class_2_AD3805BD811BA886 : public ::Class_1_8377BAB19A574A40
{
public:
	::Struct_2_FA5F50563E60AFBA Field_2_0; // 0x80
	::UnityEngine::Vector3 Field_2_4; // 0x98
	::UnityEngine::Vector3 Field_2_6; // 0xA4
	::Struct_2_FC595D1A561D8C6F_1 Field_2_5; // 0xB0
	::System::Boolean Field_2_7; // 0xCC
	::System::Boolean Field_2_2; // 0xCD
	::System::Boolean Field_2_1; // 0xCE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_26192858CF73CB8E(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_26192858CF73CB8E_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_2_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_0F4885840B05315B_OFFSET))(this);
	}

	::System::Void Method_2_B9A6947D97AA9960(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_B9A6947D97AA9960_OFFSET))(this, a1, a2);
	}

	::Class_1_CB7F0487F7A6164A* Method_2_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_0F56D5DC9847C4D5_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
