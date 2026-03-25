#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_1E5DB1E69EE66563_OFFSET UNITYSDK_OFFSET(0x16FFE2B0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_EF0056CE4BF148B9_OFFSET UNITYSDK_OFFSET(0x16FFE1E0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFE260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFightFinish_TypeDefinitionIndex = 21673;

	class ByCheckFightFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EF0056CE4BF148B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_EF0056CE4BF148B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E5DB1E69EE66563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_1E5DB1E69EE66563_OFFSET))(a1, a2);
		}
	};
}
