#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_38CA01A79152634F_OFFSET UNITYSDK_OFFSET(0xF817980)
#define CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_7934DD1AFA77F36F_OFFSET UNITYSDK_OFFSET(0xF817C20)
#define CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_8A79FFB7FB47C009_OFFSET UNITYSDK_OFFSET(0xF817C30)
#define CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45__CTOR_OFFSET UNITYSDK_OFFSET(0xF8178D0)

inline static constexpr unsigned int Class_1_EAC6D5497D42EBB7_Class_1_900D9D06A680DF45_TypeDefinitionIndex = 65994;

class Class_1_EAC6D5497D42EBB7_Class_1_900D9D06A680DF45 : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_38CA01A79152634F(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_38CA01A79152634F_OFFSET))(this, a1);
	}

	::MoleMole::UIWindowController* Method_1_7934DD1AFA77F36F()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_7934DD1AFA77F36F_OFFSET))(this);
	}

	::System::Boolean Method_1_8A79FFB7FB47C009(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*&))((::PBYTE)hIl2Cpp + CLASS_1_EAC6D5497D42EBB7_CLASS_1_900D9D06A680DF45_METHOD_1_8A79FFB7FB47C009_OFFSET))(this, a1, a2);
	}
};
