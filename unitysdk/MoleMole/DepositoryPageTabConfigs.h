#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DepositoryTabConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DEPOSITORYPAGETABCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D39890)

namespace MoleMole
{
	inline static constexpr unsigned int DepositoryPageTabConfigs_TypeDefinitionIndex = 49864;

	class DepositoryPageTabConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::DepositoryTabConfig*>* TabConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEPOSITORYPAGETABCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
