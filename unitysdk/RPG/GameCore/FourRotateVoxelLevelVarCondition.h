#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_METHOD_2_8AA07897FD677C0F_OFFSET UNITYSDK_OFFSET(0x1DCB7A10)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB7BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelVarCondition_TypeDefinitionIndex = 16602;

	class FourRotateVoxelLevelVarCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VarName; // 0x10
		::RPG::GameCore::CompareType CompareOp; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AA07897FD677C0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_METHOD_2_8AA07897FD677C0F_OFFSET))(a1, a2);
		}
	};
}
