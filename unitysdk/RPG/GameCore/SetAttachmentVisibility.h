#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_ABFD41CF9C1DF16F_OFFSET UNITYSDK_OFFSET(0x19C29050)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_E6E313A3340A8680_OFFSET UNITYSDK_OFFSET(0x19C28E80)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C29020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentVisibility_TypeDefinitionIndex = 21148;

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

		static ::System::Void Method_3_E6E313A3340A8680(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_E6E313A3340A8680_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABFD41CF9C1DF16F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_METHOD_3_ABFD41CF9C1DF16F_OFFSET))(a1, a2);
		}
	};
}
