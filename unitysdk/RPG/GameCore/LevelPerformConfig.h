#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPERFORMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B085C40)
#define RPG_GAMECORE_LEVELPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B085DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPerformConfig_TypeDefinitionIndex = 17587;

	class LevelPerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelBeginCloseupShotPath; // 0x10
		::System::String* ActiveEntityCloseupShotPath; // 0x18
		::System::String* TeamCloseupShotPath; // 0x20
		::Il2CppArray<::RPG::MVector3>* TeamFormationPosList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPerformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPerformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
