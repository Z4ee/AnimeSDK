#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_0ECDE22EF9FEEAE2_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0EA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardDetailsContext_TypeDefinitionIndex = 43758;

	class UIMainCityRevivalRewardDetailsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_0ECDE22EF9FEEAE2_2*>* progressList; // 0x28
		::System::Int32 LandID; // 0x30
		::System::Boolean CurrentProgressRewarded; // 0x34
		::System::Int32 CurrentProgressLevel; // 0x38

		::System::Void _ctor(::System::Int32 landID, ::System::Int32 currentProgressLevel, ::System::Boolean currentProgressRewarded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSCONTEXT__CTOR_OFFSET))(this, landID, currentProgressLevel, currentProgressRewarded);
		}
	};
}
