#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightPresentEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS32_0__ADDPRESENT_B__0_OFFSET UNITYSDK_OFFSET(0xBBBF070)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBBDBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass32_0_TypeDefinitionIndex = 60252;

	class GridFightOrbManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPresentEntity* presentData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddPresent_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS32_0__ADDPRESENT_B__0_OFFSET))(this, a1);
		}
	};
}
