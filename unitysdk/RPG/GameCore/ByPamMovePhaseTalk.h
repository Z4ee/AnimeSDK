#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET UNITYSDK_OFFSET(0x1875C550)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_A94004502D50BE48_OFFSET UNITYSDK_OFFSET(0x1875C480)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1875C500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamMovePhaseTalk_TypeDefinitionIndex = 18932;

	class ByPamMovePhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A94004502D50BE48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_A94004502D50BE48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67B27AD8B91878A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET))(a1, a2);
		}
	};
}
