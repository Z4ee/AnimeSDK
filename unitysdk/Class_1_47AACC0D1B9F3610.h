#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7C810361B290A5A;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class PlayableBindingControl; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_47AACC0D1B9F3610_METHOD_1_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0x1686DDB0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1686E650)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1686C370)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16869A70)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x1686C540)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_292A72D50182CB13_OFFSET UNITYSDK_OFFSET(0x1686B070)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_3F6E5E10CE187192_OFFSET UNITYSDK_OFFSET(0x1686DC10)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_43C44485B10C4EF3_OFFSET UNITYSDK_OFFSET(0x1686DBC0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x1686D280)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x1686D0D0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x16869AC0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_9E9CC6617AFDF44B_OFFSET UNITYSDK_OFFSET(0x1686E590)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_A7AED4682111053C_OFFSET UNITYSDK_OFFSET(0x1686E690)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_E5444DFD19C23556_OFFSET UNITYSDK_OFFSET(0x1686D8E0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0x1686D780)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x1686C3E0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1686E640)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1686E630)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1686E670)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x1686E480)
#define CLASS_1_47AACC0D1B9F3610__CTOR_OFFSET UNITYSDK_OFFSET(0x16869960)

inline static constexpr unsigned int Class_1_47AACC0D1B9F3610_TypeDefinitionIndex = 69575;

class Class_1_47AACC0D1B9F3610 : public ::System::Object
{
public:
	::UnityEngine::GameObject* AAKLLPLGHBN; // 0x10
	::RPG::Client::CloseupShotData* JJHHGNJHFCB; // 0x18
	::RPG::Client::PlayableBindingControl* IKINAOJEOFI; // 0x20
	::Cinemachine::CinemachineVirtualCameraBase* EAJFHBDCFFO; // 0x28
	::UnityEngine::Playables::PlayableDirector* FLHIOLOPKPM; // 0x30
	::UnityEngine::Object* CFLHDLPMJOD; // 0x38
	::UnityEngine::Transform* HHEFKGEMMKA; // 0x40
	::Class_1_B7C810361B290A5A* KDMOOAEBPDP; // 0x48
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x50
	::System::Nullable_1<::System::Single> NJIOJEBJDEN; // 0x58
	::System::Nullable_1<::UnityEngine::Vector3> FNOKLIMCJFE; // 0x60
	::System::Boolean EJDEKKEOHBE; // 0x70
	::System::Boolean INJJGMIGFFD; // 0x71
	::System::Nullable_1<::System::Double> JBELDBONNIK; // 0x78
	::System::Int32 LBDCGECLEPM; // 0x88
	::System::Nullable_1<::UnityEngine::Vector3> KOGCFJCMFLD; // 0x8C
	::System::Nullable_1<::UnityEngine::Quaternion> JMHPKMCKBJO; // 0x9C
	::System::Int32 MJHPCLJCCNK; // 0xB0

	::System::Void _ctor(::RPG::Client::CloseupShotData* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4, ::System::Nullable_1<::UnityEngine::Vector3> a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CloseupShotData*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Boolean Method_1_292A72D50182CB13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_292A72D50182CB13_OFFSET))(this);
	}

	::System::Void Method_1_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_1_E8F71BC8471C5469_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_E8F71BC8471C5469_1_OFFSET))(this);
	}

	::System::Void Method_1_43C44485B10C4EF3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_43C44485B10C4EF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F6E5E10CE187192(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_3F6E5E10CE187192_OFFSET))(this, a1);
	}

	::System::Void Method_1_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_1_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}

	::System::Nullable_1<::System::Double> Method_1_9E9CC6617AFDF44B()
	{
		return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_9E9CC6617AFDF44B_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_E5444DFD19C23556(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_E5444DFD19C23556_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_A7AED4682111053C()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_A7AED4682111053C_OFFSET))(this);
	}
};
