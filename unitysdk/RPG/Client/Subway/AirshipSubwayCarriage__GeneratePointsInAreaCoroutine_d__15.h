#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Subway { class AirshipSubwayCarriage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE10E210)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10EEB0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10EF10)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE10EEC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE10E1F0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0xE10D020)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayCarriage__GeneratePointsInAreaCoroutine_d__15_TypeDefinitionIndex = 80823;

	class AirshipSubwayCarriage__GeneratePointsInAreaCoroutine_d__15 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _generatedPositions_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::Il2CppArray<::System::Single>* _areaWeights_5__7; // 0x20
		::RPG::Client::Subway::AirshipSubwayCarriage* __4__this; // 0x28
		::System::Int32 _successCount_5__3; // 0x30
		::System::Int32 _frameAttemptCount_5__5; // 0x34
		::System::Int32 _totalAttemptCount_5__4; // 0x38
		::System::Int32 _consecutiveFailures_5__6; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Single _totalArea_5__8; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__GENERATEPOINTSINAREACOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
