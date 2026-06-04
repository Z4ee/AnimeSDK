#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_D162C4F79D8D8418___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D264B0)
#define CLASS_2_D162C4F79D8D8418___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D264F0)
#define CLASS_2_D162C4F79D8D8418___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x13D26500)

inline static constexpr unsigned int Class_2_D162C4F79D8D8418___c_TypeDefinitionIndex = 54221;

class Class_2_D162C4F79D8D8418___c : public ::System::Object
{
public:
	static ::Class_2_D162C4F79D8D8418___c** StaticGet___9()
	{
		return (::Class_2_D162C4F79D8D8418___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D162C4F79D8D8418___c_TypeDefinitionIndex)->GetStaticField(0x67C40);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D162C4F79D8D8418___c_TypeDefinitionIndex)->GetStaticField(0x67C48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}
};
