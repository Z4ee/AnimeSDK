#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfWaveOrder; }

#define RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_METHOD_2_6D46D5F58F59BF0A_OFFSET UNITYSDK_OFFSET(0x1D05C0C0)
#define RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventWaveOrder_TypeDefinitionIndex = 18283;

	class ElfSpecialEventWaveOrder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EatingTime; // 0x10
		::System::Single WaitTime; // 0x14
		::Il2CppArray<::RPG::GameCore::ElfWaveOrder*>* OrderWaves; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6D46D5F58F59BF0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventWaveOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventWaveOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_METHOD_2_6D46D5F58F59BF0A_OFFSET))(a1, a2);
		}
	};
}
