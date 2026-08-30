#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravityWalkBoardType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/Quadrant.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGravityBoardCameraConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_METHOD_3_186B1C452A0F5895_OFFSET UNITYSDK_OFFSET(0x1D8635A0)
#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_METHOD_3_6BCCAE829A5D1719_OFFSET UNITYSDK_OFFSET(0x1D863550)
#define RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D863590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityWalkBoardConfig_TypeDefinitionIndex = 18356;

	class FiveDimGravityWalkBoardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravityWalkBoard; // 0x10
		::RPG::MVector3 Center; // 0x14
		::System::Single Radius; // 0x20
		::RPG::GameCore::GravityWalkBoardType BoardType; // 0x24
		::System::Boolean RightArc; // 0x28
		::RPG::GameCore::Quadrant Quadrant; // 0x2C
		::System::Boolean AutoTransition; // 0x30
		::System::String* RTPCName; // 0x38
		::System::Single TopRTPCValue; // 0x40
		::System::Single BottomRTPCValue; // 0x44
		::RPG::GameCore::LittleGameEvent* EnterTopEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* ExitTopEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* EnterBottomEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* ExitBottomEvent; // 0x60
		::RPG::GameCore::FiveDimGravityBoardCameraConfig* CameraConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BCCAE829A5D1719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_METHOD_3_6BCCAE829A5D1719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_186B1C452A0F5895(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYWALKBOARDCONFIG_METHOD_3_186B1C452A0F5895_OFFSET))(a1, a2);
		}
	};
}
