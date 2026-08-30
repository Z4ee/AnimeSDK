#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_197CC3E8889A3449;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_06AB2BCBCFDFE141_METHOD_1_03E2B9212B4B6EAF_1_OFFSET UNITYSDK_OFFSET(0x1C330CF0)
#define CLASS_1_06AB2BCBCFDFE141_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x1C330CB0)
#define CLASS_1_06AB2BCBCFDFE141_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1C330C70)
#define CLASS_1_06AB2BCBCFDFE141__CTOR_OFFSET UNITYSDK_OFFSET(0x1C330D30)

inline static constexpr unsigned int Class_1_06AB2BCBCFDFE141_TypeDefinitionIndex = 41237;

class Class_1_06AB2BCBCFDFE141 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_197CC3E8889A3449*>* POIBMHKAKAA; // 0x10
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup EJEHPEFPPNL; // 0x18
	::System::Boolean CAGCHKJHMPD; // 0x40
	::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x44
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation NMELCPIOKNO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AB2BCBCFDFE141__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AB2BCBCFDFE141_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AB2BCBCFDFE141_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AB2BCBCFDFE141_METHOD_1_03E2B9212B4B6EAF_1_OFFSET))(this);
	}
};
