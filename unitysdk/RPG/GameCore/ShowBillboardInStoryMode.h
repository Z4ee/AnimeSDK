#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE_METHOD_3_7093FFCF01FD3BA9_OFFSET UNITYSDK_OFFSET(0x19C76D60)
#define RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE_METHOD_3_E28DE956F7F0730A_OFFSET UNITYSDK_OFFSET(0x19C76C10)
#define RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C76CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBillboardInStoryMode_TypeDefinitionIndex = 19327;

	class ShowBillboardInStoryMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E28DE956F7F0730A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBillboardInStoryMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBillboardInStoryMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE_METHOD_3_E28DE956F7F0730A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7093FFCF01FD3BA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBillboardInStoryMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBillboardInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBILLBOARDINSTORYMODE_METHOD_3_7093FFCF01FD3BA9_OFFSET))(a1, a2);
		}
	};
}
