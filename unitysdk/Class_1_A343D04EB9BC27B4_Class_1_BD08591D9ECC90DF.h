#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }

#define CLASS_1_A343D04EB9BC27B4_CLASS_1_BD08591D9ECC90DF_METHOD_1_8D343DD2ABF611DC_OFFSET UNITYSDK_OFFSET(0x13286370)
#define CLASS_1_A343D04EB9BC27B4_CLASS_1_BD08591D9ECC90DF__CTOR_OFFSET UNITYSDK_OFFSET(0x13286360)

inline static constexpr unsigned int Class_1_A343D04EB9BC27B4_Class_1_BD08591D9ECC90DF_TypeDefinitionIndex = 80099;

class Class_1_A343D04EB9BC27B4_Class_1_BD08591D9ECC90DF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_BD08591D9ECC90DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D343DD2ABF611DC(::MoleMole::HollowEntityLayerMaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityLayerMaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_BD08591D9ECC90DF_METHOD_1_8D343DD2ABF611DC_OFFSET))(this, a1);
	}
};
