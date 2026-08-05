#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BA7D2FDDB986D840;
class Class_3_55230CEF110DAF7B;
class Class_3_55230CEF110DAF7B_1;
namespace MoleMole { class MorphBallPhysicsMiddleware; }
namespace MoleMole::Battle { class MorphBallConfig; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }

#define CLASS_3_61A5922E5046F385_2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17829F60)
#define CLASS_3_61A5922E5046F385_2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1782A0C0)
#define CLASS_3_61A5922E5046F385_2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1782A040)
#define CLASS_3_61A5922E5046F385_2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17829E10)
#define CLASS_3_61A5922E5046F385_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17829FB0)
#define CLASS_3_61A5922E5046F385_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1782A030)

inline static constexpr unsigned int Class_3_61A5922E5046F385_2_TypeDefinitionIndex = 66354;

class Class_3_61A5922E5046F385_2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_27 = 0x56; // 0x0
	::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>* Field_3_7; // 0x48
	::Class_1_BA7D2FDDB986D840* Field_3_13; // 0x50
	::Class_1_BA7D2FDDB986D840* Field_3_19; // 0x58
	::MoleMole::Battle::MorphBallConfig* Field_3_1; // 0x60
	::MoleMole::MorphBallPhysicsMiddleware* Field_3_0; // 0x68
	::System::Collections::Generic::List_1<::Class_3_55230CEF110DAF7B_1*>* Field_3_20; // 0x70
	::System::Collections::Generic::List_1<::Class_3_55230CEF110DAF7B*>* Field_3_21; // 0x78
	::MoleMole::Battle::MorphBallConfig* Field_3_2; // 0x80
	::Class_1_BA7D2FDDB986D840* Field_3_18; // 0x88
	::UnityEngine::Vector3 Field_3_15; // 0x90
	::UnityEngine::Vector3 Field_3_8; // 0x9C
	::UnityEngine::Vector2 Field_3_6; // 0xA8
	::System::Boolean Field_3_14; // 0xB0
	::System::Boolean Field_3_11; // 0xB1
	::UnityEngine::Vector3 Field_3_9; // 0xB4
	::UnityEngine::Vector3 Field_3_10; // 0xC0
	::Struct_2_984AA94FB23486F9_3 Field_3_16; // 0xCC
	::System::Boolean Field_3_5; // 0x100
	::System::Boolean Field_3_12; // 0x101
	::System::Boolean Field_3_17; // 0x102
	::System::Boolean Field_3_4; // 0x103
	::UnityEngine::Vector3 Field_3_22; // 0x104
	::UnityEngine::Vector3 Field_3_23; // 0x110

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385_2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
