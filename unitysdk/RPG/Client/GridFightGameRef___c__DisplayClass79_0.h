#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE6170)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS79_0__SAVEFORMATIONTOSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1ABEAAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass79_0_TypeDefinitionIndex = 61790;

	class GridFightGameRef___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _SaveFormationToServer_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS79_0__SAVEFORMATIONTOSERVER_B__0_OFFSET))(this, a1);
		}
	};
}
