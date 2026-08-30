#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4EEAD21E873B5A41;
class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FOURROTATEVOXELUTILS_EVALUATEID_OFFSET UNITYSDK_OFFSET(0xD0AB5A0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEENTITYBYENTITYID_OFFSET UNITYSDK_OFFSET(0xD0AB9A0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xD0ABBC0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD0ABF50)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0xD0AB670)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETPLAYERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD0ABFE0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_ISFOURROTATEVOXELCONTAINER_OFFSET UNITYSDK_OFFSET(0xD0ABEB0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETCONTAINERENTITY_OFFSET UNITYSDK_OFFSET(0xD0ABAF0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETENTITYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD0ABCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FourRotateVoxelUtils_TypeDefinitionIndex = 60517;

	class FourRotateVoxelUtils : public ::System::Object
	{
	public:
		static ::System::UInt32 EvaluateID(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_EVALUATEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetInstance(::Class_2_4EEAD21E873B5A41*& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::Class_2_4EEAD21E873B5A41*&, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETINSTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Class_2_B8E38BF47138A2E5* GetFourRotateEntityByEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::Class_2_B8E38BF47138A2E5*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEENTITYBYENTITYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* TryGetContainerEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETCONTAINERENTITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetFourRotateVoxelLevelConfig(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo*& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetEntityWorldPosition(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETENTITYWORLDPOSITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsFourRotateVoxelContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_ISFOURROTATEVOXELCONTAINER_OFFSET))(a1, a2);
		}

		static ::System::Single GetFourRotateVoxelLevelUnitLength(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELUNITLENGTH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* GetPlayerGameObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETPLAYERGAMEOBJECT_OFFSET))();
		}
	};
}
