#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMONOPOLYRESUME_METHOD_3_B5847AC975E18AF9_OFFSET UNITYSDK_OFFSET(0x1DEBC130)
#define RPG_GAMECORE_WAITMONOPOLYRESUME_METHOD_3_B7CC32DFBC3345FC_OFFSET UNITYSDK_OFFSET(0x1DEBC200)
#define RPG_GAMECORE_WAITMONOPOLYRESUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMonopolyResume_TypeDefinitionIndex = 20687;

	class WaitMonopolyResume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5847AC975E18AF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMonopolyResume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMonopolyResume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME_METHOD_3_B5847AC975E18AF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7CC32DFBC3345FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMonopolyResume* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMonopolyResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME_METHOD_3_B7CC32DFBC3345FC_OFFSET))(a1, a2);
		}
	};
}
