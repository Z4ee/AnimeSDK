#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVEPAUSE_METHOD_3_91AB2AC793CD5CBB_OFFSET UNITYSDK_OFFSET(0x1DCB2CD0)
#define RPG_GAMECORE_FORMATIONMOVEPAUSE_METHOD_3_EA82191DE4C24C40_OFFSET UNITYSDK_OFFSET(0x1DCB2D10)
#define RPG_GAMECORE_FORMATIONMOVEPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMovePause_TypeDefinitionIndex = 21011;

	class FormationMovePause : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91AB2AC793CD5CBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMovePause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMovePause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE_METHOD_3_91AB2AC793CD5CBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA82191DE4C24C40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMovePause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMovePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE_METHOD_3_EA82191DE4C24C40_OFFSET))(a1, a2);
		}
	};
}
