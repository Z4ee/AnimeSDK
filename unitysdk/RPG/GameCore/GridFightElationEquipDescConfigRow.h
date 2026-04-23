#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A8E80)
#define RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A9060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationEquipDescConfigRow_TypeDefinitionIndex = 12745;

	class GridFightElationEquipDescConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID ElationEquipDesc; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightElationEquipDescConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightElationEquipDescConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
