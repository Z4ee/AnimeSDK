#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19809850)
#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19809CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSelectEnhanceRow_TypeDefinitionIndex = 13047;

	class GridFightSelectEnhanceRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::Double>* ParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::UInt32 Count; // 0x28
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x2C
		::System::UInt32 TraitEffectID; // 0x30
		::RPG::Client::TextID EnhanceName; // 0x38
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x48
		::RPG::Client::TextID EnhanceDesc; // 0x58
		::System::UInt32 ID; // 0x68
		::System::UInt32 Cost; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSelectEnhanceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSelectEnhanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
