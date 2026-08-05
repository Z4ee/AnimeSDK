#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D2F45ADFF646BAFA;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140DB740)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopSelectPropertyPopWindowContext_TypeDefinitionIndex = 79942;

	class UIVideoShopSelectPropertyPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* DefaultSelectRandPropertyIDList; // 0x28
		::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* OnOkAction; // 0x30
		::Class_2_D2F45ADFF646BAFA* EquipGachaTemplate; // 0x38
		::System::Int32 DefaultSelectPropertyID; // 0x40
		::System::Int32 SelectUpSuitID; // 0x44
		::System::Int32 SelectPosition; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
