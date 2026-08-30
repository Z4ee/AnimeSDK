#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWEXPANDELATIONITEM_METHOD_3_77D5E206FDB79400_OFFSET UNITYSDK_OFFSET(0x1D527870)
#define RPG_GAMECORE_SHOWEXPANDELATIONITEM_METHOD_3_E458997DDED6B36F_OFFSET UNITYSDK_OFFSET(0x1D527830)
#define RPG_GAMECORE_SHOWEXPANDELATIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D527860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowExpandElationItem_TypeDefinitionIndex = 23101;

	class ShowExpandElationItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E458997DDED6B36F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowExpandElationItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowExpandElationItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM_METHOD_3_E458997DDED6B36F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77D5E206FDB79400(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowExpandElationItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowExpandElationItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM_METHOD_3_77D5E206FDB79400_OFFSET))(a1, a2);
		}
	};
}
