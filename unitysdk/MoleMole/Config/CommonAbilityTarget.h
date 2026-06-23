#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_06A2BEC80F6C5106_OFFSET UNITYSDK_OFFSET(0x1A33D780)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A33DAB0)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_74B787212A4EF405_OFFSET UNITYSDK_OFFSET(0x1A33CF00)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_7D82464C039A0C11_OFFSET UNITYSDK_OFFSET(0x1A33D050)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_A5BE28C3F712767E_OFFSET UNITYSDK_OFFSET(0x1A33D970)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_B1B76E93F2086B49_OFFSET UNITYSDK_OFFSET(0x1A33DB10)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_E6817D23AAC14394_OFFSET UNITYSDK_OFFSET(0x1A33D1C0)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33DAA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonAbilityTarget_TypeDefinitionIndex = 55436;

	class CommonAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Int32 searchCount; // 0x40
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* resultList; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* selectList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_74B787212A4EF405(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_74B787212A4EF405_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_2_A5BE28C3F712767E(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_A5BE28C3F712767E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_06A2BEC80F6C5106(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_06A2BEC80F6C5106_OFFSET))(this, a1);
		}

		::System::Void Method_2_E6817D23AAC14394(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_E6817D23AAC14394_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerable* Method_2_B1B76E93F2086B49()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_B1B76E93F2086B49_OFFSET))(this);
		}

		::System::Boolean Method_2_7D82464C039A0C11(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity*& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_7D82464C039A0C11_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}
	};
}
