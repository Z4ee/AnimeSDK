#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E98C50E0EBCC0AC;
class Class_2_56DCA1B58073717B;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_0E98C50E0EBCC0AC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17207E00)
#define CLASS_1_0E98C50E0EBCC0AC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17207E40)
#define CLASS_1_0E98C50E0EBCC0AC___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x17207E70)
#define CLASS_1_0E98C50E0EBCC0AC___C___REGISTERLOADCALLBACK_B__17_0_OFFSET UNITYSDK_OFFSET(0x17207E50)

inline static constexpr unsigned int Class_1_0E98C50E0EBCC0AC___c_TypeDefinitionIndex = 72875;

class Class_1_0E98C50E0EBCC0AC___c : public ::System::Object
{
public:
	static ::Class_1_0E98C50E0EBCC0AC___c** StaticGet___9()
	{
		return (::Class_1_0E98C50E0EBCC0AC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E98C50E0EBCC0AC___c_TypeDefinitionIndex)->GetStaticField(0x324A0);
	}
	static ::System::Action_3<::Class_1_0E98C50E0EBCC0AC*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Action_3<::Class_1_0E98C50E0EBCC0AC*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E98C50E0EBCC0AC___c_TypeDefinitionIndex)->GetStaticField(0x324A8);
	}
	static ::System::Action_2<::Class_1_0E98C50E0EBCC0AC*, ::Class_2_56DCA1B58073717B*>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::Class_1_0E98C50E0EBCC0AC*, ::Class_2_56DCA1B58073717B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E98C50E0EBCC0AC___c_TypeDefinitionIndex)->GetStaticField(0x324B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E98C50E0EBCC0AC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E98C50E0EBCC0AC___C__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterLoadCallback_b__17_0(::Class_1_0E98C50E0EBCC0AC* a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E98C50E0EBCC0AC*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0E98C50E0EBCC0AC___C___REGISTERLOADCALLBACK_B__17_0_OFFSET))(this, a1, a2);
	}

	::System::Void __ListenLevelVar_b__23_0(::Class_1_0E98C50E0EBCC0AC* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E98C50E0EBCC0AC*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0E98C50E0EBCC0AC___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, a1, a2, a3);
	}
};
