#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DE9E0)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialStageNodeConfigRow_TypeDefinitionIndex = 12916;

	class GridFightTutorialStageNodeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightFunctionNodeType>* FunctionList; // 0x10
		::System::UInt32 SectionID; // 0x18
		::System::UInt32 UnlockTutorialTask; // 0x1C
		::System::UInt32 ChapterID; // 0x20
		::System::UInt32 Unlock; // 0x24
		::System::UInt32 DivisionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
