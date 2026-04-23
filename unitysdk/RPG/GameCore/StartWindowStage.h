#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_4DD5662413556F0E_OFFSET UNITYSDK_OFFSET(0x18E9CC10)
#define RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_DC37F054231FCD18_OFFSET UNITYSDK_OFFSET(0x18E9CC90)
#define RPG_GAMECORE_STARTWINDOWSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9CC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartWindowStage_TypeDefinitionIndex = 20259;

	class StartWindowStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::DynamicString* EntityID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DD5662413556F0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartWindowStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartWindowStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_4DD5662413556F0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC37F054231FCD18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartWindowStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartWindowStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_DC37F054231FCD18_OFFSET))(a1, a2);
		}
	};
}
