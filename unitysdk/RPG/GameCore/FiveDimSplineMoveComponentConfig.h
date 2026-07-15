#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_METHOD_3_D3DB2208746763C6_OFFSET UNITYSDK_OFFSET(0x1BEB40B0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_METHOD_3_E9C6E2449C486885_OFFSET UNITYSDK_OFFSET(0x1BEB40F0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB40E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSplineMoveComponentConfig_TypeDefinitionIndex = 17833;

	class FiveDimSplineMoveComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasSplineMove; // 0x10
		::RPG::GameCore::FiveDimSplineMoveConfig* MoveConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3DB2208746763C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_METHOD_3_D3DB2208746763C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9C6E2449C486885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_METHOD_3_E9C6E2449C486885_OFFSET))(a1, a2);
		}
	};
}
