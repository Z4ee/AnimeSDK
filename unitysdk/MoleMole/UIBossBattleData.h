#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EDAA6390395047A1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE6EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossBattleData_TypeDefinitionIndex = 45661;

	class UIBossBattleData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_EDAA6390395047A1*>* periodDataList; // 0x28
		::System::Action* onClose; // 0x30
		::System::Action_2<::System::Int32, ::System::Int32>* onSelectPeriod; // 0x38
		::System::String* bottomDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATA__CTOR_OFFSET))(this);
		}
	};
}
