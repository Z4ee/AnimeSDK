#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOLOGINTRAINCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACF0AA0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x1ACF00B0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1ACF04C0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x1ACF02E0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACF0D00)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ACEFBD0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACF0D80)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF0D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLoginTrainControl_TypeDefinitionIndex = 70119;

	class MonoLoginTrainControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_GEANMPPJPDK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLoginTrainControl_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}
		static ::System::Int32* StaticGet_MCFKPLLFPBH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLoginTrainControl_TypeDefinitionIndex)->GetStaticField(0x86F4);
		}
		::UnityEngine::GameObject* train; // 0x18
		::UnityEngine::GameObject* train02; // 0x20
		::UnityEngine::Transform* dissolveQuad; // 0x28
		::System::Single dissolveProgress; // 0x30
		::UnityEngine::Vector3 quadStartLocalPos; // 0x34
		::UnityEngine::Vector3 quadEndLocalPos; // 0x40
		::System::Boolean CKHOFPKMKLC; // 0x4C
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JDDAANCPKHO; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EEFPGBGALJI; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_70CD9A040B4290BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_70CD9A040B4290BE_OFFSET))(this);
		}

		::System::Void Method_5_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_5_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_ONDISABLE_OFFSET))(this);
		}
	};
}
