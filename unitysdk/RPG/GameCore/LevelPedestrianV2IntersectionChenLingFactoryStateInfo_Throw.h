#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionChenLingFactoryStateInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW_METHOD_3_0B84E24EE6D5E6C4_OFFSET UNITYSDK_OFFSET(0x198832D0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW_METHOD_3_23AEF9DF1D9A4353_OFFSET UNITYSDK_OFFSET(0x198833F0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198832C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw_TypeDefinitionIndex = 16456;

	class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw : public ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo
	{
	public:
		::System::String* ThrowAnimName; // 0x10
		::RPG::MVector3 ThrowPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23AEF9DF1D9A4353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW_METHOD_3_23AEF9DF1D9A4353_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B84E24EE6D5E6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_THROW_METHOD_3_0B84E24EE6D5E6C4_OFFSET))(a1, a2);
		}
	};
}
