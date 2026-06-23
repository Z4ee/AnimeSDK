#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9D33A2E94B3E53DC;
template <typename T> class Class_1_8CC15846339E7FB0;

#define MOLEMOLE_UISUMMERFISHREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166A88E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishRewardDialogContext_TypeDefinitionIndex = 70371;

	class UISummerFishRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_8CC15846339E7FB0<::Class_3_9D33A2E94B3E53DC*>* FishList; // 0x28
		::System::Int64 LastGotTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
