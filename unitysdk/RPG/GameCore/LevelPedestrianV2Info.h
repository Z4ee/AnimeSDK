#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_3BEF0B6D632456FE_OFFSET UNITYSDK_OFFSET(0x1D1E6B20)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_4E2D0E652780B3D7_OFFSET UNITYSDK_OFFSET(0x1D1E3450)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2Info_TypeDefinitionIndex = 17129;

	class LevelPedestrianV2Info : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* MemberConfigPath; // 0x38
		::System::String* ExtendFreeStyleConfigPath; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* Emitters; // 0x48
		::RPG::GameCore::LevelPedestrianV2RoadMapInfo* RoadMap; // 0x50
		::System::Boolean IsPosePermanent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3BEF0B6D632456FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2Info*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2Info*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_3BEF0B6D632456FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E2D0E652780B3D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2Info* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2Info*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_4E2D0E652780B3D7_OFFSET))(a1, a2);
		}
	};
}
