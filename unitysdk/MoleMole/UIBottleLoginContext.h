#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_UIBOTTLELOGINCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1604C420)
#define MOLEMOLE_UIBOTTLELOGINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1604C470)
#define MOLEMOLE_UIBOTTLELOGINCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1604C4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginContext_TypeDefinitionIndex = 69057;

	class UIBottleLoginContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::System::Int32 questSpecificID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
