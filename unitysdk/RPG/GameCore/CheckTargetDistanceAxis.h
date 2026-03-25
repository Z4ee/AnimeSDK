#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/EntityType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_METHOD_3_668A889A3FFA8509_OFFSET UNITYSDK_OFFSET(0x17076AE0)
#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_METHOD_3_C6E34E778EE29956_OFFSET UNITYSDK_OFFSET(0x17076AA0)
#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x17076AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckTargetDistanceAxis_TypeDefinitionIndex = 14211;

	class CheckTargetDistanceAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::EntityType TargetType; // 0x10
		::System::Single Distance; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6E34E778EE29956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTargetDistanceAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTargetDistanceAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_METHOD_3_C6E34E778EE29956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_668A889A3FFA8509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTargetDistanceAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTargetDistanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_METHOD_3_668A889A3FFA8509_OFFSET))(a1, a2);
		}
	};
}
