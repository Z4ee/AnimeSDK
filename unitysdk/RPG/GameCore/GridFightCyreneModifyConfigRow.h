#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTCYRENEMODIFYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C6170)
#define RPG_GAMECORE_GRIDFIGHTCYRENEMODIFYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCyreneModifyConfigRow_TypeDefinitionIndex = 13056;

	class GridFightCyreneModifyConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* ModifyOps; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ModifyValues; // 0x18
		::System::String* CyreneMultipleValueKey; // 0x20
		::Il2CppArray<::System::UInt32>* ModifySkillIndexs; // 0x28
		::System::UInt32 ModifySkillID; // 0x30
		::RPG::GameCore::GridFightSkillType ModifySkillType; // 0x34
		::System::UInt32 ModifyRoleID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCYRENEMODIFYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCyreneModifyConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCyreneModifyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCYRENEMODIFYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
