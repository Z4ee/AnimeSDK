#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDataExportTarget.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionFilter; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO_METHOD_4_3C9B455DD8EC6D3D_OFFSET UNITYSDK_OFFSET(0x1D1D4D00)
#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO_METHOD_4_7105EEF56A3045DC_OFFSET UNITYSDK_OFFSET(0x1D1D4D60)
#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D4D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupInstanceInfo_TypeDefinitionIndex = 17047;

	class LevelGroupInstanceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* GroupGUID; // 0x38
		::System::String* GroupPath; // 0x40
		::RPG::GameCore::LevelDataExportTarget ExportTarget; // 0x48
		::RPG::GameCore::LevelDimensionFilter* DimensionFilter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C9B455DD8EC6D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupInstanceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupInstanceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO_METHOD_4_3C9B455DD8EC6D3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7105EEF56A3045DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO_METHOD_4_7105EEF56A3045DC_OFFSET))(a1, a2);
		}
	};
}
