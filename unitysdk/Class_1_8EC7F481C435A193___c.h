#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8EC7F481C435A193___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC1D490)
#define CLASS_1_8EC7F481C435A193___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1D4C0)
#define CLASS_1_8EC7F481C435A193___C__ISHEXSTR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EC1D4D0)

inline static constexpr unsigned int Class_1_8EC7F481C435A193___c_TypeDefinitionIndex = 35196;

class Class_1_8EC7F481C435A193___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EC7F481C435A193___c_TypeDefinitionIndex)->GetStaticField(0x4B5F0);
	}
	static ::Class_1_8EC7F481C435A193___c** StaticGet___9()
	{
		return (::Class_1_8EC7F481C435A193___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EC7F481C435A193___c_TypeDefinitionIndex)->GetStaticField(0x4B5F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EC7F481C435A193___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC7F481C435A193___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsHexStr_b__12_0(::System::Char a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_8EC7F481C435A193___C__ISHEXSTR_B__12_0_OFFSET))(this, a1);
	}
};
