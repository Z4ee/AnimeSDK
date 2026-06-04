#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_METHOD_2_B2EEAA36569AEC52_OFFSET UNITYSDK_OFFSET(0x19614840)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19614A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialPartShow_TypeDefinitionIndex = 16578;

	class CharacterReplaceMaterialPartShow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideCharaParts; // 0x10
		::System::Boolean HideNPCParts; // 0x11
		::Il2CppArray<::System::UInt32>* ShowPartIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B2EEAA36569AEC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialPartShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialPartShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_METHOD_2_B2EEAA36569AEC52_OFFSET))(a1, a2);
		}
	};
}
