#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_8E09E120535A2CEB_OFFSET UNITYSDK_OFFSET(0x1B436740)
#define RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_B46724EE08669C0C_OFFSET UNITYSDK_OFFSET(0x1B436780)
#define RPG_GAMECORE_SWITCHHANDLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B436770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandLayItem_TypeDefinitionIndex = 20178;

	class SwitchHandLayItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single WaitAnimTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E09E120535A2CEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLayItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLayItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_8E09E120535A2CEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B46724EE08669C0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_B46724EE08669C0C_OFFSET))(a1, a2);
		}
	};
}
