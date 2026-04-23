#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPREFABLODINFO_METHOD_2_44B59B1151999100_OFFSET UNITYSDK_OFFSET(0x187D5C60)
#define RPG_GAMECORE_CHARACTERPREFABLODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187D5D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPrefabLodInfo_TypeDefinitionIndex = 18091;

	class CharacterPrefabLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* LodPathList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPREFABLODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44B59B1151999100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPrefabLodInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPrefabLodInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPREFABLODINFO_METHOD_2_44B59B1151999100_OFFSET))(a1, a2);
		}
	};
}
