#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFPHASEITEM_METHOD_2_13EF1093A478A747_OFFSET UNITYSDK_OFFSET(0x1BB383A0)
#define RPG_GAMECORE_ELFPHASEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB384C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPhaseItem_TypeDefinitionIndex = 17725;

	class ElfPhaseItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Phase; // 0x10
		::System::UInt32 CleanBonus; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_13EF1093A478A747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfPhaseItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfPhaseItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASEITEM_METHOD_2_13EF1093A478A747_OFFSET))(a1, a2);
		}
	};
}
