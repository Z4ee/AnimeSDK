#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_7656FE9BC49539FA_OFFSET UNITYSDK_OFFSET(0x19AC73D0)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_F921D07A29F5C383_OFFSET UNITYSDK_OFFSET(0x19AC7350)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC73A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAnimationClip_TypeDefinitionIndex = 19145;

	class RemoveAnimationClip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F921D07A29F5C383(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAnimationClip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAnimationClip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_F921D07A29F5C383_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7656FE9BC49539FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_7656FE9BC49539FA_OFFSET))(a1, a2);
		}
	};
}
