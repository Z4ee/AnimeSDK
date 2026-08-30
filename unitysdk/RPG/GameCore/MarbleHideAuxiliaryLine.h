#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_METHOD_3_3A8B5A0FE26BDD95_OFFSET UNITYSDK_OFFSET(0x1D234D60)
#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_METHOD_3_898601B0024D0290_OFFSET UNITYSDK_OFFSET(0x1D234CC0)
#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D234D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleHideAuxiliaryLine_TypeDefinitionIndex = 16673;

	class MarbleHideAuxiliaryLine : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_898601B0024D0290(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleHideAuxiliaryLine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleHideAuxiliaryLine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_METHOD_3_898601B0024D0290_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A8B5A0FE26BDD95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleHideAuxiliaryLine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleHideAuxiliaryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_METHOD_3_3A8B5A0FE26BDD95_OFFSET))(a1, a2);
		}
	};
}
