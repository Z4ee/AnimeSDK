#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F4BC0015EEAF0CC2;
namespace RPG::Client { class GridFightInteractableOrb; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD2274A0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__REMOVESPHERE_B__0_OFFSET UNITYSDK_OFFSET(0xD228240)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__REMOVESPHERE_B__1_OFFSET UNITYSDK_OFFSET(0xD2282F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass35_0_TypeDefinitionIndex = 64527;

	class GridFightOrbManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightInteractableOrb* interable; // 0x10
		::System::UInt32 uid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveSphere_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__REMOVESPHERE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveSphere_b__1(::Class_1_F4BC0015EEAF0CC2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F4BC0015EEAF0CC2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS35_0__REMOVESPHERE_B__1_OFFSET))(this, a1);
		}
	};
}
