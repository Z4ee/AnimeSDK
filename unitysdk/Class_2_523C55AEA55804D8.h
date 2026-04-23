#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_511;
class Class_1_51EED7CD291B614D;
class Class_1_56FF45D7B2C55655;
class Class_3_2B2F6402EA3EAA0F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_523C55AEA55804D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128D09F0)
#define CLASS_2_523C55AEA55804D8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x128D1E70)
#define CLASS_2_523C55AEA55804D8_METHOD_2_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x128D3650)
#define CLASS_2_523C55AEA55804D8_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x128D3730)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1EBA51A89D5A0DB5_OFFSET UNITYSDK_OFFSET(0x128D0AC0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1FFE4260A7179061_OFFSET UNITYSDK_OFFSET(0x128D3870)
#define CLASS_2_523C55AEA55804D8_METHOD_2_299EFA4949973FDA_OFFSET UNITYSDK_OFFSET(0x128D19E0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_2ABF98E64A5AC026_OFFSET UNITYSDK_OFFSET(0x128D2BB0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_387F7E46E5E4387A_OFFSET UNITYSDK_OFFSET(0x128D1750)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3A9BDB056AF13046_OFFSET UNITYSDK_OFFSET(0x128D1EF0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3B4FCCB1316C6ED8_OFFSET UNITYSDK_OFFSET(0x128D1510)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x128D3850)
#define CLASS_2_523C55AEA55804D8_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x128D35A0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x128D2180)
#define CLASS_2_523C55AEA55804D8_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x128D1890)
#define CLASS_2_523C55AEA55804D8_METHOD_2_7FCED9DBE84C0CF1_OFFSET UNITYSDK_OFFSET(0x128D23B0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_9046EE9CC7F055C3_OFFSET UNITYSDK_OFFSET(0x128D17F0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x128D3860)
#define CLASS_2_523C55AEA55804D8_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x128D1E10)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C0A2DE8417347362_OFFSET UNITYSDK_OFFSET(0x128D0F80)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x128D38B0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x128D2AC0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x128D3910)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128D38A0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x128D2360)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128D2310)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CAE55D2F30F9F997_OFFSET UNITYSDK_OFFSET(0x128D1FF0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x128D38D0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x128D21E0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x128D0920)
#define CLASS_2_523C55AEA55804D8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x128D38C0)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x128D1310)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x128D16E0)
#define CLASS_2_523C55AEA55804D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x128D3920)
#define CLASS_2_523C55AEA55804D8__CTOR_OFFSET UNITYSDK_OFFSET(0x128D0890)
#define CLASS_2_523C55AEA55804D8___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x128D3950)

inline static constexpr unsigned int Class_2_523C55AEA55804D8_TypeDefinitionIndex = 52606;

class Class_2_523C55AEA55804D8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_25()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x22660);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x8A80);
	}
	// static const ::System::Single Field_2_16; // 0x0
	::Class_3_2B2F6402EA3EAA0F* Field_2_1; // 0x18
	::System::Action* Field_2_3; // 0x20
	::RPG::GameCore::GameEntity* Field_2_14; // 0x28
	::System::Action* Field_2_2; // 0x30
	::UnityEngine::Collider* Field_2_12; // 0x38
	::UnityEngine::Collider* Field_2_8; // 0x40
	::Class_1_51EED7CD291B614D* Field_2_23; // 0x48
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_19; // 0x50
	::RPG::GameCore::TransformComponent* Field_2_7; // 0x58
	::Class_1_56FF45D7B2C55655* Field_2_24; // 0x60
	::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>* Field_2_4; // 0x68
	::Class_0_16E4307DCC419505_511* Field_2_13; // 0x70
	::System::Int32 Field_2_15; // 0x78
	::System::Boolean Field_2_20; // 0x7C
	::System::Boolean Field_2_5; // 0x7D
	::System::Int32 Field_2_18; // 0x80
	::System::Int32 Field_2_9; // 0x84
	::UnityEngine::Vector3 Field_2_22; // 0x88
	::System::Boolean Field_2_17; // 0x94
	::System::Boolean Field_2_21; // 0x95
	::System::Boolean Field_2_6; // 0x96
	::UnityEngine::RaycastHit Field_2_11; // 0x98
	::UnityEngine::Vector3 Field_2_10; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_387F7E46E5E4387A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_387F7E46E5E4387A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9046EE9CC7F055C3(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_9046EE9CC7F055C3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3B4FCCB1316C6ED8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_3B4FCCB1316C6ED8_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A9BDB056AF13046(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_3A9BDB056AF13046_OFFSET))(this, a1);
	}

	::System::Void Method_2_CAE55D2F30F9F997(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CAE55D2F30F9F997_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EBA51A89D5A0DB5(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_1EBA51A89D5A0DB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0A2DE8417347362(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C0A2DE8417347362_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_7FCED9DBE84C0CF1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_7FCED9DBE84C0CF1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Boolean Method_2_2ABF98E64A5AC026(::UnityEngine::Transform* a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_2ABF98E64A5AC026_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_299EFA4949973FDA(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_299EFA4949973FDA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_3CAC93BF77250DAD_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::RaycastHit Method_2_1FFE4260A7179061()
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_1FFE4260A7179061_OFFSET))(this);
	}

	::System::Single Method_2_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_124E7DAB85EAFECD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
