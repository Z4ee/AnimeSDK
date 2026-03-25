#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98738C0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS34_0__GETSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x9874840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass34_0_TypeDefinitionIndex = 52365;

	class GridFightOrbManager___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSphere_b__0(::UnityEngine::GameObject* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS34_0__GETSPHERE_B__0_OFFSET))(this, item);
		}
	};
}
