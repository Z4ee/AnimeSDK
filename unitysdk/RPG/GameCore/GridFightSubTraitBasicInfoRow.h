#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17286D10)
#define RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172870F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSubTraitBasicInfoRow_TypeDefinitionIndex = 12521;

	class GridFightSubTraitBasicInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitEffectList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* BaseDescParamList; // 0x18
		::System::String* TraitSearchKey; // 0x20
		::System::UInt32 FatherTraitID; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID TraitBaseSimpleDesc; // 0x30
		::RPG::Client::TextID TraitBaseDesc; // 0x40
		::RPG::Client::TextID SubTraitName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
