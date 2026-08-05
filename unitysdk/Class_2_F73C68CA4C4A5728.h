#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/Class_2_F73C68CA4C4A5728_Enum_3_C665C8CA2E75BFBF.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_2_F73C68CA4C4A5728_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12962CF0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_07BE6DB386D86761_OFFSET UNITYSDK_OFFSET(0x12969B40)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_0BB95D89890D00E4_OFFSET UNITYSDK_OFFSET(0x129632A0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_0DEC02CB1172E42C_OFFSET UNITYSDK_OFFSET(0x12963F60)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x12962E50)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_3CA2739965981CB2_OFFSET UNITYSDK_OFFSET(0x12969C20)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_3F1078E8603B0A91_OFFSET UNITYSDK_OFFSET(0x12968020)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_423EC27F923A7F57_OFFSET UNITYSDK_OFFSET(0x129642D0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_43369337983884E9_OFFSET UNITYSDK_OFFSET(0x12968CC0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_4944C6675269E060_OFFSET UNITYSDK_OFFSET(0x1296A340)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_4FFF451DE39578CA_OFFSET UNITYSDK_OFFSET(0x129653E0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_5478BCAB404A3923_OFFSET UNITYSDK_OFFSET(0x1296AAF0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_68DCC48D6B19EA5E_OFFSET UNITYSDK_OFFSET(0x12964B10)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_6C2204BE892CD710_OFFSET UNITYSDK_OFFSET(0x12967930)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12962B80)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_B0B485D1DCB7F45F_OFFSET UNITYSDK_OFFSET(0x1296AED0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_C6A2B58E751532EE_OFFSET UNITYSDK_OFFSET(0x12965780)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129667E0)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x12963F40)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_F33763D8D1BDCA87_OFFSET UNITYSDK_OFFSET(0x12966870)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_F7973FD50E901F96_OFFSET UNITYSDK_OFFSET(0x12963150)
#define CLASS_2_F73C68CA4C4A5728_METHOD_2_FBEDDA58456BF0D6_OFFSET UNITYSDK_OFFSET(0x12965E40)
#define CLASS_2_F73C68CA4C4A5728__CCTOR_OFFSET UNITYSDK_OFFSET(0x12963ED0)
#define CLASS_2_F73C68CA4C4A5728__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12962BF0)
#define CLASS_2_F73C68CA4C4A5728__CTOR_OFFSET UNITYSDK_OFFSET(0x12962A90)

inline static constexpr unsigned int Class_2_F73C68CA4C4A5728_TypeDefinitionIndex = 59655;

class Class_2_F73C68CA4C4A5728 : public ::Class_1_194AF035DF2F7DB0
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F73C68CA4C4A5728_TypeDefinitionIndex)->GetStaticField(0x4DF60);
	}
	static ::UnityEngine::SphereCollider** StaticGet_Field_2_9()
	{
		return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F73C68CA4C4A5728_TypeDefinitionIndex)->GetStaticField(0x4DF68);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F73C68CA4C4A5728_TypeDefinitionIndex)->GetStaticField(0x4DF70);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_2_8()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F73C68CA4C4A5728_TypeDefinitionIndex)->GetStaticField(0x4DF78);
	}
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_11; // 0x0
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_10; // 0x18
	::Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A* Field_2_0; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_4; // 0x28
	::System::Single Field_2_14; // 0x30
	::System::Single Field_2_15; // 0x34
	::UnityEngine::Vector3 Field_2_2; // 0x38
	::System::Single Field_2_13; // 0x44
	::Class_2_F73C68CA4C4A5728_Enum_3_C665C8CA2E75BFBF Field_2_1; // 0x48

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F7973FD50E901F96(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_F7973FD50E901F96_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_2_0DEC02CB1172E42C(::Cinemachine::CameraState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_0DEC02CB1172E42C_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_68DCC48D6B19EA5E(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a4)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_68DCC48D6B19EA5E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_28EB11670A8E5A86_OFFSET))();
	}

	::System::Single Method_2_4FFF451DE39578CA(::UnityEngine::Ray a1, ::UnityEngine::Plane a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Plane, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_4FFF451DE39578CA_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_423EC27F923A7F57(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a6, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_423EC27F923A7F57_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_2_C6A2B58E751532EE(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a7, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a8)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_C6A2B58E751532EE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_2_FBEDDA58456BF0D6(::UnityEngine::Ray a1, ::System::Single a2, ::UnityEngine::Bounds a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_FBEDDA58456BF0D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F33763D8D1BDCA87(::UnityEngine::Vector3 a1, ::Cinemachine::CameraState& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_F33763D8D1BDCA87_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6C2204BE892CD710(::Cinemachine::CameraState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_6C2204BE892CD710_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_3F1078E8603B0A91(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Plane a5, ::System::Single a6, ::System::Int32 a7, ::Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A*& a8)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::System::Single, ::System::Int32, ::Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A*&))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_3F1078E8603B0A91_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_07BE6DB386D86761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_07BE6DB386D86761_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_3CA2739965981CB2(::UnityEngine::Ray a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_3CA2739965981CB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_0BB95D89890D00E4(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_0BB95D89890D00E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_43369337983884E9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_43369337983884E9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_5478BCAB404A3923(::UnityEngine::RaycastHit& a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_5478BCAB404A3923_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_B0B485D1DCB7F45F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_B0B485D1DCB7F45F_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_4944C6675269E060(::Cinemachine::CameraState& a1, ::Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A*& a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::Class_2_F73C68CA4C4A5728_Class_1_2E0D42E3401BC97A*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F73C68CA4C4A5728_METHOD_2_4944C6675269E060_OFFSET))(this, a1, a2, a3);
	}
};
