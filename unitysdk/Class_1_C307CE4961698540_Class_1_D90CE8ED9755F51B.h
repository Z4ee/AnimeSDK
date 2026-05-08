#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_28FEA411F78ADC1B_OFFSET UNITYSDK_OFFSET(0x14A397A0)
#define CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_D59318DE59027754_OFFSET UNITYSDK_OFFSET(0x14A39530)
#define CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_E8701D3A54784517_OFFSET UNITYSDK_OFFSET(0x14A395E0)
#define CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B__CTOR_OFFSET UNITYSDK_OFFSET(0x14A39480)

inline static constexpr unsigned int Class_1_C307CE4961698540_Class_1_D90CE8ED9755F51B_TypeDefinitionIndex = 48979;

class Class_1_C307CE4961698540_Class_1_D90CE8ED9755F51B : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::System::Type*, ::MoleMole::UIBaseController*>* Field_1_1; // 0x10
	::Enum_3_81A3942BCC6E42B5 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D59318DE59027754(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_D59318DE59027754_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8701D3A54784517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_E8701D3A54784517_OFFSET))(this);
	}

	::System::Void Method_1_28FEA411F78ADC1B(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_D90CE8ED9755F51B_METHOD_1_28FEA411F78ADC1B_OFFSET))(this, a1);
	}
};
