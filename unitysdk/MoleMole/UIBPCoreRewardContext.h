#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_79AE422BA06F6D26_3;
namespace MoleMole { class UIBPPagePageController; }

#define MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62B7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardContext_TypeDefinitionIndex = 63539;

	class UIBPCoreRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBPPagePageController* bpPageController; // 0x28
		::Class_2_79AE422BA06F6D26_3* bpView; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
