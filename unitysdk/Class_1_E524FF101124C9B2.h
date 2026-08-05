#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FanCollisionWithHeightDetect_FanFollowAtkDirType.h"
#include "unitysdk/Struct_2_028911ED0AD7AF8F.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_560B23058CA4940C;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class TextureDetect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E524FF101124C9B2_METHOD_1_08549F7923357DB3_OFFSET UNITYSDK_OFFSET(0x15010530)
#define CLASS_1_E524FF101124C9B2_METHOD_1_0EB8E43B7793F08E_OFFSET UNITYSDK_OFFSET(0x1500BF70)
#define CLASS_1_E524FF101124C9B2_METHOD_1_10E3ED4D203A0404_OFFSET UNITYSDK_OFFSET(0x1500C180)
#define CLASS_1_E524FF101124C9B2_METHOD_1_151C711EC354324B_OFFSET UNITYSDK_OFFSET(0x14FFEF00)
#define CLASS_1_E524FF101124C9B2_METHOD_1_254957EDCEF51AC4_OFFSET UNITYSDK_OFFSET(0x15009780)
#define CLASS_1_E524FF101124C9B2_METHOD_1_257AF348C0F4A4CA_OFFSET UNITYSDK_OFFSET(0x1500F460)
#define CLASS_1_E524FF101124C9B2_METHOD_1_2AB96FBF26B5066A_OFFSET UNITYSDK_OFFSET(0x15014420)
#define CLASS_1_E524FF101124C9B2_METHOD_1_2C440F1CEE70D24E_OFFSET UNITYSDK_OFFSET(0x15017C50)
#define CLASS_1_E524FF101124C9B2_METHOD_1_2CF8C8774991D4D4_OFFSET UNITYSDK_OFFSET(0x14FFE990)
#define CLASS_1_E524FF101124C9B2_METHOD_1_41C982F53697A5C6_OFFSET UNITYSDK_OFFSET(0x15015600)
#define CLASS_1_E524FF101124C9B2_METHOD_1_4859FA86C39F0098_OFFSET UNITYSDK_OFFSET(0x15000E30)
#define CLASS_1_E524FF101124C9B2_METHOD_1_4BB589531F3778A7_OFFSET UNITYSDK_OFFSET(0x15000C20)
#define CLASS_1_E524FF101124C9B2_METHOD_1_53D1F825E914A4D8_OFFSET UNITYSDK_OFFSET(0x15011ED0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_54B1ECEB539472F9_OFFSET UNITYSDK_OFFSET(0x14FFEF50)
#define CLASS_1_E524FF101124C9B2_METHOD_1_555CA97069F4F517_OFFSET UNITYSDK_OFFSET(0x15008800)
#define CLASS_1_E524FF101124C9B2_METHOD_1_57481E474C074183_OFFSET UNITYSDK_OFFSET(0x15017CD0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_586CFEDF88A83BC9_OFFSET UNITYSDK_OFFSET(0x15016130)
#define CLASS_1_E524FF101124C9B2_METHOD_1_5C1BDA46BFB84269_OFFSET UNITYSDK_OFFSET(0x14FFD460)
#define CLASS_1_E524FF101124C9B2_METHOD_1_5CF2A6FB706FED52_OFFSET UNITYSDK_OFFSET(0x15000A60)
#define CLASS_1_E524FF101124C9B2_METHOD_1_6ABCFA6ADBC3D320_OFFSET UNITYSDK_OFFSET(0x150054F0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_6DEF5FCBFFE10441_OFFSET UNITYSDK_OFFSET(0x150079F0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_710E26013552EEF2_OFFSET UNITYSDK_OFFSET(0x150022F0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_8DECE544AE329E5A_OFFSET UNITYSDK_OFFSET(0x15009210)
#define CLASS_1_E524FF101124C9B2_METHOD_1_99CEFE10A138BE7C_OFFSET UNITYSDK_OFFSET(0x15005960)
#define CLASS_1_E524FF101124C9B2_METHOD_1_9C1350038F04EDF4_OFFSET UNITYSDK_OFFSET(0x15004830)
#define CLASS_1_E524FF101124C9B2_METHOD_1_A337260BB4580955_OFFSET UNITYSDK_OFFSET(0x1500C430)
#define CLASS_1_E524FF101124C9B2_METHOD_1_A6402E8D5347E1F6_OFFSET UNITYSDK_OFFSET(0x150046A0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_AAD517F94022815C_OFFSET UNITYSDK_OFFSET(0x15018390)
#define CLASS_1_E524FF101124C9B2_METHOD_1_ACFCE4A1FE2FED82_OFFSET UNITYSDK_OFFSET(0x15012820)
#define CLASS_1_E524FF101124C9B2_METHOD_1_B18B327C9C37DF9D_1_OFFSET UNITYSDK_OFFSET(0x150050B0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_B18B327C9C37DF9D_OFFSET UNITYSDK_OFFSET(0x150051C0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_B4B2D012FE378634_OFFSET UNITYSDK_OFFSET(0x15009700)
#define CLASS_1_E524FF101124C9B2_METHOD_1_BC9000A7815E2A86_OFFSET UNITYSDK_OFFSET(0x15004D80)
#define CLASS_1_E524FF101124C9B2_METHOD_1_BD6C4EE29FBD5714_OFFSET UNITYSDK_OFFSET(0x15006070)
#define CLASS_1_E524FF101124C9B2_METHOD_1_C535B26C968CA1C9_OFFSET UNITYSDK_OFFSET(0x14FFD710)
#define CLASS_1_E524FF101124C9B2_METHOD_1_CC984D88EAB7FF17_OFFSET UNITYSDK_OFFSET(0x15005850)
#define CLASS_1_E524FF101124C9B2_METHOD_1_D1A7E52CF557716B_OFFSET UNITYSDK_OFFSET(0x15012370)
#define CLASS_1_E524FF101124C9B2_METHOD_1_D23AFAE4012D224C_OFFSET UNITYSDK_OFFSET(0x14FFF1D0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_D9ECE7112AE540D0_OFFSET UNITYSDK_OFFSET(0x1500A130)
#define CLASS_1_E524FF101124C9B2_METHOD_1_DB5E751672762202_OFFSET UNITYSDK_OFFSET(0x15011A80)
#define CLASS_1_E524FF101124C9B2_METHOD_1_DBD26FCE5BBD1D6D_OFFSET UNITYSDK_OFFSET(0x15016FA0)
#define CLASS_1_E524FF101124C9B2_METHOD_1_E60CE2D166241F3E_OFFSET UNITYSDK_OFFSET(0x15002270)
#define CLASS_1_E524FF101124C9B2_METHOD_1_F382768F8DE33907_OFFSET UNITYSDK_OFFSET(0x15005300)
#define CLASS_1_E524FF101124C9B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FFD3F0)

