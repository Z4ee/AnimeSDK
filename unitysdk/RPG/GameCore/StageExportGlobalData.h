#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEEXPORTGLOBALDATA_METHOD_2_71CD38E1E561950B_OFFSET UNITYSDK_OFFSET(0x177676E0)
#define RPG_GAMECORE_STAGEEXPORTGLOBALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17767720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageExportGlobalData_TypeDefinitionIndex = 17550;

	class StageExportGlobalData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXPORTGLOBALDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_71CD38E1E561950B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageExportGlobalData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageExportGlobalData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXPORTGLOBALDATA_METHOD_2_71CD38E1E561950B_OFFSET))(a1, a2);
		}
	};
}
