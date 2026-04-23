#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA57FE00)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_90BC2B951C8F8F73_OFFSET UNITYSDK_OFFSET(0xA57FFA0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA57FC90)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xA57FE80)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA580050)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA580070)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA580060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleTraitEffect_TypeDefinitionIndex = 59354;

	class GridFightRoleTraitEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::System::Single Field_6_0; // 0x38
		::System::Action* Field_6_1; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_90BC2B951C8F8F73(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_90BC2B951C8F8F73_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET))(this);
		}
	};
}
