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

#define CLASS_3_29AF178C9CE3EC26_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19F79530)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x19F79730)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19F79800)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x19F79890)
#define CLASS_3_29AF178C9CE3EC26_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19F797F0)
#define CLASS_3_29AF178C9CE3EC26_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19F79080)
#define CLASS_3_29AF178C9CE3EC26__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F79580)
#define CLASS_3_29AF178C9CE3EC26__CTOR_OFFSET UNITYSDK_OFFSET(0x19F79600)

inline static constexpr unsigned int Class_3_29AF178C9CE3EC26_TypeDefinitionIndex = 52953;

class Class_3_29AF178C9CE3EC26 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_18 = 0x12; // 0x0
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_6; // 0x48
	::MoleMole::Config::ConfigPosRot* Field_3_15; // 0x50
	::System::Action* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimIK*>* Field_3_1; // 0x60
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_7; // 0x68
	::System::String* Field_3_10; // 0x70
	::System::Collections::Generic::Dictionary_2<::RootMotion::FinalIK::AimController*, ::RootMotion::FinalIK::IKSolver_UpdateDelegate*>* Field_3_13; // 0x78
	::UnityEngine::GameObject* Field_3_5; // 0x80
	::UnityEngine::Vector2 Field_3_12; // 0x88
	::MoleMole::Config::AimIKLockTargetType Field_3_14; // 0x90
	::UnityEngine::Vector3 Field_3_8; // 0x94
	::System::Boolean Field_3_11; // 0xA0
	::System::Boolean Field_3_9; // 0xA1
	::System::Boolean Field_3_0; // 0xA2
	::System::Single Field_3_19; // 0xA4

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

	::System::Void Method_3_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_29AF178C9CE3EC26* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_29AF178C9CE3EC26*(*)())((::PBYTE)hIl2Cpp + CLASS_3_29AF178C9CE3EC26_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
