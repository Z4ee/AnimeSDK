#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_METHOD_2_61EED558CA58275B_OFFSET UNITYSDK_OFFSET(0x1DFFF800)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialPartShow_TypeDefinitionIndex = 17242;

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

		static ::System::Void Method_2_61EED558CA58275B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialPartShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialPartShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_METHOD_2_61EED558CA58275B_OFFSET))(a1, a2);
		}
	};
}
