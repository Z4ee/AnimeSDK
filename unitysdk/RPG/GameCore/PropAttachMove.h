#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_43F6DDF52C7C3FE6_OFFSET UNITYSDK_OFFSET(0x18C64D20)
#define RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_4DA5C41852A726D0_OFFSET UNITYSDK_OFFSET(0x18C64E60)
#define RPG_GAMECORE_PROPATTACHMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C64DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttachMove_TypeDefinitionIndex = 20820;

	class PropAttachMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AttachPointName; // 0x20
		::RPG::MVector3 PostionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::RPG::GameCore::DynamicString* FollowEntity; // 0x40
		::System::Boolean IsStop; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43F6DDF52C7C3FE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_43F6DDF52C7C3FE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DA5C41852A726D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_4DA5C41852A726D0_OFFSET))(a1, a2);
		}
	};
}
