#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_5A0FB3D2EF57951A_OFFSET UNITYSDK_OFFSET(0x1B082380)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_B9FA496A37079CBE_OFFSET UNITYSDK_OFFSET(0x1B07F410)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07F400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2Info_TypeDefinitionIndex = 16627;

	class LevelPedestrianV2Info : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* MemberConfigPath; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* Emitters; // 0x40
		::RPG::GameCore::LevelPedestrianV2RoadMapInfo* RoadMap; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5A0FB3D2EF57951A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2Info*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2Info*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_5A0FB3D2EF57951A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9FA496A37079CBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2Info* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2Info*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_METHOD_4_B9FA496A37079CBE_OFFSET))(a1, a2);
		}
	};
}
