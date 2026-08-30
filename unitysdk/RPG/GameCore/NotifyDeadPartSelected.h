#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_990292D7301A0589_OFFSET UNITYSDK_OFFSET(0x1CE906D0)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_F45A9EBA3FA12DC6_OFFSET UNITYSDK_OFFSET(0x1CE90690)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE906C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyDeadPartSelected_TypeDefinitionIndex = 22990;

	class NotifyDeadPartSelected : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsSelected; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F45A9EBA3FA12DC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyDeadPartSelected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyDeadPartSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_F45A9EBA3FA12DC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_990292D7301A0589(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_990292D7301A0589_OFFSET))(a1, a2);
		}
	};
}
