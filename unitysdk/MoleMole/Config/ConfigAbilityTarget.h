#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10932026694B739C.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5_2.h"
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

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_0CAA490423B456C6_OFFSET UNITYSDK_OFFSET(0x162A3F90)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_20599A32E5B0202C_OFFSET UNITYSDK_OFFSET(0x162A5120)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_2C9AAEB4E287676D_OFFSET UNITYSDK_OFFSET(0x162A58B0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x162A4810)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_445F2DD6F75361B1_OFFSET UNITYSDK_OFFSET(0x162A4670)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_473360D382EBE9C6_OFFSET UNITYSDK_OFFSET(0x162A5050)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_4A2C8AEE9BCA2A94_OFFSET UNITYSDK_OFFSET(0x162A4FA0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_5B9D1016DF183D97_OFFSET UNITYSDK_OFFSET(0x162A5560)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_65FECDA418990652_OFFSET UNITYSDK_OFFSET(0x162A5610)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_1_OFFSET UNITYSDK_OFFSET(0x162A5F00)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_OFFSET UNITYSDK_OFFSET(0x162A5BB0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_C48BED042BE91786_OFFSET UNITYSDK_OFFSET(0x162A5290)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_D83985000E1AD3F1_OFFSET UNITYSDK_OFFSET(0x162A5D40)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_1_OFFSET UNITYSDK_OFFSET(0x162A6450)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_OFFSET UNITYSDK_OFFSET(0x162A63B0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FCABC4212A3F7F6F_OFFSET UNITYSDK_OFFSET(0x162A6090)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FD67B0C6EFC9560B_OFFSET UNITYSDK_OFFSET(0x162A4860)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A4F90)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x162A4F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_TypeDefinitionIndex = 50211;

	class ConfigAbilityTarget : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_9BE0823C1225EE82* StaticGet_entityFeatureTargetWrapSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_9BE0823C1225EE82*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x44990);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_AB79962F241E0778* StaticGet_entityFeatureTargetSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_AB79962F241E0778*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x449B0);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_Struct_2_D9676FC67296675D* StaticGet_entitySortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_Struct_2_D9676FC67296675D*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x449D0);
		}
		::MoleMole::Config::AbilityTargetting CustomTargetting; // 0x10
		::System::String* NodePoint; // 0x18
		::System::String* SavePoint; // 0x20
		::MoleMole::Config::ConfigEntityFitlerGroup* filterGroup; // 0x28
		::Enum_3_10932026694B739C SortingType; // 0x30
		::Enum_3_99176E6BE04C36F5_2 Order; // 0x34
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

		::System::Boolean Method_1_445F2DD6F75361B1(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity*& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_445F2DD6F75361B1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Method_1_4A2C8AEE9BCA2A94(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_4A2C8AEE9BCA2A94_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_473360D382EBE9C6(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_473360D382EBE9C6_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_1_C48BED042BE91786(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_C48BED042BE91786_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_5B9D1016DF183D97(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_5B9D1016DF183D97_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_20599A32E5B0202C(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_20599A32E5B0202C_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_1_2C9AAEB4E287676D(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_2C9AAEB4E287676D_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_1_8677661FEF71549A(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_65FECDA418990652(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_65FECDA418990652_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_D83985000E1AD3F1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_D83985000E1AD3F1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_8677661FEF71549A_1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Struct_2_FA5F50563E60AFBA a3, ::Struct_2_FA5F50563E60AFBA a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_8677661FEF71549A_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_FCABC4212A3F7F6F(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FCABC4212A3F7F6F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_FD67B0C6EFC9560B(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_FD67B0C6EFC9560B_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_1_F179115F8A73AE42(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_F179115F8A73AE42_1(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigAbilityTarget* a2, ::Class_1_CB7F0487F7A6164A* a3, ::Class_1_CB7F0487F7A6164A* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_METHOD_1_F179115F8A73AE42_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
