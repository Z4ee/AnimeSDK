#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_METHOD_3_4325527A68A21CC0_OFFSET UNITYSDK_OFFSET(0x1CFC5D00)
#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_METHOD_3_702E46222B296855_OFFSET UNITYSDK_OFFSET(0x1CFC5DD0)
#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC5DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelExcelValueGetter_TypeDefinitionIndex = 15823;

	class ChimeraDuelExcelValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Int32 ParamIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4325527A68A21CC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelExcelValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_METHOD_3_4325527A68A21CC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_702E46222B296855(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_METHOD_3_702E46222B296855_OFFSET))(a1, a2);
		}
	};
}
