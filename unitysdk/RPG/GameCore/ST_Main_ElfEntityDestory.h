#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_5FA2B132F4A01D23_OFFSET UNITYSDK_OFFSET(0x1B7820E0)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_DB1B186147A74626_OFFSET UNITYSDK_OFFSET(0x1B7821B0)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7821A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfEntityDestory_TypeDefinitionIndex = 20745;

	class ST_Main_ElfEntityDestory : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5FA2B132F4A01D23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfEntityDestory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_5FA2B132F4A01D23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB1B186147A74626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_METHOD_4_DB1B186147A74626_OFFSET))(a1, a2);
		}
	};
}
