#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLIPERAREGION_METHOD_3_9892581B20FBC428_OFFSET UNITYSDK_OFFSET(0x18924FF0)
#define RPG_GAMECORE_FLIPERAREGION_METHOD_3_ED59EEBA3639F714_OFFSET UNITYSDK_OFFSET(0x18925100)
#define RPG_GAMECORE_FLIPERAREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x189250D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlipEraRegion_TypeDefinitionIndex = 21208;

	class FlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9892581B20FBC428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlipEraRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlipEraRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_METHOD_3_9892581B20FBC428_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED59EEBA3639F714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_METHOD_3_ED59EEBA3639F714_OFFSET))(a1, a2);
		}
	};
}
