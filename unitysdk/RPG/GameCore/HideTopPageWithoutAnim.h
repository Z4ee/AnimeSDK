#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_METHOD_3_07C8CE545474F345_OFFSET UNITYSDK_OFFSET(0x189FFD10)
#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_METHOD_3_3272A20418164634_OFFSET UNITYSDK_OFFSET(0x189FFD90)
#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x189FFD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideTopPageWithoutAnim_TypeDefinitionIndex = 19885;

	class HideTopPageWithoutAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Hide; // 0x18
		::System::Boolean PlayAnim; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07C8CE545474F345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideTopPageWithoutAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideTopPageWithoutAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_METHOD_3_07C8CE545474F345_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3272A20418164634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideTopPageWithoutAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideTopPageWithoutAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_METHOD_3_3272A20418164634_OFFSET))(a1, a2);
		}
	};
}
