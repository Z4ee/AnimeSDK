#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class SummerEventBeatMap; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C16B966F3428AAC0___C_METHOD_1_2009C29D620DEF76_OFFSET UNITYSDK_OFFSET(0xEC06BF0)
#define CLASS_1_C16B966F3428AAC0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC06BA0)
#define CLASS_1_C16B966F3428AAC0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEC06BE0)

inline static constexpr unsigned int Class_1_C16B966F3428AAC0___c_TypeDefinitionIndex = 73152;

class Class_1_C16B966F3428AAC0___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16B966F3428AAC0___c_TypeDefinitionIndex)->GetStaticField(0x3AB60);
	}
	static ::Class_1_C16B966F3428AAC0___c** StaticGet___9()
	{
		return (::Class_1_C16B966F3428AAC0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16B966F3428AAC0___c_TypeDefinitionIndex)->GetStaticField(0x3AB68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C16B966F3428AAC0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16B966F3428AAC0___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_2009C29D620DEF76(::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*))((::PBYTE)hIl2Cpp + CLASS_1_C16B966F3428AAC0___C_METHOD_1_2009C29D620DEF76_OFFSET))(this, a1);
	}
};
