#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETDEAD_METHOD_3_6B2A874D916EF730_OFFSET UNITYSDK_OFFSET(0x1BD228A0)
#define RPG_GAMECORE_MARBLESETDEAD_METHOD_3_B395FF5B78AC85B5_OFFSET UNITYSDK_OFFSET(0x1BD22940)
#define RPG_GAMECORE_MARBLESETDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD22930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetDead_TypeDefinitionIndex = 16183;

	class MarbleSetDead : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B2A874D916EF730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_METHOD_3_6B2A874D916EF730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B395FF5B78AC85B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_METHOD_3_B395FF5B78AC85B5_OFFSET))(a1, a2);
		}
	};
}
