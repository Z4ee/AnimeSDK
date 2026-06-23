#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_239EC760F3584848_OFFSET UNITYSDK_OFFSET(0x18F36740)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_5300B9691BDFE1A7_OFFSET UNITYSDK_OFFSET(0x18F37190)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_5D1477C5FE3AC65D_OFFSET UNITYSDK_OFFSET(0x18F36630)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_8E9F7E1960DBA771_OFFSET UNITYSDK_OFFSET(0x18F38190)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_BA68D59D457B979D_OFFSET UNITYSDK_OFFSET(0x18F38BC0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18F38B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearInMainCityTarget_TypeDefinitionIndex = 45846;

	class ConfigLockNearInMainCityTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Single LockOnRadius; // 0x40
		::System::Single LockOnAngle; // 0x44
		::UnityEngine::AnimationCurve* DistanceWeight; // 0x48
		::UnityEngine::AnimationCurve* EntityAngleWeight; // 0x50
		::UnityEngine::AnimationCurve* CameraAngleWeight; // 0x58
		::UnityEngine::AnimationCurve* DragDirectModeOverrideEntityAngleWeight; // 0x60
		::UnityEngine::AnimationCurve* DragDirectModeOverrideCameraAngleWeight; // 0x68
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideRadius; // 0x70
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideAngle; // 0x78
		::System::Func_3<::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single>* GetWeight; // 0x80
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* finalCandicateList; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET__CTOR_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_5D1477C5FE3AC65D(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a8)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_5D1477C5FE3AC65D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Class_1_CB7F0487F7A6164A* Method_2_5300B9691BDFE1A7(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_5300B9691BDFE1A7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Method_2_8E9F7E1960DBA771(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean& a5)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_8E9F7E1960DBA771_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Method_2_BA68D59D457B979D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean& a5)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_BA68D59D457B979D_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_239EC760F3584848(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a9)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_METHOD_2_239EC760F3584848_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
