#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_METHOD_6_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x1CA6DC20)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1CA6D960)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1CA6DAF0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6DD10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleChangeEffect_TypeDefinitionIndex = 64562;

	class GridFightRoleChangeEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x38
		::System::Single HDHPNOOMAGE; // 0x40
		::System::Action* OOBALIFBOCA; // 0x48

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

		::System::Void Method_6_7E0102A7D81125F5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGEEFFECT_METHOD_6_7E0102A7D81125F5_OFFSET))(this, a1);
		}
	};
}
