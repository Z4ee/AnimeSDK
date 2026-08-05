#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralConsoleBaseBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_BCB34C7DF4338509_METHOD_1_5BFC8207527419D4_OFFSET UNITYSDK_OFFSET(0x12CAC0B0)
#define CLASS_1_BCB34C7DF4338509_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x12CAC6D0)
#define CLASS_1_BCB34C7DF4338509_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x12CAC8D0)
#define CLASS_1_BCB34C7DF4338509__CTOR_OFFSET UNITYSDK_OFFSET(0x12CAC020)

inline static constexpr unsigned int Class_1_BCB34C7DF4338509_TypeDefinitionIndex = 65132;

class Class_1_BCB34C7DF4338509 : public ::System::Object
{
public:
	::MoleMole::UIBaseController* Field_1_0; // 0x10
	::UnityEngine::RectTransform* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralConsoleBaseBtnWidgetController*>* Field_1_2; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_5BFC8207527419D4(::MoleMole::UIGeneralConsoleBaseBtnWidgetController* a1, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_5BFC8207527419D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}
};
