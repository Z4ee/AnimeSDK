#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_79AE422BA06F6D26_207;
namespace MoleMole { class UIBPPagePageController; }

#define MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1645B570)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardContext_TypeDefinitionIndex = 78913;

	class UIBPCoreRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_79AE422BA06F6D26_207* bpView; // 0x28
		::MoleMole::UIBPPagePageController* bpPageController; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
