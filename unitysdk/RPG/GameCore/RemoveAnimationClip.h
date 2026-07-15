#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_7656FE9BC49539FA_OFFSET UNITYSDK_OFFSET(0x1B9CE3C0)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_8FACF95B4A86E8F1_OFFSET UNITYSDK_OFFSET(0x1B9CE380)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CE3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAnimationClip_TypeDefinitionIndex = 19501;

	class RemoveAnimationClip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FACF95B4A86E8F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAnimationClip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAnimationClip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_8FACF95B4A86E8F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7656FE9BC49539FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_METHOD_3_7656FE9BC49539FA_OFFSET))(a1, a2);
		}
	};
}
