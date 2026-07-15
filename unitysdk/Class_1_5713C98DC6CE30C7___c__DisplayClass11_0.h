#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoEffect; }

#define CLASS_1_5713C98DC6CE30C7___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192167F0)
#define CLASS_1_5713C98DC6CE30C7___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x192168F0)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7___c__DisplayClass11_0_TypeDefinitionIndex = 57505;

class Class_1_5713C98DC6CE30C7___c__DisplayClass11_0 : public ::System::Object
{
public:
	::UnityEngine::Quaternion particleRot; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _Update_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET))(this, a1, a2);
	}
};
