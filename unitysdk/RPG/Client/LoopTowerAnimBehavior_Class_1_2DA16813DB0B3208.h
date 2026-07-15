#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopTowerAnimBehavior_TowerDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_4BC0DE51B4283898_OFFSET UNITYSDK_OFFSET(0x15BF2C60)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_9B9D8886EE7C5A8A_OFFSET UNITYSDK_OFFSET(0x15BF3360)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_AFC4F0A8F621F288_OFFSET UNITYSDK_OFFSET(0x15BF30D0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF2530)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_Class_1_2DA16813DB0B3208_TypeDefinitionIndex = 67727;

	class LoopTowerAnimBehavior_Class_1_2DA16813DB0B3208 : public ::System::Object
	{
	public:
		::Class_1_469A5FF005CF3F5C* Field_1_0; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_1; // 0x18
		::RPG::Client::PipelineCameraEngine* Field_1_2; // 0x20
		::System::Single Field_1_3; // 0x28
		::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType Field_1_4; // 0x2C

		::System::Void _ctor(::System::Single a1, ::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_9B9D8886EE7C5A8A(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_9B9D8886EE7C5A8A_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_AFC4F0A8F621F288()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_AFC4F0A8F621F288_OFFSET))(this);
		}

		::System::Void Method_1_4BC0DE51B4283898(::System::Single a1, ::System::Single a2, ::RPG::GameCore::VCameraShakeV2* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLASS_1_2DA16813DB0B3208_METHOD_1_4BC0DE51B4283898_OFFSET))(this, a1, a2, a3);
		}
	};
}
