#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9BB05DF80D1274B8;
class Class_2_68CB91321C3E76A7;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }

#define CLASS_1_9BB05DF80D1274B8___C__DISPLAYCLASS7_0__CREATEPIXAIRMISSILEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x176B8260)
#define CLASS_1_9BB05DF80D1274B8___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176B6710)

inline static constexpr unsigned int Class_1_9BB05DF80D1274B8___c__DisplayClass7_0_TypeDefinitionIndex = 73354;

class Class_1_9BB05DF80D1274B8___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::String* hitEffectPath; // 0x10
	::Class_1_9BB05DF80D1274B8* __4__this; // 0x18
	::Class_2_68CB91321C3E76A7* missileEntity; // 0x20
	::System::Int32 targetRuntimeID; // 0x28
	::UnityEngine::Vector3 localRight; // 0x2C
	::UnityEngine::Vector3 normalizedControlPoint; // 0x38
	::System::Single effectScale; // 0x44
	::System::UInt32 effectID; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreatePixAirMissileEntity_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8___C__DISPLAYCLASS7_0__CREATEPIXAIRMISSILEENTITY_B__0_OFFSET))(this, a1, a2);
	}
};
