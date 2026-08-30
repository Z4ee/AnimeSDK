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

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_1ACFAD96F3461A05_OFFSET UNITYSDK_OFFSET(0x193FF320)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x19400E30)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_1_OFFSET UNITYSDK_OFFSET(0x193FFB20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_OFFSET UNITYSDK_OFFSET(0x193FFA00)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3821EE6201CF74C2_OFFSET UNITYSDK_OFFSET(0x193FFC40)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x19403370)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_4E5FD597422054EE_OFFSET UNITYSDK_OFFSET(0x193FFF80)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_5405AE0AEFFFA4F7_OFFSET UNITYSDK_OFFSET(0x193FFCE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6240AB5B9521A60B_OFFSET UNITYSDK_OFFSET(0x19400290)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET UNITYSDK_OFFSET(0x19403B60)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_72B898C7F0E60BF8_OFFSET UNITYSDK_OFFSET(0x193FFE20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x193FE7D0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_77A0990B52E748BC_OFFSET UNITYSDK_OFFSET(0x19403BF0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_1_OFFSET UNITYSDK_OFFSET(0x194006C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_OFFSET UNITYSDK_OFFSET(0x19400580)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19400C20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_99FE0D74C5C97643_OFFSET UNITYSDK_OFFSET(0x193FE9A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET UNITYSDK_OFFSET(0x193FFEB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_1_OFFSET UNITYSDK_OFFSET(0x19400770)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_OFFSET UNITYSDK_OFFSET(0x19400630)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_1_OFFSET UNITYSDK_OFFSET(0x19400900)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x19401BA0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B67B01502F711D79_OFFSET UNITYSDK_OFFSET(0x193FEF20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x19403B90)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19400800)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DC2E80477583A303_OFFSET UNITYSDK_OFFSET(0x19400860)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DD01EB4F75B91AF5_OFFSET UNITYSDK_OFFSET(0x19400D10)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x19402D50)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x193FEAA0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FC703982A6F56906_OFFSET UNITYSDK_OFFSET(0x193FEB10)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x194039A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x193FE230)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19403C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_TypeDefinitionIndex = 57261;

	class AdventureMovementManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_IDCLCAFPDLN()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x56090);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>** StaticGet_FAAGLFMDABJ()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x56098);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_OKEHGGOFIEO()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560A0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>** StaticGet_JHIMGMGEHHA()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560A8);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_HECGDILNKAL()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560B0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_OKFDCIGNHDN()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560B8);
		}
		static ::Class_2_AC9482A075E204C7** StaticGet_PMKJHEJEMCN()
		{
			return (::Class_2_AC9482A075E204C7**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_DAOHKGFNDIG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560C8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_ADLIAAAPCBE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_HIMBONECCJK()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560D8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_CIANLIDPIDL()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560E0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_OMOAPGNFAEE()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560E8);
		}
		static ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>** StaticGet_GBMOBDLENJA()
		{
			return (::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560F0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_IMHCGKGKDPD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x560F8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_FKKIMNDJMNG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x56100);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_CHBMBIHEMAM()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x56108);
		}
		static ::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>* StaticGet_LJONLPEEFML()
		{
			return (::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A50);
		}
		static ::UnityEngine::Vector3* StaticGet_AIABECPNABD()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A58);
		}
		static ::System::Int32* StaticGet_NOIEMNLMACN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A64);
		}
		static ::System::Boolean* StaticGet_KEHLLDBEEPD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A68);
		}
		static ::System::Boolean* StaticGet_ANFMAGBEJAC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A69);
		}
		static ::System::Boolean* StaticGet_PKFKODACMID()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x11A6A);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void OnGamePlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET))();
		}

		static ::System::Void Method_1_763B70E1B527E566()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_763B70E1B527E566_OFFSET))();
		}

		static ::System::Void Method_1_99FE0D74C5C97643(::RPG::GameCore::EAdventureMovementUnavailableReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EAdventureMovementUnavailableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_99FE0D74C5C97643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET))();
		}

		static ::System::Void Method_1_FC703982A6F56906(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FC703982A6F56906_OFFSET))(a1);
		}

		static ::System::Void Method_1_B67B01502F711D79(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B67B01502F711D79_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_1ACFAD96F3461A05(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_1ACFAD96F3461A05_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean Method_1_32E9F1B64188C279(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_32E9F1B64188C279_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_3821EE6201CF74C2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3821EE6201CF74C2_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_5405AE0AEFFFA4F7(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_5405AE0AEFFFA4F7_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_72B898C7F0E60BF8(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_72B898C7F0E60BF8_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_A6903E39E024EAC0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET))(a1);
		}

		static ::System::Void Method_1_4E5FD597422054EE(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_4E5FD597422054EE_OFFSET))(a1);
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

		static ::System::Void Method_1_2B85C1969225764F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_2B85C1969225764F_OFFSET))();
		}

		static ::System::Void Method_1_B06F516E4459C742()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_OFFSET))();
		}

		static ::System::Void Method_1_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3D2B77EBCAE390AB_OFFSET))();
		}

		static ::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FD1A8012013ED9C5_OFFSET))(a1);
		}

		static ::System::Void Method_1_E6FA84ECDEF620CE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E6FA84ECDEF620CE_OFFSET))();
		}

		static ::System::Void Method_1_B06F516E4459C742_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_1_OFFSET))();
		}

		static ::Class_2_AC9482A075E204C7* Method_1_665AEDC8E03BB561()
		{
			return ((::Class_2_AC9482A075E204C7*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET))();
		}

		static ::System::Boolean Method_1_CE34EA208837238D_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>* Method_1_77A0990B52E748BC()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_77A0990B52E748BC_OFFSET))();
		}
	};
}
