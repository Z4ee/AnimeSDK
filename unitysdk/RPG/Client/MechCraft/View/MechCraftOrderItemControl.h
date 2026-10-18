#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftOrderItemControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_GET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD64BEF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_183FE592D5277455_OFFSET UNITYSDK_OFFSET(0xD64D6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_222ED580AEF556F3_OFFSET UNITYSDK_OFFSET(0xD64CE60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_46F6C2241A41C47B_OFFSET UNITYSDK_OFFSET(0xD64D110)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_5A263C446D25FD15_OFFSET UNITYSDK_OFFSET(0xD64C140)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_76EACAC63878619E_OFFSET UNITYSDK_OFFSET(0xD64C070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_B682DECB960C7F97_OFFSET UNITYSDK_OFFSET(0xD64C0B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_SET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD64BF30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD64D900)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderItemControl_TypeDefinitionIndex = 80013;

	class MechCraftOrderItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* OBNMPEJCBAO; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* LFGMLJCCPCH; // 0x20
		::RPG::Client::MechCraft::View::MechCraftOrderItemControlBinder* _Binder; // 0x28
		::UnityEngine::Transform* _RedDotNew; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* _ParticleRenderers; // 0x38
		::System::String* _AnimNameNew; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_ParticleCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_GET_PARTICLECAMERA_OFFSET))(this);
		}

		::System::Void set_ParticleCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_SET_PARTICLECAMERA_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* Method_5_76EACAC63878619E()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_76EACAC63878619E_OFFSET))(this);
		}

		::System::Void Method_5_B682DECB960C7F97(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_B682DECB960C7F97_OFFSET))(this, a1);
		}

		::System::Void Method_5_46F6C2241A41C47B(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_46F6C2241A41C47B_OFFSET))(this, a1);
		}

		::System::Void Method_5_222ED580AEF556F3(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_222ED580AEF556F3_OFFSET))(this, a1);
		}

		::System::Void Method_5_5A263C446D25FD15(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_5A263C446D25FD15_OFFSET))(this, a1);
		}

		::System::Void Method_5_183FE592D5277455(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_METHOD_5_183FE592D5277455_OFFSET))(this, a1, a2);
		}
	};
}
