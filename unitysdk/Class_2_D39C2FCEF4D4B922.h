#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_39314FE2DF215333.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4E9B72F06BA2FBA2;
class Class_1_9DAA93B261093A09;
class Class_1_A422B5C99AB5650D;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_002A3C2EF46C74CF_OFFSET UNITYSDK_OFFSET(0xB7D6830)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_04B1E591CC9E8ECC_OFFSET UNITYSDK_OFFSET(0xB7D5FF0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0xB7D65D0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0841DD481C9E7631_OFFSET UNITYSDK_OFFSET(0xB7D37F0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0CC78D4556EB7518_OFFSET UNITYSDK_OFFSET(0xB7D4040)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0ECCCB67C31BD45B_OFFSET UNITYSDK_OFFSET(0xB7D5600)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_17999C18C76E1A82_OFFSET UNITYSDK_OFFSET(0xB7D5C70)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB7D6660)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_25AD43CEABA83428_OFFSET UNITYSDK_OFFSET(0xB7D52C0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_25EC27153ED46963_OFFSET UNITYSDK_OFFSET(0xB7D5430)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_3A43654647DF6A74_OFFSET UNITYSDK_OFFSET(0xB7D3FB0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_3AF977ABBC8283D6_OFFSET UNITYSDK_OFFSET(0xB7D55A0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_1_OFFSET UNITYSDK_OFFSET(0xB7D6260)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_2_OFFSET UNITYSDK_OFFSET(0xB7D6AF0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_OFFSET UNITYSDK_OFFSET(0xB7D6670)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_421ECE05A9FEB34D_OFFSET UNITYSDK_OFFSET(0xB7D3760)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_575495378A53B008_OFFSET UNITYSDK_OFFSET(0xB7D60B0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_57D6190C61FC7003_OFFSET UNITYSDK_OFFSET(0xB7D3340)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_5EF9DDA5070B0261_OFFSET UNITYSDK_OFFSET(0xB7D35B0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_656CD7CD7E175989_OFFSET UNITYSDK_OFFSET(0xB7D4120)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0xB7D5AE0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB7D6420)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_9818E41BDCF3063A_OFFSET UNITYSDK_OFFSET(0xB7D3D80)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_991C84568C655F51_OFFSET UNITYSDK_OFFSET(0xB7D4FA0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_9FAA2C729153F143_OFFSET UNITYSDK_OFFSET(0xB7D3170)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xB7D3160)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0xB7D68F0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_B7F8E960CB973ADC_OFFSET UNITYSDK_OFFSET(0xB7D39D0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_B88EEC44BCFAF6F9_OFFSET UNITYSDK_OFFSET(0xB7D4C60)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF242B0F311AA6EB_OFFSET UNITYSDK_OFFSET(0xB7D5010)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF6EEB0206D60DE3_OFFSET UNITYSDK_OFFSET(0xB7D6980)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0xB7D4BB0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0xB7D3F50)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0xB7D6520)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0xB7D6A50)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_F7A2740694EB100F_OFFSET UNITYSDK_OFFSET(0xB7D5170)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_FFFEA3B2FB2730AD_OFFSET UNITYSDK_OFFSET(0xB7D5C20)
#define CLASS_2_D39C2FCEF4D4B922__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D47E0)

inline static constexpr unsigned int Class_2_D39C2FCEF4D4B922_TypeDefinitionIndex = 51520;

class Class_2_D39C2FCEF4D4B922 : public ::Class_1_2A3859B4230FECE9
{
public:
	::MoleMole::CameraDelayDatas* Field_2_6; // 0x38
	::MoleMole::CameraDelayDatas* Field_2_9; // 0x40
	::MoleMole::CameraDelayDatas* Field_2_8; // 0x48
	::MoleMole::CameraDelayDatas* Field_2_7; // 0x50
	::Cinemachine::CameraState Field_2_11; // 0x58
	::Class_1_9DAA93B261093A09* Field_2_12; // 0x140
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_2_0; // 0x148
	::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition Field_2_2; // 0x150
	::Class_1_9DAA93B261093A09* Field_2_1; // 0x168
	::Class_1_A422B5C99AB5650D* Field_2_3; // 0x170
	::System::Collections::Generic::List_1<::Class_1_4E9B72F06BA2FBA2*>* Field_2_4; // 0x178
	::MoleMole::CameraDelayDatas* Field_2_10; // 0x180
	::MoleMole::Config::CameraDelayMoveMode Field_2_5; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_9FAA2C729153F143(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_9FAA2C729153F143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EF9DDA5070B0261(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_5EF9DDA5070B0261_OFFSET))(this, a1);
	}

	::System::Void Method_2_421ECE05A9FEB34D(::Enum_3_39314FE2DF215333 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_39314FE2DF215333))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_421ECE05A9FEB34D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0841DD481C9E7631(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0841DD481C9E7631_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9818E41BDCF3063A(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_9818E41BDCF3063A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A43654647DF6A74(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_3A43654647DF6A74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_B88EEC44BCFAF6F9(::Il2CppArray<::MoleMole::CameraOrbit>* a1, ::MoleMole::CameraOrbit a2, ::System::Single a3, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>& a4, ::UnityEngine::Vector2& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::Il2CppArray<::MoleMole::CameraOrbit>*, ::MoleMole::CameraOrbit, ::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_B88EEC44BCFAF6F9_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_991C84568C655F51(::MoleMole::CameraDelayDatas* a1, ::MoleMole::CameraDelayDatas*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_991C84568C655F51_OFFSET))(this, a1, a2);
	}

	::Class_1_9DAA93B261093A09* Method_2_CF242B0F311AA6EB(::System::Single a1)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF242B0F311AA6EB_OFFSET))(this, a1);
	}

	::Class_1_9DAA93B261093A09* Method_2_25EC27153ED46963(::MoleMole::CameraDelayDatas* a1, ::MoleMole::CameraDelayDatas* a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5, ::Class_1_9DAA93B261093A09* a6)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::Class_1_9DAA93B261093A09*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_25EC27153ED46963_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_3AF977ABBC8283D6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_3AF977ABBC8283D6_OFFSET))(this);
	}

	::System::Boolean Method_2_0ECCCB67C31BD45B(::System::Single a1, ::MoleMole::Config::CameraDelayMoveMode& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::Config::CameraDelayMoveMode&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0ECCCB67C31BD45B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70459B7C790C82DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_70459B7C790C82DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_656CD7CD7E175989(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_656CD7CD7E175989_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_2_17999C18C76E1A82(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_17999C18C76E1A82_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_B7F8E960CB973ADC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_B7F8E960CB973ADC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_2_FFFEA3B2FB2730AD()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_FFFEA3B2FB2730AD_OFFSET))(this);
	}

	::Class_1_9DAA93B261093A09* Method_2_24748FC20F375725()
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4147D731A50593B6(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_002A3C2EF46C74CF(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_002A3C2EF46C74CF_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* Method_2_F7A2740694EB100F(::MoleMole::Config::CameraDelayMoveMode a1, ::MoleMole::Config::CameraDelayMoveMode a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_F7A2740694EB100F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AA8656BCDBBD4870(::Enum_3_39314FE2DF215333 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_39314FE2DF215333))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF6EEB0206D60DE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF6EEB0206D60DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0CC78D4556EB7518(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0CC78D4556EB7518_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4147D731A50593B6_1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_1_OFFSET))(this, a1, a2);
	}

	::Class_1_9DAA93B261093A09* Method_2_575495378A53B008(::MoleMole::Config::CameraDelayMoveMode a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_575495378A53B008_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_04B1E591CC9E8ECC(::MoleMole::Config::CameraDelayMoveMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_04B1E591CC9E8ECC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4147D731A50593B6_2(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4147D731A50593B6_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_57D6190C61FC7003(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_57D6190C61FC7003_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::MoleMole::CameraDelayDatas* Method_2_25AD43CEABA83428()
	{
		return ((::MoleMole::CameraDelayDatas*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_25AD43CEABA83428_OFFSET))(this);
	}
};
