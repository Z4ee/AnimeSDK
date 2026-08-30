#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_8A6CFB3A9019C803_OFFSET UNITYSDK_OFFSET(0x1EFA8FC0)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_DEE461581285A640_OFFSET UNITYSDK_OFFSET(0x1EFA9010)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA9000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroStunTargetArchive_TypeDefinitionIndex = 21743;

	class WolfBroStunTargetArchive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A6CFB3A9019C803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroStunTargetArchive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroStunTargetArchive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_8A6CFB3A9019C803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEE461581285A640(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_METHOD_3_DEE461581285A640_OFFSET))(a1, a2);
		}
	};
}
