#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CLASS_1_1A520E7D82BE4A56_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9C2530)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_Class_1_1A520E7D82BE4A56_1_TypeDefinitionIndex = 42360;

	class NPCCrowdModuleMainSystem_Class_1_1A520E7D82BE4A56_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Field_1_0()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_Class_1_1A520E7D82BE4A56_1_TypeDefinitionIndex)->GetStaticField(0xF470);
		}
		static ::System::Boolean* StaticGet_Field_1_1()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_Class_1_1A520E7D82BE4A56_1_TypeDefinitionIndex)->GetStaticField(0xF471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CLASS_1_1A520E7D82BE4A56_1__CCTOR_OFFSET))();
		}
	};
}
