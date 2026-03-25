#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_METHOD_4_1DA71D1682CC8B73_OFFSET UNITYSDK_OFFSET(0x17697E50)
#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_METHOD_4_D52A6B93FE9D2BB7_OFFSET UNITYSDK_OFFSET(0x17686B70)
#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17686B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_MoveAlongPath_TypeDefinitionIndex = 18382;

	class ST_Main_MoveAlongPath : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x18
		::System::Boolean StanceUseVariable; // 0x1C
		::System::String* StanceVariableName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1DA71D1682CC8B73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveAlongPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveAlongPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_METHOD_4_1DA71D1682CC8B73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D52A6B93FE9D2BB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_METHOD_4_D52A6B93FE9D2BB7_OFFSET))(a1, a2);
		}
	};
}
