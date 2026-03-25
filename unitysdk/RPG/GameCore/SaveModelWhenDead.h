#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SAVEMODELWHENDEAD_METHOD_3_4E50E57C8C875E6A_OFFSET UNITYSDK_OFFSET(0x1769A950)
#define RPG_GAMECORE_SAVEMODELWHENDEAD_METHOD_3_9DF5292D19AA2133_OFFSET UNITYSDK_OFFSET(0x1769A8D0)
#define RPG_GAMECORE_SAVEMODELWHENDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1769A920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveModelWhenDead_TypeDefinitionIndex = 21363;

	class SaveModelWhenDead : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DF5292D19AA2133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveModelWhenDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveModelWhenDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD_METHOD_3_9DF5292D19AA2133_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E50E57C8C875E6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD_METHOD_3_4E50E57C8C875E6A_OFFSET))(a1, a2);
		}
	};
}
