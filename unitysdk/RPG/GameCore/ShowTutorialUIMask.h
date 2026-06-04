#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuidePC; }
namespace RPG::GameCore { class TutorialAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALUIMASK_METHOD_3_A9CC483D68BAB43E_OFFSET UNITYSDK_OFFSET(0x19C86040)
#define RPG_GAMECORE_SHOWTUTORIALUIMASK_METHOD_3_B7749A00808F7EFC_OFFSET UNITYSDK_OFFSET(0x19C860D0)
#define RPG_GAMECORE_SHOWTUTORIALUIMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C860A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialUIMask_TypeDefinitionIndex = 23014;

	class ShowTutorialUIMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::Boolean Show; // 0x28
		::System::Boolean Is3DObject; // 0x29
		::System::UInt32 Type; // 0x2C
		::System::Single OffsetX; // 0x30
		::System::Single OffsetY; // 0x34
		::System::Single Scale; // 0x38
		::RPG::GameCore::GuidePC* PCGuide; // 0x40
		::RPG::GameCore::TutorialAnimConfig* AnimConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A9CC483D68BAB43E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialUIMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialUIMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK_METHOD_3_A9CC483D68BAB43E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7749A00808F7EFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialUIMask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialUIMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK_METHOD_3_B7749A00808F7EFC_OFFSET))(a1, a2);
		}
	};
}
