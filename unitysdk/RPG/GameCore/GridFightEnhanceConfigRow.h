#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197E1470)
#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197E1880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnhanceConfigRow_TypeDefinitionIndex = 12957;

	class GridFightEnhanceConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x18
		::System::UInt32 Cost; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID EnhanceDesc; // 0x28
		::RPG::Client::TextID EnhanceName; // 0x38
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x48
		::System::UInt32 GroupID; // 0x4C
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEnhanceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEnhanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
