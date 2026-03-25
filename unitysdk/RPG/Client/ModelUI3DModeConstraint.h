#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ModelUI3DModeConstraint_CameraRotateScopeShaderTransition; }
namespace RPG::Client { class ModelUI3DModeConstraint_Class_1_19721EF9D24AE504; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C09FA0)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_INIT_OFFSET UNITYSDK_OFFSET(0x9C0A700)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0x9C0AA00)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_METHOD_5_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x9C0A280)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9C0AF20)

namespace RPG::Client
{
	inline static constexpr unsigned int ModelUI3DModeConstraint_TypeDefinitionIndex = 55939;

	class ModelUI3DModeConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ModelUI3DModeConstraint_CameraRotateScopeShaderTransition*>* RotateScopeShaderTransitionsConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ModelUI3DModeConstraint_Class_1_19721EF9D24AE504*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_ECA33935490AF2E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_METHOD_5_ECA33935490AF2E4_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_INIT_OFFSET))(this);
		}

		::System::Void LogicUpdate(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_LOGICUPDATE_OFFSET))(this, a1, a2);
		}
	};
}
