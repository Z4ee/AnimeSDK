#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_990292D7301A0589_OFFSET UNITYSDK_OFFSET(0x174752F0)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_99ED26214CD7DAD5_OFFSET UNITYSDK_OFFSET(0x17475270)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x174752C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyDeadPartSelected_TypeDefinitionIndex = 21484;

	class NotifyDeadPartSelected : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsSelected; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99ED26214CD7DAD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyDeadPartSelected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyDeadPartSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_99ED26214CD7DAD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_990292D7301A0589(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_METHOD_3_990292D7301A0589_OFFSET))(a1, a2);
		}
	};
}
