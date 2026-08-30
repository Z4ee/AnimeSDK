#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFENTERNEXTDAY_METHOD_3_708C5A2EF2FC3EF8_OFFSET UNITYSDK_OFFSET(0x1DB28910)
#define RPG_GAMECORE_ELFENTERNEXTDAY_METHOD_3_88DA98DBFB01D335_OFFSET UNITYSDK_OFFSET(0x1DB289E0)
#define RPG_GAMECORE_ELFENTERNEXTDAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB289D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEnterNextDay_TypeDefinitionIndex = 21487;

	class ElfEnterNextDay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_708C5A2EF2FC3EF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEnterNextDay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEnterNextDay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY_METHOD_3_708C5A2EF2FC3EF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88DA98DBFB01D335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEnterNextDay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEnterNextDay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY_METHOD_3_88DA98DBFB01D335_OFFSET))(a1, a2);
		}
	};
}
