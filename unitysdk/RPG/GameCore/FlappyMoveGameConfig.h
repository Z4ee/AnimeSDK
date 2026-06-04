#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimFlappyPipeBlockConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_METHOD_3_40CC6B93E741C4DA_OFFSET UNITYSDK_OFFSET(0x1975EDD0)
#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_METHOD_3_B7F1E070F870CB9B_OFFSET UNITYSDK_OFFSET(0x1975ED90)
#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1975EDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlappyMoveGameConfig_TypeDefinitionIndex = 15903;

	class FlappyMoveGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::Single InitialHorizoneSpeed; // 0x10
		::System::Single MaxHorizoneSpeed; // 0x14
		::System::Single Gravity; // 0x18
		::System::Single Accelerate; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig*>* PipeBlockConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7F1E070F870CB9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyMoveGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyMoveGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_METHOD_3_B7F1E070F870CB9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40CC6B93E741C4DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyMoveGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyMoveGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_METHOD_3_40CC6B93E741C4DA_OFFSET))(a1, a2);
		}
	};
}
