#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_45C1DDE65CB117DE;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EDITORTIMEPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADB630)

namespace MoleMole
{
	inline static constexpr unsigned int EditorTimePopWindowContext_TypeDefinitionIndex = 52385;

	class EditorTimePopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* RightList; // 0x28
		::Class_1_45C1DDE65CB117DE* EditorLayer; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* LeftList; // 0x38
		::System::Action_1<::System::Int32>* ApplyCallback; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* EmptyList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EDITORTIMEPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
