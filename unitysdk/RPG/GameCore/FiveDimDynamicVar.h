#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameDynamicVar.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_3_05CC7D4DE59DE006_OFFSET UNITYSDK_OFFSET(0x1D6BAB10)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_3_8AA537E36B493685_OFFSET UNITYSDK_OFFSET(0x1D6BAAD0)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BAB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDynamicVar_TypeDefinitionIndex = 18872;

	class FiveDimDynamicVar : public ::RPG::GameCore::LittleGameDynamicVar
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8AA537E36B493685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_3_8AA537E36B493685_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05CC7D4DE59DE006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDynamicVar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_3_05CC7D4DE59DE006_OFFSET))(a1, a2);
		}
	};
}
