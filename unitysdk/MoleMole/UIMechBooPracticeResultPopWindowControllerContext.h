#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_31D08DC027B35B8F_Class_1_F33890CE90063A19;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15761570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultPopWindowControllerContext_TypeDefinitionIndex = 81009;

	class UIMechBooPracticeResultPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_31D08DC027B35B8F_Class_1_F33890CE90063A19*>* OldSnapshots; // 0x28
		::System::Collections::Generic::List_1<::Class_2_31D08DC027B35B8F_Class_1_F33890CE90063A19*>* NewSnapshots; // 0x30
		::System::Int32 ScriptID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
