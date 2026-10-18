#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_METHOD_2_809FA8CA1237508B_OFFSET UNITYSDK_OFFSET(0x1D80E840)
#define RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80E980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleCoopBossBornPosition_TypeDefinitionIndex = 18915;

	class MarbleCoopBossBornPosition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BossCount; // 0x10
		::Il2CppArray<::System::UInt32>* Positions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_809FA8CA1237508B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleCoopBossBornPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleCoopBossBornPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_METHOD_2_809FA8CA1237508B_OFFSET))(a1, a2);
		}
	};
}
