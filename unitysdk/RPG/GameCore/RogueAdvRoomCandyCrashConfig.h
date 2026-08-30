#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_METHOD_2_641186A55198F303_OFFSET UNITYSDK_OFFSET(0x1D3BC6A0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BC7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashConfig_TypeDefinitionIndex = 17678;

	class RogueAdvRoomCandyCrashConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*>* GroupConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_641186A55198F303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_METHOD_2_641186A55198F303_OFFSET))(a1, a2);
		}
	};
}
