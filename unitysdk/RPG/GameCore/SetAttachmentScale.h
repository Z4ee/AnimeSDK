#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_5E179B45EEA77677_OFFSET UNITYSDK_OFFSET(0x1C2D22D0)
#define RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_EF7EC2D2C8B45A06_OFFSET UNITYSDK_OFFSET(0x1C2D2130)
#define RPG_GAMECORE_SETATTACHMENTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D22B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentScale_TypeDefinitionIndex = 21565;

	class SetAttachmentScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OnceOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttachmentVisibilityNode*>* AttachPoints; // 0x28
		::System::Boolean IsReset; // 0x30
		::RPG::MVector3 Scale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF7EC2D2C8B45A06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_EF7EC2D2C8B45A06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E179B45EEA77677(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_5E179B45EEA77677_OFFSET))(a1, a2);
		}
	};
}
