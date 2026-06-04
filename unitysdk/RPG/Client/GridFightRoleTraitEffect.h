#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBBEF310)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xBBEF4A0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBBEF1E0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xBBEF390)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEF560)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBBEF580)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBBEF570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleTraitEffect_TypeDefinitionIndex = 60289;

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

		::System::Void Method_6_86143FF46EAE82B7(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_86143FF46EAE82B7_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET))(this);
		}
	};
}
