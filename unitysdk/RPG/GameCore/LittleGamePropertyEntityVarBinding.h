#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_METHOD_2_162A310CD7E59D32_OFFSET UNITYSDK_OFFSET(0x1BCC4350)
#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC4390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePropertyEntityVarBinding_TypeDefinitionIndex = 18179;

	class LittleGamePropertyEntityVarBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_162A310CD7E59D32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGamePropertyEntityVarBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGamePropertyEntityVarBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_METHOD_2_162A310CD7E59D32_OFFSET))(a1, a2);
		}
	};
}
