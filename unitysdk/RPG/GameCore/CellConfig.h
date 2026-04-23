#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePrefabInfo; }

#define RPG_GAMECORE_CELLCONFIG_METHOD_2_E3EF799BDB1156AA_OFFSET UNITYSDK_OFFSET(0x187B9A40)
#define RPG_GAMECORE_CELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B9B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CellConfig_TypeDefinitionIndex = 18134;

	class CellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E3EF799BDB1156AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CELLCONFIG_METHOD_2_E3EF799BDB1156AA_OFFSET))(a1, a2);
		}
	};
}
