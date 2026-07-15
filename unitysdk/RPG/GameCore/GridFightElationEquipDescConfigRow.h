#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C88F0)
#define RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C8AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationEquipDescConfigRow_TypeDefinitionIndex = 12971;

	class GridFightElationEquipDescConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID ElationEquipDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightElationEquipDescConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightElationEquipDescConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONEQUIPDESCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
