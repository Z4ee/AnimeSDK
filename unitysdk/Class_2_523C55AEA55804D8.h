#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_439;
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

#define CLASS_2_523C55AEA55804D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11559A10)
#define CLASS_2_523C55AEA55804D8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1155AE50)
#define CLASS_2_523C55AEA55804D8_METHOD_2_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x1155C610)
#define CLASS_2_523C55AEA55804D8_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1155C6F0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1EBA51A89D5A0DB5_OFFSET UNITYSDK_OFFSET(0x11559AE0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1FFE4260A7179061_OFFSET UNITYSDK_OFFSET(0x1155C830)
#define CLASS_2_523C55AEA55804D8_METHOD_2_299EFA4949973FDA_OFFSET UNITYSDK_OFFSET(0x1155A9E0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_2ABF98E64A5AC026_OFFSET UNITYSDK_OFFSET(0x1155BB90)
#define CLASS_2_523C55AEA55804D8_METHOD_2_387F7E46E5E4387A_OFFSET UNITYSDK_OFFSET(0x1155A760)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3A9BDB056AF13046_OFFSET UNITYSDK_OFFSET(0x1155AED0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3B4FCCB1316C6ED8_OFFSET UNITYSDK_OFFSET(0x1155A520)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x1155C810)
#define CLASS_2_523C55AEA55804D8_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x1155C560)
#define CLASS_2_523C55AEA55804D8_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1155B160)
#define CLASS_2_523C55AEA55804D8_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x1155A890)
#define CLASS_2_523C55AEA55804D8_METHOD_2_7FCED9DBE84C0CF1_OFFSET UNITYSDK_OFFSET(0x1155B370)
#define CLASS_2_523C55AEA55804D8_METHOD_2_9046EE9CC7F055C3_OFFSET UNITYSDK_OFFSET(0x1155A800)
#define CLASS_2_523C55AEA55804D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1155C820)
#define CLASS_2_523C55AEA55804D8_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x1155ADF0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C0A2DE8417347362_OFFSET UNITYSDK_OFFSET(0x11559FA0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1155C870)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x1155BA90)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1155C8D0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1155C860)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1155B330)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1155B2F0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CAE55D2F30F9F997_OFFSET UNITYSDK_OFFSET(0x1155AFD0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1155C890)
#define CLASS_2_523C55AEA55804D8_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1155B1C0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11559940)
#define CLASS_2_523C55AEA55804D8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1155C880)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1155A330)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1155A6F0)
#define CLASS_2_523C55AEA55804D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1155C8E0)
#define CLASS_2_523C55AEA55804D8__CTOR_OFFSET UNITYSDK_OFFSET(0x115598B0)
#define CLASS_2_523C55AEA55804D8___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1155C910)

inline static constexpr unsigned int Class_2_523C55AEA55804D8_TypeDefinitionIndex = 45945;

class Class_2_523C55AEA55804D8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_25()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x415A0);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x11660);
	}
	// static const ::System::Single Field_2_16; // 0x0
	::Class_0_16E4307DCC419505_439* Field_2_13; // 0x18
	::Class_1_51EED7CD291B614D* Field_2_23; // 0x20
	::UnityEngine::Collider* Field_2_8; // 0x28
	::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>* Field_2_4; // 0x30
	::Class_1_56FF45D7B2C55655* Field_2_24; // 0x38
	::UnityEngine::Collider* Field_2_12; // 0x40
	::RPG::GameCore::TransformComponent* Field_2_7; // 0x48
	::RPG::GameCore::GameEntity* Field_2_14; // 0x50
	::System::Action* Field_2_2; // 0x58
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_19; // 0x60
	::Class_3_2B2F6402EA3EAA0F* Field_2_1; // 0x68
	::System::Action* Field_2_3; // 0x70
	::System::Boolean Field_2_21; // 0x78
	::System::Boolean Field_2_17; // 0x79
	::System::Boolean Field_2_20; // 0x7A
	::System::Boolean Field_2_5; // 0x7B
	::System::Int32 Field_2_9; // 0x7C
	::System::Boolean Field_2_6; // 0x80
	::UnityEngine::Vector3 Field_2_22; // 0x84
	::System::Int32 Field_2_18; // 0x90
	::System::Int32 Field_2_15; // 0x94
	::UnityEngine::Vector3 Field_2_10; // 0x98
	::UnityEngine::RaycastHit Field_2_11; // 0xA4

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
