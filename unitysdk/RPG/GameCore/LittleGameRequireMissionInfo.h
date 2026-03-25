#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_METHOD_2_73267DE8F06E4DD5_OFFSET UNITYSDK_OFFSET(0x173607D0)
#define RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17360890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameRequireMissionInfo_TypeDefinitionIndex = 15921;

	class LittleGameRequireMissionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RequireSubMissionIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73267DE8F06E4DD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameRequireMissionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameRequireMissionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_METHOD_2_73267DE8F06E4DD5_OFFSET))(a1, a2);
		}
	};
}
