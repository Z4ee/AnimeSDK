#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_Struct_2_04E70A334141E598_7.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_Struct_2_08C57BCFB296C7A0.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_Struct_2_1C06EF6E38743DE4.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
class Class_3_BA709FB56ED5FAC4;
class Class_3_CF6254B260CF5CF4;
class Class_3_E2819F45333A39BF;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_066B2FF6260EB42C_OFFSET UNITYSDK_OFFSET(0x12310610)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_18901EBF226AE851_OFFSET UNITYSDK_OFFSET(0x12310840)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2978A65FACD8ABF8_OFFSET UNITYSDK_OFFSET(0x1230EE40)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2D2275860BACD83B_1_OFFSET UNITYSDK_OFFSET(0x123108F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2D2275860BACD83B_OFFSET UNITYSDK_OFFSET(0x12310260)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5653A00E6BB1DA78_OFFSET UNITYSDK_OFFSET(0x123116B0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5D1477C5FE3AC65D_OFFSET UNITYSDK_OFFSET(0x1230C3E0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5E282517B7B8E54E_OFFSET UNITYSDK_OFFSET(0x1230D120)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_7A17F208BF05E4F4_OFFSET UNITYSDK_OFFSET(0x1230ECE0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_AEB68B8F355308DA_OFFSET UNITYSDK_OFFSET(0x1230C4F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0x12310CA0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_E15FCCE65FC3E7CA_OFFSET UNITYSDK_OFFSET(0x12310EB0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_ED8D420291CBFB8D_OFFSET UNITYSDK_OFFSET(0x12311350)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1230ED50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearTarget_TypeDefinitionIndex = 60442;

	class ConfigLockNearTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Single LockOnRadiusFar; // 0x40
		::System::Single LockOnRadiusNear; // 0x44
		::System::Single LockOnAngleUnderControlSteer; // 0x48
		::System::Single LockOnAngleInIdle; // 0x4C
		::System::Single LockOnCameraAngle; // 0x50
		::System::Single stillAngle; // 0x54
		::System::Single AimAngle; // 0x58
		::UnityEngine::AnimationCurve* DistanceWeight; // 0x60
		::UnityEngine::AnimationCurve* EntityAngleWeight; // 0x68
		::UnityEngine::AnimationCurve* CameraAngleWeight; // 0x70
		::UnityEngine::AnimationCurve* DragDirectModeOverrideEntityAngleWeight; // 0x78
		::UnityEngine::AnimationCurve* DragDirectModeOverrideCameraAngleWeight; // 0x80
		::System::Single BeyondCamViewWeight; // 0x88
		::System::Single BeyondCamViewWeightWithJoystickControl; // 0x8C
		::System::Boolean StunEntityApplyBeyondCamViewWeight; // 0x90
		::System::Single StunEntityExtraScore; // 0x94
		::System::Boolean isLockInBack; // 0x98
		::System::Single lookIKSameWeight; // 0x9C
		::System::Boolean ignoreSteer; // 0xA0
		::System::Boolean PreferLastAttackTarget; // 0xA1
		::System::Boolean PreferManualLockTarget; // 0xA2
		::System::Boolean IgnoreAISelectTarget; // 0xA3
		::System::UInt32 _lookIKPrecedenceEntityID; // 0xA4
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* _finalCandidateList; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET__CTOR_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_5D1477C5FE3AC65D(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a8)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5D1477C5FE3AC65D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Class_1_CB7F0487F7A6164A* Method_2_5E282517B7B8E54E(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a4, ::System::Single a5, ::System::Single a6, ::Class_3_E2819F45333A39BF* a7, ::System::Boolean a8)
		{
			return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*, ::System::Single, ::System::Single, ::Class_3_E2819F45333A39BF*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5E282517B7B8E54E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_AEB68B8F355308DA(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a9)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_AEB68B8F355308DA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean Method_2_2D2275860BACD83B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_CB7F0487F7A6164A* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2D2275860BACD83B_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean Method_2_066B2FF6260EB42C(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_066B2FF6260EB42C_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_2_18901EBF226AE851(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_18901EBF226AE851_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2D2275860BACD83B_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_CB7F0487F7A6164A* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2D2275860BACD83B_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_2_B0C9E67798485BC6()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_B0C9E67798485BC6_OFFSET))(this);
		}

		::System::Boolean Method_2_E15FCCE65FC3E7CA(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_CB7F0487F7A6164A* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_CB7F0487F7A6164A*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_E15FCCE65FC3E7CA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void Method_2_7A17F208BF05E4F4(::MoleMole::Config::ConfigLockNearTarget_Struct_2_08C57BCFB296C7A0& a1, ::MoleMole::Config::ConfigLockNearTarget_Struct_2_04E70A334141E598_7& a2, ::MoleMole::Config::ConfigLockNearTarget_Struct_2_1C06EF6E38743DE4& a3)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigLockNearTarget_Struct_2_08C57BCFB296C7A0&, ::MoleMole::Config::ConfigLockNearTarget_Struct_2_04E70A334141E598_7&, ::MoleMole::Config::ConfigLockNearTarget_Struct_2_1C06EF6E38743DE4&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_7A17F208BF05E4F4_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_2_ED8D420291CBFB8D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_CB7F0487F7A6164A* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_CB7F0487F7A6164A*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_ED8D420291CBFB8D_OFFSET))(this, a1, a2, a3, a4);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_2978A65FACD8ABF8(::MoleMole::Battle::Entity* a1, ::Class_3_CF6254B260CF5CF4* a2, ::Class_3_E2819F45333A39BF* a3, ::Class_3_BA709FB56ED5FAC4* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a14)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_CF6254B260CF5CF4*, ::Class_3_E2819F45333A39BF*, ::Class_3_BA709FB56ED5FAC4*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_2978A65FACD8ABF8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::Single Method_2_5653A00E6BB1DA78()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_METHOD_2_5653A00E6BB1DA78_OFFSET))(this);
		}
	};
}
