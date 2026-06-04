#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_METHOD_3_AE6F12CDA0CA59AB_OFFSET UNITYSDK_OFFSET(0x19883F30)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_METHOD_3_D851402CF2FE6444_OFFSET UNITYSDK_OFFSET(0x19883EF0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19883F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrosswalkInfo_TypeDefinitionIndex = 16451;

	class LevelPedestrianV2IntersectionCrosswalkInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::String* BindCityIntersectionSignName; // 0x50
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>* AreaInfo; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>* ConnectAreaInfo; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D851402CF2FE6444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_METHOD_3_D851402CF2FE6444_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE6F12CDA0CA59AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_METHOD_3_AE6F12CDA0CA59AB_OFFSET))(a1, a2);
		}
	};
}
