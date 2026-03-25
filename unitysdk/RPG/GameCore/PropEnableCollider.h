#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropEnableColliderOP.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TriggerSelectionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPENABLECOLLIDER_METHOD_3_62EE0BC2FDA6E25B_OFFSET UNITYSDK_OFFSET(0x1751ACD0)
#define RPG_GAMECORE_PROPENABLECOLLIDER_METHOD_3_C9A9C25FA702FC17_OFFSET UNITYSDK_OFFSET(0x1751AE30)
#define RPG_GAMECORE_PROPENABLECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1751AD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEnableCollider_TypeDefinitionIndex = 18692;

	class PropEnableCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropEnableColliderOP OPType; // 0x18
		::System::Boolean Enabled; // 0x1C
		::Il2CppArray<::System::String*>* SpecifiedRelativePaths; // 0x20
		::RPG::GameCore::TriggerSelectionType TriggerSelect; // 0x28
		::System::String* CustomTriggerName; // 0x30
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62EE0BC2FDA6E25B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEnableCollider*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEnableCollider*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER_METHOD_3_62EE0BC2FDA6E25B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9A9C25FA702FC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEnableCollider* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEnableCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER_METHOD_3_C9A9C25FA702FC17_OFFSET))(a1, a2);
		}
	};
}
