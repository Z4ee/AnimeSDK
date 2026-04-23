#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_METHOD_2_F56A8D37DD7CFC0C_OFFSET UNITYSDK_OFFSET(0x18A6DF10)
#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6DF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePropertyEntityVarBindingMap_TypeDefinitionIndex = 17967;

	class LittleGamePropertyEntityVarBindingMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F56A8D37DD7CFC0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGamePropertyEntityVarBindingMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGamePropertyEntityVarBindingMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_METHOD_2_F56A8D37DD7CFC0C_OFFSET))(a1, a2);
		}
	};
}
