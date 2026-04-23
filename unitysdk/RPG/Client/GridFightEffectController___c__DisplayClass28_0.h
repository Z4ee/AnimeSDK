#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4711E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS28_0__PLAYUPGRADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA472D00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass28_0_TypeDefinitionIndex = 59338;

	class GridFightEffectController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action* __9__0; // 0x10
		::UnityEngine::Transform* end; // 0x18
		::System::Action* onFinished; // 0x20
		::RPG::Client::GridFightEffectController* __4__this; // 0x28
		::System::Boolean isEndPerspective; // 0x30
		::System::Int32 star; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS28_0__PLAYUPGRADEEFFECT_B__0_OFFSET))(this);
		}
	};
}
