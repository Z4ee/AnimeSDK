#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_39D3AE7BA51E66EF_OFFSET UNITYSDK_OFFSET(0x1D944F60)
#define RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_58691AF5018D1A5A_OFFSET UNITYSDK_OFFSET(0x1D944FE0)
#define RPG_GAMECORE_PROPATTACHMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D944FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttachMove_TypeDefinitionIndex = 21967;

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

		static ::System::Void Method_3_39D3AE7BA51E66EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_39D3AE7BA51E66EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58691AF5018D1A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHMOVE_METHOD_3_58691AF5018D1A5A_OFFSET))(a1, a2);
		}
	};
}
