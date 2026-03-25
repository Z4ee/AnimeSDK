#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

class Class_1_43B508F64DA705FE;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_GET_FOLLOWPATH_OFFSET UNITYSDK_OFFSET(0x98CA350)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x98CA390)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x98CA830)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x98CA890)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_SETUPTRAIT_OFFSET UNITYSDK_OFFSET(0x98CA710)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98CAAA0)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x98CAAB0)
#define RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x98CAAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitActiveEffect_TypeDefinitionIndex = 52399;

	class GridFightTraitActiveEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::System::Single Field_6_0; // 0x30
		::RPG::Client::MonoUIColorSwitcher* Field_6_1; // 0x38
		::UnityEngine::UI::Image* Field_6_2; // 0x40
		::Class_1_43B508F64DA705FE* Field_6_3; // 0x48
		::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_6_4; // 0x50
		::UnityEngine::Animation* Field_6_5; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_FollowPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_GET_FOLLOWPATH_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetupTrait(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_SETUPTRAIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITACTIVEEFFECT___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
