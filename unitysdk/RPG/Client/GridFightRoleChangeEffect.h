#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_METHOD_6_B44C98182D03F795_OFFSET UNITYSDK_OFFSET(0xA570E00)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA570AE0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xA570CC0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA570EE0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA570EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleChangeEffect_TypeDefinitionIndex = 59353;

	class GridFightRoleChangeEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::UnityEngine::Animation* Field_6_0; // 0x38
		::System::Single Field_6_1; // 0x40
		::System::Action* Field_6_2; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B44C98182D03F795(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_METHOD_6_B44C98182D03F795_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}
	};
}
