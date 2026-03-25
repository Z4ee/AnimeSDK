#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleEffectService_1.h"

class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F5974F3A22EA428A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CD1BA0)
#define CLASS_2_F5974F3A22EA428A__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD1B80)
#define CLASS_2_F5974F3A22EA428A__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x8CD1BF0)
#define CLASS_2_F5974F3A22EA428A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CD1CB0)

inline static constexpr unsigned int Class_2_F5974F3A22EA428A_TypeDefinitionIndex = 62571;

class Class_2_F5974F3A22EA428A : public ::RPG::Client::LittleGame::SimpleEffectService_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_3_1A92845FAFA5EC77* a2, ::System::Action_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_1A92845FAFA5EC77*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A_DISPOSE_OFFSET))(this);
	}

	::System::Void _SetEffectParamLittleGameEntity(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
