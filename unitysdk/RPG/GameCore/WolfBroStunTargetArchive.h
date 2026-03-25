#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_DEE461581285A640_OFFSET UNITYSDK_OFFSET(0x1790CF30)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_ECA12B974770CCF9_OFFSET UNITYSDK_OFFSET(0x1790CEB0)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1790CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroStunTargetArchive_TypeDefinitionIndex = 20166;

	class WolfBroStunTargetArchive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECA12B974770CCF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroStunTargetArchive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroStunTargetArchive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_ECA12B974770CCF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEE461581285A640(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_DEE461581285A640_OFFSET))(a1, a2);
		}
	};
}
