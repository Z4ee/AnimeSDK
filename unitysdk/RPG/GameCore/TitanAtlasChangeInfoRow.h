#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TITANATLASCHANGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909D8F0)
#define RPG_GAMECORE_TITANATLASCHANGEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1909DA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasChangeInfoRow_TypeDefinitionIndex = 14502;

	class TitanAtlasChangeInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeTitanIDList; // 0x10
		::System::UInt32 TitanID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASCHANGEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TitanAtlasChangeInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasChangeInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASCHANGEINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
