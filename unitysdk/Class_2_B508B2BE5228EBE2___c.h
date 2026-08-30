#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_373;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B508B2BE5228EBE2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159354E0)
#define CLASS_2_B508B2BE5228EBE2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15935510)
#define CLASS_2_B508B2BE5228EBE2___C__REGISTERCOMPONENTADAPTERS_B__178_0_OFFSET UNITYSDK_OFFSET(0x15935520)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex = 49706;

class Class_2_B508B2BE5228EBE2___c : public ::System::Object
{
public:
	static ::Class_2_B508B2BE5228EBE2___c** StaticGet___9()
	{
		return (::Class_2_B508B2BE5228EBE2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex)->GetStaticField(0x64450);
	}
	static ::System::Func_2<::System::Object*, ::Class_0_16E4307DCC419505_373*>** StaticGet___9__178_0()
	{
		return (::System::Func_2<::System::Object*, ::Class_0_16E4307DCC419505_373*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex)->GetStaticField(0x64458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_373* _RegisterComponentAdapters_b__178_0(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_373*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__REGISTERCOMPONENTADAPTERS_B__178_0_OFFSET))(this, a1);
	}
};
