#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_37EF263121CDA487_OFFSET UNITYSDK_OFFSET(0x1D5695F0)
#define RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_DC37F054231FCD18_OFFSET UNITYSDK_OFFSET(0x1D569630)
#define RPG_GAMECORE_STARTWINDOWSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartWindowStage_TypeDefinitionIndex = 21039;

	class StartWindowStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::DynamicString* EntityID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37EF263121CDA487(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartWindowStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartWindowStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_37EF263121CDA487_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC37F054231FCD18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartWindowStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartWindowStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTWINDOWSTAGE_METHOD_3_DC37F054231FCD18_OFFSET))(a1, a2);
		}
	};
}
