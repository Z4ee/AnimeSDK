#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/Class_2_83891D8D0E76B890_Enum_3_C665C8CA2E75BFBF.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_2_83891D8D0E76B890_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FC9AE0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_07BE6DB386D86761_OFFSET UNITYSDK_OFFSET(0x16FD1DD0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_0BB95D89890D00E4_OFFSET UNITYSDK_OFFSET(0x16FCA090)
#define CLASS_2_83891D8D0E76B890_METHOD_2_0E37C47AFD35ABF5_OFFSET UNITYSDK_OFFSET(0x16FCAD40)
#define CLASS_2_83891D8D0E76B890_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16FC9C40)
#define CLASS_2_83891D8D0E76B890_METHOD_2_3CA2739965981CB2_OFFSET UNITYSDK_OFFSET(0x16FD0EF0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_423EC27F923A7F57_OFFSET UNITYSDK_OFFSET(0x16FCB0E0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_43369337983884E9_OFFSET UNITYSDK_OFFSET(0x16FCE890)
#define CLASS_2_83891D8D0E76B890_METHOD_2_4944C6675269E060_OFFSET UNITYSDK_OFFSET(0x16FCB920)
#define CLASS_2_83891D8D0E76B890_METHOD_2_6266594FEEF9D261_OFFSET UNITYSDK_OFFSET(0x16FCC110)
#define CLASS_2_83891D8D0E76B890_METHOD_2_68DCC48D6B19EA5E_OFFSET UNITYSDK_OFFSET(0x16FD0620)
#define CLASS_2_83891D8D0E76B890_METHOD_2_6C2204BE892CD710_OFFSET UNITYSDK_OFFSET(0x16FD1600)
#define CLASS_2_83891D8D0E76B890_METHOD_2_9127CCBB26230F68_OFFSET UNITYSDK_OFFSET(0x16FCC990)
#define CLASS_2_83891D8D0E76B890_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16FC9970)
#define CLASS_2_83891D8D0E76B890_METHOD_2_C6A2B58E751532EE_OFFSET UNITYSDK_OFFSET(0x16FD1EC0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_C9447CC4882E04B8_OFFSET UNITYSDK_OFFSET(0x16FD01E0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FD0150)
#define CLASS_2_83891D8D0E76B890_METHOD_2_D36B8C28205BF6E2_OFFSET UNITYSDK_OFFSET(0x16FCD6E0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x16FD0600)
#define CLASS_2_83891D8D0E76B890_METHOD_2_E8A52E4E98BD6652_OFFSET UNITYSDK_OFFSET(0x16FCC5A0)
#define CLASS_2_83891D8D0E76B890_METHOD_2_F7973FD50E901F96_OFFSET UNITYSDK_OFFSET(0x16FC9F40)
#define CLASS_2_83891D8D0E76B890_METHOD_2_FBEDDA58456BF0D6_OFFSET UNITYSDK_OFFSET(0x16FCF790)
#define CLASS_2_83891D8D0E76B890__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FCACD0)
#define CLASS_2_83891D8D0E76B890__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16FC99E0)
#define CLASS_2_83891D8D0E76B890__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC9880)

inline static constexpr unsigned int Class_2_83891D8D0E76B890_TypeDefinitionIndex = 56232;

class Class_2_83891D8D0E76B890 : public ::Class_1_194AF035DF2F7DB0
{
public:
	static ::UnityEngine::GameObject** StaticGet_Field_2_10()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_2_83891D8D0E76B890_TypeDefinitionIndex)->GetStaticField(0x333F0);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_83891D8D0E76B890_TypeDefinitionIndex)->GetStaticField(0x333F8);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_83891D8D0E76B890_TypeDefinitionIndex)->GetStaticField(0x33400);
	}
	static ::UnityEngine::SphereCollider** StaticGet_Field_2_9()
	{
		return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_2_83891D8D0E76B890_TypeDefinitionIndex)->GetStaticField(0x33408);
	}
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_6; // 0x18
	::Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A* Field_2_2; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_8; // 0x28
	::System::Single Field_2_13; // 0x30
	::System::Single Field_2_12; // 0x34
	::System::Single Field_2_11; // 0x38
	::Class_2_83891D8D0E76B890_Enum_3_C665C8CA2E75BFBF Field_2_1; // 0x3C
	::UnityEngine::Vector3 Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F7973FD50E901F96(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_F7973FD50E901F96_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0E37C47AFD35ABF5(::Cinemachine::CameraState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_0E37C47AFD35ABF5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_4944C6675269E060(::Cinemachine::CameraState& a1, ::Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A*& a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_4944C6675269E060_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_0BB95D89890D00E4(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_0BB95D89890D00E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_43369337983884E9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_43369337983884E9_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_28EB11670A8E5A86_OFFSET))();
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D36B8C28205BF6E2(::UnityEngine::Vector3 a1, ::Cinemachine::CameraState& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_D36B8C28205BF6E2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_FBEDDA58456BF0D6(::UnityEngine::Ray a1, ::System::Single a2, ::UnityEngine::Bounds a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_FBEDDA58456BF0D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_E8A52E4E98BD6652(::UnityEngine::RaycastHit& a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_E8A52E4E98BD6652_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_6266594FEEF9D261(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_6266594FEEF9D261_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_C9447CC4882E04B8(::UnityEngine::Ray a1, ::UnityEngine::Plane a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Plane, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_C9447CC4882E04B8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	static ::System::Int32 Method_2_68DCC48D6B19EA5E(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a4)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_68DCC48D6B19EA5E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_3CA2739965981CB2(::UnityEngine::Ray a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_3CA2739965981CB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_6C2204BE892CD710(::Cinemachine::CameraState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_6C2204BE892CD710_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_9127CCBB26230F68(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Plane a5, ::System::Single a6, ::System::Int32 a7, ::Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A*& a8)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::System::Single, ::System::Int32, ::Class_2_83891D8D0E76B890_Class_1_2E0D42E3401BC97A*&))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_9127CCBB26230F68_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_2_423EC27F923A7F57(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a6, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_423EC27F923A7F57_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_07BE6DB386D86761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_07BE6DB386D86761_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_C6A2B58E751532EE(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a7, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a8)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_83891D8D0E76B890_METHOD_2_C6A2B58E751532EE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
