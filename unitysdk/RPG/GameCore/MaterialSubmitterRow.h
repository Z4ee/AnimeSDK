#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_MATERIALSUBMITTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D254950)
#define RPG_GAMECORE_MATERIALSUBMITTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D254BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterRow_TypeDefinitionIndex = 11936;

	class MaterialSubmitterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialList; // 0x18
		::System::UInt32 ActivityModuleID; // 0x20
		::System::UInt32 MissionID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 RewardID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MaterialSubmitterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialSubmitterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
