#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EAdventureMovementUnavailableReason.h"
#include "unitysdk/Struct_2_8DF138C61E6ABA58.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_54715B955DC6C855;
class Class_2_AC9482A075E204C7;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureMovementManager_Class_1_1DE6262BF29C2AFD; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xB58DDC0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_0AD2B3346F3F350E_OFFSET UNITYSDK_OFFSET(0xB58A620)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_263AAA2415453CAC_OFFSET UNITYSDK_OFFSET(0xB58AF90)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0xB58B920)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_480E4C8C1228969A_1_OFFSET UNITYSDK_OFFSET(0xB58AD40)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_480E4C8C1228969A_OFFSET UNITYSDK_OFFSET(0xB58ACB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xB58D6F0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6240AB5B9521A60B_OFFSET UNITYSDK_OFFSET(0xB5617D0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET UNITYSDK_OFFSET(0xB58E520)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_8F1D5C21FEACF3AE_OFFSET UNITYSDK_OFFSET(0xB564A20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_1_OFFSET UNITYSDK_OFFSET(0xB58B2F0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_OFFSET UNITYSDK_OFFSET(0xB58B1B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_963D9E430FACEC42_OFFSET UNITYSDK_OFFSET(0xB58A2B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB58B830)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9C05B3DEF862D58A_OFFSET UNITYSDK_OFFSET(0xB58E460)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0xB58B530)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB58C510)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET UNITYSDK_OFFSET(0xB58B0E0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_1_OFFSET UNITYSDK_OFFSET(0xB58B3A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_OFFSET UNITYSDK_OFFSET(0xB58B260)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xB589B10)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_AB111DBB9FF42704_OFFSET UNITYSDK_OFFSET(0xB58B050)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_BBB53B8C71A70E0C_OFFSET UNITYSDK_OFFSET(0xB589CE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_C18271E4DF2E6BEC_OFFSET UNITYSDK_OFFSET(0xB589E50)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB5732C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB58B430)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DC2E80477583A303_OFFSET UNITYSDK_OFFSET(0xB58B490)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DD01EB4F75B91AF5_OFFSET UNITYSDK_OFFSET(0xB572E80)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E808462AF04235DD_OFFSET UNITYSDK_OFFSET(0xB58ADD0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xB589DE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB589590)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB58E550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_TypeDefinitionIndex = 52625;

	class AdventureMovementManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>** StaticGet_Field_1_10()
		{
			return (::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25330);
		}
		static ::Class_2_AC9482A075E204C7** StaticGet_Field_1_4()
		{
			return (::Class_2_AC9482A075E204C7**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25338);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_15()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25340);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_13()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25348);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_8()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25350);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_14()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25358);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_12()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25360);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_6()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25368);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_Field_1_5()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25370);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>** StaticGet_Field_1_20()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25378);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>** StaticGet_Field_1_9()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25380);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_11()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25388);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_17()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25390);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_16()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x25398);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_18()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x253A0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_Field_1_7()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x253A8);
		}
		static ::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>* StaticGet_Field_1_21()
		{
			return (::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C20);
		}
		static ::System::Int32* StaticGet_Field_1_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C28);
		}
		static ::System::Boolean* StaticGet_Field_1_19()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C2C);
		}
		static ::System::Boolean* StaticGet_Field_1_1()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C2D);
		}
		static ::System::Boolean* StaticGet_Field_1_0()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C2E);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_1_2()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x9C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void OnGamePlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET))();
		}

		static ::System::Void Method_1_A984848EA3E436DA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A984848EA3E436DA_OFFSET))();
		}

		static ::System::Void Method_1_BBB53B8C71A70E0C(::RPG::GameCore::EAdventureMovementUnavailableReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EAdventureMovementUnavailableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_BBB53B8C71A70E0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET))();
		}

		static ::System::Void Method_1_C18271E4DF2E6BEC(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_C18271E4DF2E6BEC_OFFSET))(a1);
		}

		static ::System::Void Method_1_963D9E430FACEC42(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_963D9E430FACEC42_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_0AD2B3346F3F350E(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_0AD2B3346F3F350E_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean Method_1_480E4C8C1228969A(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_480E4C8C1228969A_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_480E4C8C1228969A_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_480E4C8C1228969A_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_E808462AF04235DD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E808462AF04235DD_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_263AAA2415453CAC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_263AAA2415453CAC_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_AB111DBB9FF42704(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_AB111DBB9FF42704_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_A6903E39E024EAC0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET))(a1);
		}

		static ::System::Void Method_1_8F1D5C21FEACF3AE(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_8F1D5C21FEACF3AE_OFFSET))(a1);
		}

		static ::System::Void Method_1_6240AB5B9521A60B(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6240AB5B9521A60B_OFFSET))(a1);
		}

		static ::System::Void Method_1_9474076E37B9D517(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_OFFSET))(a1);
		}

		static ::System::Void Method_1_A8DED9C437215EC6(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_OFFSET))(a1);
		}

		static ::System::Void Method_1_9474076E37B9D517_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_1_OFFSET))(a1);
		}

		static ::System::Void Method_1_A8DED9C437215EC6_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_CE34EA208837238D()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_OFFSET))();
		}

		static ::System::Void Method_1_DC2E80477583A303(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DC2E80477583A303_OFFSET))(a1);
		}

		static ::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9681042564541CD6_OFFSET))();
		}

		static ::System::Void Method_1_DD01EB4F75B91AF5(::RPG::GameCore::AdventureCharacterController* a1, ::Struct_2_8DF138C61E6ABA58& a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*, ::Struct_2_8DF138C61E6ABA58&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DD01EB4F75B91AF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_446BE43D2AA5DB95()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_446BE43D2AA5DB95_OFFSET))();
		}

		static ::System::Void Method_1_9E38127F40B34F1F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9E38127F40B34F1F_OFFSET))();
		}

		static ::System::Void Method_1_0076C796B2045359()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_0076C796B2045359_OFFSET))();
		}

		static ::System::Void Method_1_9C05B3DEF862D58A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9C05B3DEF862D58A_OFFSET))(a1);
		}

		static ::System::Void Method_1_6055A93732CC885D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6055A93732CC885D_OFFSET))();
		}

		static ::System::Void Method_1_9D0688AE2E08E349()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9D0688AE2E08E349_OFFSET))();
		}

		static ::Class_2_AC9482A075E204C7* Method_1_665AEDC8E03BB561()
		{
			return ((::Class_2_AC9482A075E204C7*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET))();
		}

		static ::System::Boolean Method_1_CE34EA208837238D_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET))();
		}
	};
}
