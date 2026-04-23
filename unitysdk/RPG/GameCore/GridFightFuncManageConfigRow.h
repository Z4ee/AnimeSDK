#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightUnlockFunctionType.h"
#include "unitysdk/RPG/GameCore/GridFightUnlockShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTFUNCMANAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189AEAB0)
#define RPG_GAMECORE_GRIDFIGHTFUNCMANAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189AEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFuncManageConfigRow_TypeDefinitionIndex = 12855;

	class GridFightFuncManageConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightUnlockShowType UnlockShowType; // 0x10
		::RPG::GameCore::GridFightUnlockFunctionType ID; // 0x14
		::System::UInt32 UnlockID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFUNCMANAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightFuncManageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightFuncManageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFUNCMANAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
