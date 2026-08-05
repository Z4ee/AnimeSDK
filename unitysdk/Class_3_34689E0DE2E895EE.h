#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_3_34689E0DE2E895EE_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x12F2A980)
#define CLASS_3_34689E0DE2E895EE_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x12F2A630)
#define CLASS_3_34689E0DE2E895EE_METHOD_3_FD893389E8FD3D29_OFFSET UNITYSDK_OFFSET(0x12F2A7A0)
#define CLASS_3_34689E0DE2E895EE__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2AA40)

inline static constexpr unsigned int Class_3_34689E0DE2E895EE_TypeDefinitionIndex = 70441;

class Class_3_34689E0DE2E895EE : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Method_3_FD893389E8FD3D29(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIBossChallengeBadgeWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_FD893389E8FD3D29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
