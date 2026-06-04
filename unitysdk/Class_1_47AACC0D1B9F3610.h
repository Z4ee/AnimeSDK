#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5C16A1F7496735F4;
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

#define CLASS_1_47AACC0D1B9F3610_METHOD_1_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0xAC6B870)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAC6C000)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAC69FC0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAC67840)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xAC6A150)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_292A72D50182CB13_OFFSET UNITYSDK_OFFSET(0xAC68D50)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_3F6E5E10CE187192_OFFSET UNITYSDK_OFFSET(0xAC6B6D0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_43C44485B10C4EF3_OFFSET UNITYSDK_OFFSET(0xAC6B680)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xAC6ACB0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xAC6A030)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0xAC6B290)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0xAC67890)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_9E9CC6617AFDF44B_OFFSET UNITYSDK_OFFSET(0xAC6BF30)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_E5444DFD19C23556_OFFSET UNITYSDK_OFFSET(0xAC6B3B0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xAC6BFF0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC6BFE0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAC6C020)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xAC6AE60)
#define CLASS_1_47AACC0D1B9F3610__CTOR_OFFSET UNITYSDK_OFFSET(0xAC67730)

inline static constexpr unsigned int Class_1_47AACC0D1B9F3610_TypeDefinitionIndex = 65078;

class Class_1_47AACC0D1B9F3610 : public ::System::Object
{
public:
	::UnityEngine::Object* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::Client::PlayableBindingControl* Field_1_2; // 0x20
	::RPG::Client::CloseupShotData* Field_1_3; // 0x28
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_4; // 0x30
	::UnityEngine::Playables::PlayableDirector* Field_1_5; // 0x38
	::RPG::Client::CameraDataAndFlags* Field_1_6; // 0x40
	::UnityEngine::Transform* Field_1_7; // 0x48
	::Class_1_5C16A1F7496735F4* Field_1_8; // 0x50
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_9; // 0x58
	::System::Nullable_1<::UnityEngine::Quaternion> Field_1_10; // 0x68
	::System::Nullable_1<::System::Single> Field_1_11; // 0x7C
	::System::Nullable_1<::System::Double> Field_1_12; // 0x88
	::System::Int32 Field_1_13; // 0x98
	::System::Boolean Field_1_14; // 0x9C
	::System::Boolean Field_1_15; // 0x9D
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_16; // 0xA0
	::System::Int32 Field_1_17; // 0xB0

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

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Boolean Method_1_292A72D50182CB13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_292A72D50182CB13_OFFSET))(this);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_7FD7D34994C88765_OFFSET))(this);
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
};
