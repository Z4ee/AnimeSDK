#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_5;
class Class_1_D35BA2EA23BF8587;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2A1279BFE14A432F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10607DF0)
#define CLASS_1_2A1279BFE14A432F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10607E20)
#define CLASS_1_2A1279BFE14A432F___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x10607E30)
#define CLASS_1_2A1279BFE14A432F___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0x10608190)

inline static constexpr unsigned int Class_1_2A1279BFE14A432F___c_TypeDefinitionIndex = 54661;

class Class_1_2A1279BFE14A432F___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_5*>*, ::Class_1_D35BA2EA23BF8587*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_5*>*, ::Class_1_D35BA2EA23BF8587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A1279BFE14A432F___c_TypeDefinitionIndex)->GetStaticField(0x20610);
	}
	static ::Class_1_2A1279BFE14A432F___c** StaticGet___9()
	{
		return (::Class_1_2A1279BFE14A432F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A1279BFE14A432F___c_TypeDefinitionIndex)->GetStaticField(0x20618);
	}
	static ::System::Func_2<::Class_1_97E659ED8D5D259C_5*, ::System::UInt32>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_1_97E659ED8D5D259C_5*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A1279BFE14A432F___c_TypeDefinitionIndex)->GetStaticField(0x20620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A1279BFE14A432F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A1279BFE14A432F___C__CTOR_OFFSET))(this);
	}

	::Class_1_D35BA2EA23BF8587* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_5*>* actionToMerge)
	{
		return ((::Class_1_D35BA2EA23BF8587*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_2A1279BFE14A432F___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, actionToMerge);
	}

	::System::UInt32 _HandlePostProcess_b__0_1(::Class_1_97E659ED8D5D259C_5* a)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_97E659ED8D5D259C_5*))((::PBYTE)hIl2Cpp + CLASS_1_2A1279BFE14A432F___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, a);
	}
};
