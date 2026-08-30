#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDCATCHITEM_METHOD_3_4951562FFB21F566_OFFSET UNITYSDK_OFFSET(0x1D58AB30)
#define RPG_GAMECORE_SWITCHHANDCATCHITEM_METHOD_3_7C7BCC6C68B8C129_OFFSET UNITYSDK_OFFSET(0x1D58AB70)
#define RPG_GAMECORE_SWITCHHANDCATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCatchItem_TypeDefinitionIndex = 20727;

	class SwitchHandCatchItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single WaitAnimTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4951562FFB21F566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM_METHOD_3_4951562FFB21F566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C7BCC6C68B8C129(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM_METHOD_3_7C7BCC6C68B8C129_OFFSET))(a1, a2);
		}
	};
}
