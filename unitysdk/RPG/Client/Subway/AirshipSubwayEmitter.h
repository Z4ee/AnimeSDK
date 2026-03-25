#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirshipSubwayEmitter_SubPrefab.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_488;
class Class_1_EE60750735AAF463;
namespace RPG::Client::Subway { class AirshipSubway; }
namespace RPG::Client::Subway { class AirshipSubwayTimetable; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_ALLOC_OFFSET UNITYSDK_OFFSET(0xA4F73B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xA4F7320)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RANDOMSUBPREFAB_OFFSET UNITYSDK_OFFSET(0xA4F7580)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4F77A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F7800)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayEmitter_TypeDefinitionIndex = 64528;

	class AirshipSubwayEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Subway::AirshipSubwayTimetable* Timetable; // 0x18
		::RPG::Client::Subway::AirshipSubway* Prefab; // 0x20
		::Il2CppArray<::RPG::Client::Subway::AirshipSubwayEmitter_SubPrefab>* SubPrefabs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_488* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_488*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::Class_1_EE60750735AAF463* Alloc(::UnityEngine::Transform* a1)
		{
			return ((::Class_1_EE60750735AAF463*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_ALLOC_OFFSET))(this, a1);
		}

		::RPG::Client::Subway::AirshipSubwayEmitter_SubPrefab RandomSubPrefab()
		{
			return ((::RPG::Client::Subway::AirshipSubwayEmitter_SubPrefab(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RANDOMSUBPREFAB_OFFSET))(this);
		}

		::System::Void Release(::Class_1_EE60750735AAF463* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE60750735AAF463*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYEMITTER_RELEASE_OFFSET))(this, a1);
		}
	};
}
