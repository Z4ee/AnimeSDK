#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMESSAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1866C110)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageWidgetContext_TypeDefinitionIndex = 79491;

	class UIMessageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>* MessageUsers; // 0x28
		::System::Boolean newBie; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
