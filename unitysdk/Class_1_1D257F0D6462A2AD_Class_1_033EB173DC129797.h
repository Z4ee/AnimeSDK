#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1D257F0D6462A2AD_CLASS_1_033EB173DC129797_METHOD_1_C7B1E957732CAFAE_OFFSET UNITYSDK_OFFSET(0x187B3620)
#define CLASS_1_1D257F0D6462A2AD_CLASS_1_033EB173DC129797__CTOR_OFFSET UNITYSDK_OFFSET(0x187B3610)

inline static constexpr unsigned int Class_1_1D257F0D6462A2AD_Class_1_033EB173DC129797_TypeDefinitionIndex = 84505;

class Class_1_1D257F0D6462A2AD_Class_1_033EB173DC129797 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D257F0D6462A2AD_CLASS_1_033EB173DC129797__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7B1E957732CAFAE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1D257F0D6462A2AD_CLASS_1_033EB173DC129797_METHOD_1_C7B1E957732CAFAE_OFFSET))(this, a1);
	}
};