inline static constexpr unsigned int Class_1_E524FF101124C9B2_TypeDefinitionIndex = 75708;

class Class_1_E524FF101124C9B2 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x48330);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x48338);
	}
	static ::UnityEngine::Bounds* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	static ::UnityEngine::Bounds* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x10BD8);
	}
	static ::UnityEngine::Bounds* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x10BF0);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_TypeDefinitionIndex)->GetStaticField(0x10C08);
	}
	// static const ::System::Int32 Field_1_6 = 0x40; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_5C1BDA46BFB84269(::UnityEngine::Vector3 a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_5C1BDA46BFB84269_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C535B26C968CA1C9(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_C535B26C968CA1C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2CF8C8774991D4D4(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a7, ::UnityEngine::RaycastHit& a8)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_2CF8C8774991D4D4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_54B1ECEB539472F9(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::UnityEngine::GameObject* a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::GameObject*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_54B1ECEB539472F9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D23AFAE4012D224C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::ConfigEntityAttackPattern* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_D23AFAE4012D224C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_5CF2A6FB706FED52(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_5CF2A6FB706FED52_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_4BB589531F3778A7(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_4BB589531F3778A7_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_4859FA86C39F0098(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::Struct_2_028911ED0AD7AF8F a8, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a9, ::Struct_2_057163E12A7F6FF0 a10, ::System::Boolean a11, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a12)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_4859FA86C39F0098_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_710E26013552EEF2(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::System::String* a7, ::System::String* a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_710E26013552EEF2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_1_6ABCFA6ADBC3D320(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_6ABCFA6ADBC3D320_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_99CEFE10A138BE7C(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType a7, ::UnityEngine::LayerMask a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_99CEFE10A138BE7C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::UnityEngine::Vector3 Method_1_F382768F8DE33907(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_F382768F8DE33907_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_BC9000A7815E2A86(::Il2CppArray<::System::Int32>*& a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_BC9000A7815E2A86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_555CA97069F4F517(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& a6)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_555CA97069F4F517_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_8DECE544AE329E5A(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_8DECE544AE329E5A_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::UnityEngine::RaycastHit>* Method_1_B4B2D012FE378634()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_B4B2D012FE378634_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_254957EDCEF51AC4(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::Struct_2_028911ED0AD7AF8F a6, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a7, ::Struct_2_057163E12A7F6FF0 a8, ::System::Boolean a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_254957EDCEF51AC4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_D9ECE7112AE540D0(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::LayerMask a7, ::System::String* a8, ::System::String* a9, ::MoleMole::Config::ConfigEntityAttackPattern* a10, ::Struct_2_028911ED0AD7AF8F a11, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a12, ::System::Boolean a13, ::UnityEngine::Quaternion a14, ::Struct_2_057163E12A7F6FF0 a15, ::System::Boolean a16, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a17)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_D9ECE7112AE540D0_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_A337260BB4580955(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::LayerMask a7, ::MoleMole::Config::ConfigEntityAttackPattern* a8, ::Struct_2_028911ED0AD7AF8F a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10, ::System::Single a11, ::System::Boolean a12, ::UnityEngine::Quaternion a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a17)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Single, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_A337260BB4580955_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	static ::System::Boolean Method_1_257AF348C0F4A4CA(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Bounds& a5, ::Struct_2_057163E12A7F6FF0 a6)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_257AF348C0F4A4CA_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_BD6C4EE29FBD5714(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Single a5, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType a6, ::System::Single a7, ::UnityEngine::LayerMask a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::System::Boolean a12, ::UnityEngine::Quaternion a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a17)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_BD6C4EE29FBD5714_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	static ::System::Boolean Method_1_9C1350038F04EDF4(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Collider* a5, ::UnityEngine::Vector3& a6, ::Struct_2_057163E12A7F6FF0 a7)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_9C1350038F04EDF4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_DB5E751672762202(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& a7)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_DB5E751672762202_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_53D1F825E914A4D8(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_53D1F825E914A4D8_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_CC984D88EAB7FF17(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_CC984D88EAB7FF17_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_ACFCE4A1FE2FED82(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::System::String* a7, ::System::String* a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_ACFCE4A1FE2FED82_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_2AB96FBF26B5066A(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Single a4, ::System::Single a5, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType a6, ::System::Single a7, ::UnityEngine::LayerMask a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::System::Boolean a12, ::UnityEngine::Quaternion a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a17)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_2AB96FBF26B5066A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	static ::System::Boolean Method_1_0EB8E43B7793F08E(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1, ::MoleMole::Battle::Entity* a2, ::UnityEngine::Collider* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_0EB8E43B7793F08E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_41C982F53697A5C6(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::LayerMask a7, ::MoleMole::Config::ConfigEntityAttackPattern* a8, ::Struct_2_028911ED0AD7AF8F a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10, ::System::Boolean a11, ::UnityEngine::Quaternion a12, ::Struct_2_057163E12A7F6FF0 a13)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_41C982F53697A5C6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Boolean Method_1_586CFEDF88A83BC9(::MoleMole::Config::TextureDetect* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::TextureDetect*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_586CFEDF88A83BC9_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_6DEF5FCBFFE10441(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::MoleMole::Config::ConfigEntityAttackPattern* a7, ::Struct_2_028911ED0AD7AF8F a8, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a9, ::Struct_2_057163E12A7F6FF0 a10)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_6DEF5FCBFFE10441_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_B18B327C9C37DF9D(::Il2CppArray<::System::Int32>*& a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_B18B327C9C37DF9D_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::UnityEngine::Collider*>* Method_1_2C440F1CEE70D24E()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_2C440F1CEE70D24E_OFFSET))();
	}

	static ::System::Boolean Method_1_151C711EC354324B(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_151C711EC354324B_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_57481E474C074183(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Single a4, ::System::Single a5, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType a6, ::System::Single a7, ::UnityEngine::LayerMask a8, ::MoleMole::Config::ConfigEntityAttackPattern* a9, ::Struct_2_028911ED0AD7AF8F a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::System::Single a12, ::System::Boolean a13, ::UnityEngine::Quaternion a14, ::Struct_2_057163E12A7F6FF0 a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a18)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Struct_2_028911ED0AD7AF8F, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Single, ::System::Boolean, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_57481E474C074183_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	static ::MoleMole::Battle::Entity* Method_1_E60CE2D166241F3E(::UnityEngine::Collider* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_E60CE2D166241F3E_OFFSET))(a1);
	}

	static ::System::Void Method_1_D1A7E52CF557716B(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_D1A7E52CF557716B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_A6402E8D5347E1F6(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_A6402E8D5347E1F6_OFFSET))(a1);
	}

	static ::System::Void Method_1_DBD26FCE5BBD1D6D(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Bounds& a6)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_DBD26FCE5BBD1D6D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_10E3ED4D203A0404(::UnityEngine::Vector3 a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_10E3ED4D203A0404_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_08549F7923357DB3(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Bounds& a5, ::Struct_2_057163E12A7F6FF0 a6)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_08549F7923357DB3_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_AAD517F94022815C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>* a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_AAD517F94022815C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_B18B327C9C37DF9D_1(::Il2CppArray<::System::Int32>*& a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_METHOD_1_B18B327C9C37DF9D_1_OFFSET))(a1, a2);
	}
};
