#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_83DE381565FB61D2;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EDITORTIMEPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB19320)

namespace MoleMole
{
	inline static constexpr unsigned int EditorTimePopWindowContext_TypeDefinitionIndex = 64113;

	class EditorTimePopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* EmptyList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* RightList; // 0x30
		::System::Action_1<::System::Int32>* ApplyCallback; // 0x38
		::Class_1_83DE381565FB61D2* EditorLayer; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* LeftList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EDITORTIMEPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
