#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1605FB50)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_39202E9846AE8B5F_OFFSET UNITYSDK_OFFSET(0x1605F9A0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_5D296A533150C284_1_OFFSET UNITYSDK_OFFSET(0x16060210)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_5D296A533150C284_OFFSET UNITYSDK_OFFSET(0x16060180)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1605FFE0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x16060030)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1605F750)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1605F4D0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1605F2E0)
#define MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1605FF90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIBlurController_TypeDefinitionIndex = 77184;

	class MonoUIBlurController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean needGraphicRaycast; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* affectTrans; // 0x20
		::System::Int32 Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleEvents(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET))(this, a1);
		}

		::System::Void Method_5_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_5_BED35D89A6A10D7A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET))(this, a1);
		}

		::System::Void Method_5_39202E9846AE8B5F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_39202E9846AE8B5F_OFFSET))(this, a1);
		}

		::System::Void Method_5_5D296A533150C284(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_5D296A533150C284_OFFSET))(this, a1);
		}

		::System::Void Method_5_5D296A533150C284_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_5D296A533150C284_1_OFFSET))(this, a1);
		}
	};
}
