#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D675521B14CA6BEF;

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x19EA9F90)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAA180)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x19EAA1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController_Context_TypeDefinitionIndex = 71279;

	class UIHardCoreBossBattletPrepPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossID; // 0x28
		::System::Int32 modeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::Class_1_D675521B14CA6BEF* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D675521B14CA6BEF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Void __base_OnBackStreaming(::Class_1_D675521B14CA6BEF* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D675521B14CA6BEF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET))(this, P0);
		}
	};
}
