#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOLOGINTRAINCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9DAD00)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xA9DA770)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0xA9DA3C0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_732EDB3121B072B2_OFFSET UNITYSDK_OFFSET(0xA9DA5C0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9DAF60)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9D9F60)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9DAFE0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DAFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLoginTrainControl_TypeDefinitionIndex = 64676;

	class MonoLoginTrainControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLoginTrainControl_TypeDefinitionIndex)->GetStaticField(0xE490);
		}
		static ::System::Int32* StaticGet_Field_5_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLoginTrainControl_TypeDefinitionIndex)->GetStaticField(0xE494);
		}
		::UnityEngine::GameObject* train; // 0x18
		::UnityEngine::GameObject* train02; // 0x20
		::UnityEngine::Transform* dissolveQuad; // 0x28
		::System::Single dissolveProgress; // 0x30
		::UnityEngine::Vector3 quadStartLocalPos; // 0x34
		::UnityEngine::Vector3 quadEndLocalPos; // 0x40
		::System::Boolean Field_5_6; // 0x4C
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_7; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_8; // 0x58

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

		::System::Void Method_5_732EDB3121B072B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_732EDB3121B072B2_OFFSET))(this);
		}

		::System::Void Method_5_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_METHOD_5_0CC4BC19C602BCD0_OFFSET))(this);
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
