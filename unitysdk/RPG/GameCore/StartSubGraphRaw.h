#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }
namespace System { class String; }

#define RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_615213D35A06D311_OFFSET UNITYSDK_OFFSET(0x1CAF6640)
#define RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_6C43293600FF5166_OFFSET UNITYSDK_OFFSET(0x1CAF6680)
#define RPG_GAMECORE_STARTSUBGRAPHRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF6670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartSubGraphRaw_TypeDefinitionIndex = 20480;

	class StartSubGraphRaw : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x18
		::RPG::GameCore::SubLevelGraphDynamicOverrideSet* DynamicOverrideSet; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_615213D35A06D311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSubGraphRaw*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSubGraphRaw*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_615213D35A06D311_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C43293600FF5166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_6C43293600FF5166_OFFSET))(a1, a2);
		}
	};
}
