#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SingleMazeBuffToastConfig; }

#define RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_METHOD_2_9D8F1DBCD45673B0_OFFSET UNITYSDK_OFFSET(0x1AF468E0)
#define RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF469A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffToastConfigLookup_TypeDefinitionIndex = 16921;

	class MazeBuffToastConfigLookup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleMazeBuffToastConfig*>* MazeBuffToastConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D8F1DBCD45673B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBuffToastConfigLookup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBuffToastConfigLookup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_METHOD_2_9D8F1DBCD45673B0_OFFSET))(a1, a2);
		}
	};
}
