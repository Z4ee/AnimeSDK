#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_METHOD_5_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xB937530)
#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB9375B0)
#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0xB9375C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManagerDebug_TypeDefinitionIndex = 56552;

	class EraFlipperManagerDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::EraStateType CurrentState; // 0x18
		::System::Int32 CurrentRegionId; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Devices; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* TaIndex; // 0x28
		::System::Boolean InRegion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_9D455FE4693966A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_METHOD_5_9D455FE4693966A8_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
