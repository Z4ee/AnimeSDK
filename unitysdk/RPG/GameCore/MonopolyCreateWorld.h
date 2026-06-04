#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCREATEWORLD_METHOD_3_3A96485D0BCD8692_OFFSET UNITYSDK_OFFSET(0x1995C4C0)
#define RPG_GAMECORE_MONOPOLYCREATEWORLD_METHOD_3_BB0AAAF0283EA64B_OFFSET UNITYSDK_OFFSET(0x1995C540)
#define RPG_GAMECORE_MONOPOLYCREATEWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1995C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCreateWorld_TypeDefinitionIndex = 19786;

	class MonopolyCreateWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetWorldID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A96485D0BCD8692(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCreateWorld*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCreateWorld*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD_METHOD_3_3A96485D0BCD8692_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB0AAAF0283EA64B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCreateWorld* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCreateWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD_METHOD_3_BB0AAAF0283EA64B_OFFSET))(a1, a2);
		}
	};
}
