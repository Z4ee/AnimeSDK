#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace MoleMole::Config { class ConfigTargetSelector; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_04D749F1D464F0A7_OFFSET UNITYSDK_OFFSET(0x158ABA00)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_362775B16C5200E9_OFFSET UNITYSDK_OFFSET(0x158AAE50)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_3CD7D446CE9DE00A_OFFSET UNITYSDK_OFFSET(0x158AB420)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_47AAF35A19FE0AC5_OFFSET UNITYSDK_OFFSET(0x158AB1F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_8E9F7E1960DBA771_OFFSET UNITYSDK_OFFSET(0x158A9DA0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_B7399609554C9FE3_OFFSET UNITYSDK_OFFSET(0x158AAB90)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_E9405DA82FD30275_OFFSET UNITYSDK_OFFSET(0x158AAA10)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_FF51A47BF962B849_OFFSET UNITYSDK_OFFSET(0x158AACB0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x158AA810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTarget_TypeDefinitionIndex = 52525;

	class ConfigLockTarget : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigEntityFitlerGroup* filterGroup; // 0x10
		::MoleMole::Config::ConfigTargetSelector* targetSelector; // 0x18
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* debugCandidateList; // 0x20
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* candidateListByDistance; // 0x28
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* candidateListByDistancePerEntity; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* filteredCandidateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Method_1_8E9F7E1960DBA771(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean& a5)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_8E9F7E1960DBA771_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_1_E9405DA82FD30275(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_E9405DA82FD30275_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_B7399609554C9FE3(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_B7399609554C9FE3_OFFSET))(this, a1);
		}

		::Struct_2_FA5F50563E60AFBA Method_1_FF51A47BF962B849(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a8)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_FF51A47BF962B849_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Struct_2_FA5F50563E60AFBA Method_1_362775B16C5200E9(::Struct_2_FA5F50563E60AFBA a1)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_362775B16C5200E9_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* Method_1_47AAF35A19FE0AC5(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_47AAF35A19FE0AC5_OFFSET))(this, a1);
		}

		::System::Void Method_1_3CD7D446CE9DE00A(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_3CD7D446CE9DE00A_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* Method_1_04D749F1D464F0A7(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_METHOD_1_04D749F1D464F0A7_OFFSET))(this, a1);
		}
	};
}
