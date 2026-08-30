#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_METHOD_2_2D16921CD1DBE096_OFFSET UNITYSDK_OFFSET(0x1D090C30)
#define RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D090DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinStageSpecifiedDeckEntry_TypeDefinitionIndex = 17939;

	class FateRinStageSpecifiedDeckEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::Il2CppArray<::System::UInt32>* DeckIDList; // 0x18
		::Il2CppArray<::System::UInt32>* FixedOrderList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D16921CD1DBE096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinStageSpecifiedDeckEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinStageSpecifiedDeckEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_METHOD_2_2D16921CD1DBE096_OFFSET))(a1, a2);
		}
	};
}
