#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3C62CC0DC4BD2F1;

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFD8E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS66_0__GETLEVELINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0x9DFDA20)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int CartographyFiveDim___c__DisplayClass66_0_TypeDefinitionIndex = 61374;

	class CartographyFiveDim___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10
		::System::UInt32 groupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLevelInstance_b__0(::Class_1_A3C62CC0DC4BD2F1* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A3C62CC0DC4BD2F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS66_0__GETLEVELINSTANCE_B__0_OFFSET))(this, x);
		}
	};
}
