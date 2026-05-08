#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace RootMotion::FinalIK { class AimController; }
namespace RootMotion::FinalIK { class AimIK; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_29AF178C9CE3EC26_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x161A6C00)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x161A6F10)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x161A6E80)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x161A6E00)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x161A6FD0)
#define CLASS_3_29AF178C9CE3EC26_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x161A6750)
#define CLASS_3_29AF178C9CE3EC26__CCTOR_OFFSET UNITYSDK_OFFSET(0x161A6C50)
#define CLASS_3_29AF178C9CE3EC26__CTOR_OFFSET UNITYSDK_OFFSET(0x161A6CD0)

inline static constexpr unsigned int Class_3_29AF178C9CE3EC26_TypeDefinitionIndex = 65059;

class Class_3_29AF178C9CE3EC26 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x10; // 0x0
	::System::Action* Field_3_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::RootMotion::FinalIK::AimController*, ::RootMotion::FinalIK::IKSolver_UpdateDelegate*>* Field_3_12; // 0x50
	::MoleMole::Config::ConfigPosRot* Field_3_10; // 0x58
	::UnityEngine::GameObject* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_2; // 0x68
	::System::String* Field_3_7; // 0x70
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimIK*>* Field_3_0; // 0x78
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_3; // 0x80
	::UnityEngine::Vector2 Field_3_13; // 0x88
	::UnityEngine::Vector3 Field_3_9; // 0x90
	::System::Boolean Field_3_6; // 0x9C
	::System::Boolean Field_3_1; // 0x9D
	::System::Boolean Field_3_8; // 0x9E
	::MoleMole::Config::AimIKLockTargetType Field_3_11; // 0xA0
	::System::Single Field_3_14; // 0xA4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_29AF178C9CE3EC26* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_29AF178C9CE3EC26*(*)())((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
