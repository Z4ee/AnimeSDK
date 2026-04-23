#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_7F2EFE5EBE2A0071_OFFSET UNITYSDK_OFFSET(0x18DEFCD0)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_DB1B186147A74626_OFFSET UNITYSDK_OFFSET(0x18DE6CA0)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE6C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfEntityDestory_TypeDefinitionIndex = 20406;

	class ST_Main_ElfEntityDestory : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F2EFE5EBE2A0071(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfEntityDestory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_7F2EFE5EBE2A0071_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB1B186147A74626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_DB1B186147A74626_OFFSET))(a1, a2);
		}
	};
}
