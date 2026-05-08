#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_QTEATTACKTARGETSELECTOR_METHOD_2_FF36E2394D1E711C_OFFSET UNITYSDK_OFFSET(0xFB10390)
#define MOLEMOLE_CONFIG_QTEATTACKTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFB10640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int QTEAttackTargetSelector_TypeDefinitionIndex = 70906;

	class QTEAttackTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QTEATTACKTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_FF36E2394D1E711C(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QTEATTACKTARGETSELECTOR_METHOD_2_FF36E2394D1E711C_OFFSET))(this, a1);
		}
	};
}
