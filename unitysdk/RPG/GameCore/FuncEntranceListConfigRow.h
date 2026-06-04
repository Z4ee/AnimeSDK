#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197A9810)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197A9F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncEntranceListConfigRow_TypeDefinitionIndex = 12676;

	class FuncEntranceListConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockGotoTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* LeftHudFuncEntranceIDList; // 0x18
		::Il2CppArray<::System::UInt32>* FuncEntranceIDList; // 0x20
		::Il2CppArray<::System::UInt32>* BottomFuncEntranceIDList; // 0x28
		::Il2CppArray<::System::UInt32>* HudFuncEntranceIDList; // 0x30
		::System::UInt32 ID; // 0x38
		::System::Boolean WheelSupport; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FuncEntranceListConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FuncEntranceListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
