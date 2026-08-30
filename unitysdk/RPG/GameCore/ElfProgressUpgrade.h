#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFPROGRESSUPGRADE_METHOD_3_3B86E4AD0BE2B1E1_OFFSET UNITYSDK_OFFSET(0x1DB2AA40)
#define RPG_GAMECORE_ELFPROGRESSUPGRADE_METHOD_3_CE79FCA192276164_OFFSET UNITYSDK_OFFSET(0x1DB2A970)
#define RPG_GAMECORE_ELFPROGRESSUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2AA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfProgressUpgrade_TypeDefinitionIndex = 20833;

	class ElfProgressUpgrade : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE79FCA192276164(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfProgressUpgrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfProgressUpgrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE_METHOD_3_CE79FCA192276164_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B86E4AD0BE2B1E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfProgressUpgrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfProgressUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE_METHOD_3_3B86E4AD0BE2B1E1_OFFSET))(a1, a2);
		}
	};
}
