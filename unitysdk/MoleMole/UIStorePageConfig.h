#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStorePageNPCConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTOREPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x148C36B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStorePageConfig_TypeDefinitionIndex = 61328;

	class UIStorePageConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIStorePageNPCConfig*>* npcConfigs; // 0x10
		::Il2CppArray<::System::Int32>* sound2DList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTOREPAGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
