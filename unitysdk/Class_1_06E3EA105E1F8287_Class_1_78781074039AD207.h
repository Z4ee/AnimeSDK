#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_06E3EA105E1F8287_CLASS_1_78781074039AD207_METHOD_1_1DD74E734D3E8558_OFFSET UNITYSDK_OFFSET(0x112558F0)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_78781074039AD207__CTOR_OFFSET UNITYSDK_OFFSET(0x112558E0)

inline static constexpr unsigned int Class_1_06E3EA105E1F8287_Class_1_78781074039AD207_TypeDefinitionIndex = 73501;

class Class_1_06E3EA105E1F8287_Class_1_78781074039AD207 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_78781074039AD207__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1DD74E734D3E8558(::MoleMole::UIArcadePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadePageController*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_78781074039AD207_METHOD_1_1DD74E734D3E8558_OFFSET))(this, a1);
	}
};
