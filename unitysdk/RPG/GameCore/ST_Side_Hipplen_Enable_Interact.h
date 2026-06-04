#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_METHOD_4_3FB2393579A50825_OFFSET UNITYSDK_OFFSET(0x19C09C30)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_METHOD_4_8774A03241FD103A_OFFSET UNITYSDK_OFFSET(0x19C1A310)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C09BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Enable_Interact_TypeDefinitionIndex = 20140;

	class ST_Side_Hipplen_Enable_Interact : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8774A03241FD103A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_METHOD_4_8774A03241FD103A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FB2393579A50825(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_METHOD_4_3FB2393579A50825_OFFSET))(a1, a2);
		}
	};
}
