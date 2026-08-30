#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFWAVEORDER_METHOD_2_C509ACBDA49AD70C_OFFSET UNITYSDK_OFFSET(0x1D7B8160)
#define RPG_GAMECORE_ELFWAVEORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaveOrder_TypeDefinitionIndex = 18282;

	class ElfWaveOrder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RecipeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVEORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C509ACBDA49AD70C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfWaveOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfWaveOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVEORDER_METHOD_2_C509ACBDA49AD70C_OFFSET))(a1, a2);
		}
	};
}
