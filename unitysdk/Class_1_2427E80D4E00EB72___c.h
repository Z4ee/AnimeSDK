#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class SummerEventBeatMap; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2427E80D4E00EB72___C_METHOD_1_2009C29D620DEF76_OFFSET UNITYSDK_OFFSET(0x109C48A0)
#define CLASS_1_2427E80D4E00EB72___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109C4850)
#define CLASS_1_2427E80D4E00EB72___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109C4890)

inline static constexpr unsigned int Class_1_2427E80D4E00EB72___c_TypeDefinitionIndex = 62190;

class Class_1_2427E80D4E00EB72___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2427E80D4E00EB72___c_TypeDefinitionIndex)->GetStaticField(0x46610);
	}
	static ::Class_1_2427E80D4E00EB72___c** StaticGet___9()
	{
		return (::Class_1_2427E80D4E00EB72___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2427E80D4E00EB72___c_TypeDefinitionIndex)->GetStaticField(0x46618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2427E80D4E00EB72___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2427E80D4E00EB72___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_2009C29D620DEF76(::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*))((::PBYTE)hIl2Cpp + CLASS_1_2427E80D4E00EB72___C_METHOD_1_2009C29D620DEF76_OFFSET))(this, a1);
	}
};
