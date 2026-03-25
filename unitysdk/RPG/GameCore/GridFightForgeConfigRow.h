#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTFORGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1725DE00)
#define RPG_GAMECORE_GRIDFIGHTFORGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1725E140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightForgeConfigRow_TypeDefinitionIndex = 12294;

	class GridFightForgeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 EquipNum; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::GridFightEquipCategory EquipCategory; // 0x20
		::RPG::GameCore::GridFightForgeFuncType FuncType; // 0x24
		::RPG::Client::TextID ForgeTypeDesc; // 0x28
		::RPG::Client::TextID ForgeDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightForgeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightForgeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
