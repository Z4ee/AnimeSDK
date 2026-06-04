#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleEffectService_1.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F5974F3A22EA428A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEC8750)
#define CLASS_2_F5974F3A22EA428A__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC8730)
#define CLASS_2_F5974F3A22EA428A__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xAEC87A0)
#define CLASS_2_F5974F3A22EA428A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEC8940)

inline static constexpr unsigned int Class_2_F5974F3A22EA428A_TypeDefinitionIndex = 71401;

class Class_2_F5974F3A22EA428A : public ::RPG::Client::LittleGame::SimpleEffectService_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::System::Action_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_1E4F9B0ED3BF21DE*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A_DISPOSE_OFFSET))(this);
	}

	::System::Void _SetEffectParamLittleGameEntity(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5974F3A22EA428A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
