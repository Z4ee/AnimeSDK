#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92D256FC55D8D091_CLASS_1_BF61F279B2DF5746_METHOD_1_68594FF40AE348E8_OFFSET UNITYSDK_OFFSET(0x13A47370)
#define CLASS_1_92D256FC55D8D091_CLASS_1_BF61F279B2DF5746__CTOR_OFFSET UNITYSDK_OFFSET(0x13A47360)

inline static constexpr unsigned int Class_1_92D256FC55D8D091_Class_1_BF61F279B2DF5746_TypeDefinitionIndex = 67028;

class Class_1_92D256FC55D8D091_Class_1_BF61F279B2DF5746 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_BF61F279B2DF5746__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68594FF40AE348E8(::MoleMole::HollowEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_BF61F279B2DF5746_METHOD_1_68594FF40AE348E8_OFFSET))(this, a1);
	}
};
