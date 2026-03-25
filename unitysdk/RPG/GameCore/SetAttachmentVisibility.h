#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_08872094B51770A9_OFFSET UNITYSDK_OFFSET(0x176A7430)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_22B19C17F28E85E6_OFFSET UNITYSDK_OFFSET(0x176A7270)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x176A7400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentVisibility_TypeDefinitionIndex = 20571;

	class SetAttachmentVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::AttachmentVisibilityNode*>* AttachPoints; // 0x20
		::System::Boolean Visibility; // 0x28
		::System::Int32 VisibilityApplyDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22B19C17F28E85E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_22B19C17F28E85E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08872094B51770A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_08872094B51770A9_OFFSET))(a1, a2);
		}
	};
}
