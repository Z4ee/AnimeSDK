#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FB0180)
#define MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__SETENTITYASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x12FB0190)

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem___c__DisplayClass54_0_TypeDefinitionIndex = 79233;

	class SurfSubsystem___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetEntityAsAvatar_b__0(::Class_1_11F0E0D52D9FF574* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__SETENTITYASAVATAR_B__0_OFFSET))(this, c);
		}
	};
}
