#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17222640)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17222D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncEntranceListConfigRow_TypeDefinitionIndex = 12152;

	class FuncEntranceListConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BottomFuncEntranceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* FuncEntranceIDList; // 0x18
		::Il2CppArray<::System::UInt32>* HudFuncEntranceIDList; // 0x20
		::Il2CppArray<::System::UInt32>* LeftHudFuncEntranceIDList; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockGotoTypeList; // 0x30
		::System::Boolean WheelSupport; // 0x38
		::System::UInt32 ID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FuncEntranceListConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FuncEntranceListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
