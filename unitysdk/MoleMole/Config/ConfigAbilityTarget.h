#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10932026694B739C.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5_3.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_Struct_2_9BE0823C1225EE82.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_Struct_2_AB79962F241E0778.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_Struct_2_D9676FC67296675D.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_0CAA490423B456C6_OFFSET UNITYSDK_OFFSET(0x16C38F10)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_102D59BC143235DA_OFFSET UNITYSDK_OFFSET(0x16C398F0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_20599A32E5B0202C_OFFSET UNITYSDK_OFFSET(0x16C3A950)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_2A3DECB3A1DFC663_OFFSET UNITYSDK_OFFSET(0x16C3AC50)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16C398A0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_473360D382EBE9C6_OFFSET UNITYSDK_OFFSET(0x16C3A880)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_4A2C8AEE9BCA2A94_OFFSET UNITYSDK_OFFSET(0x16C3A720)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_5B9D1016DF183D97_OFFSET UNITYSDK_OFFSET(0x16C3A7D0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_65FECDA418990652_OFFSET UNITYSDK_OFFSET(0x16C3A3D0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_1_OFFSET UNITYSDK_OFFSET(0x16C3B3F0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_OFFSET UNITYSDK_OFFSET(0x16C3AAC0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_BD2FE8436FCDD8B2_OFFSET UNITYSDK_OFFSET(0x16C39700)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_D83985000E1AD3F1_OFFSET UNITYSDK_OFFSET(0x16C3AF20)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_1_OFFSET UNITYSDK_OFFSET(0x16C3A670)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_OFFSET UNITYSDK_OFFSET(0x16C3A320)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FA454CA5CCEB6ABA_OFFSET UNITYSDK_OFFSET(0x16C3A020)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FCABC4212A3F7F6F_OFFSET UNITYSDK_OFFSET(0x16C3B0E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C3A010)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3A000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_TypeDefinitionIndex = 76594;

	class ConfigAbilityTarget : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_9BE0823C1225EE82* StaticGet_entityFeatureTargetWrapSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_9BE0823C1225EE82*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x487F0);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_D9676FC67296675D* StaticGet_entitySortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_D9676FC67296675D*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x48810);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_AB79962F241E0778* StaticGet_entityFeatureTargetSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_AB79962F241E0778*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x48830);
		}
		::MoleMole::Config::AbilityTargetting CustomTargetting; // 0x10
		::System::String* NodePoint; // 0x18
		::System::String* SavePoint; // 0x20
		::MoleMole::Config::ConfigEntityFitlerGroup* filterGroup; // 0x28
		::Enum_3_10932026694B739C SortingType; // 0x30
		::Enum_3_99176E6BE04C36F5_3 Order; // 0x34
		::System::Boolean IgnoreFilterCasterPeerID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CCTOR_OFFSET))();
		}

		::MoleMole::Battle::Entity* Method_1_0CAA490423B456C6(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_0CAA490423B456C6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_1_BD2FE8436FCDD8B2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity*& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_BD2FE8436FCDD8B2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_1_FA454CA5CCEB6ABA(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FA454CA5CCEB6ABA_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_1_F179115F8A73AE42(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_F179115F8A73AE42_1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 Method_1_5B9D1016DF183D97(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_5B9D1016DF183D97_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_4A2C8AEE9BCA2A94(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_4A2C8AEE9BCA2A94_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_473360D382EBE9C6(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_473360D382EBE9C6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_20599A32E5B0202C(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_20599A32E5B0202C_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_8677661FEF71549A(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_1_102D59BC143235DA(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_102D59BC143235DA_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_1_65FECDA418990652(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_65FECDA418990652_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_1_2A3DECB3A1DFC663(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_2A3DECB3A1DFC663_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Int32 Method_1_D83985000E1AD3F1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_D83985000E1AD3F1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_1_FCABC4212A3F7F6F(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FCABC4212A3F7F6F_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_1_8677661FEF71549A_1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
