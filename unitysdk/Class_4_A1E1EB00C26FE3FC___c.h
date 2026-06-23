#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_A1E1EB00C26FE3FC___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x11FDD0E0)
#define CLASS_4_A1E1EB00C26FE3FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FDD090)
#define CLASS_4_A1E1EB00C26FE3FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FDD0D0)

inline static constexpr unsigned int Class_4_A1E1EB00C26FE3FC___c_TypeDefinitionIndex = 41281;

class Class_4_A1E1EB00C26FE3FC___c : public ::System::Object
{
public:
	static ::Class_4_A1E1EB00C26FE3FC___c** StaticGet___9()
	{
		return (::Class_4_A1E1EB00C26FE3FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_A1E1EB00C26FE3FC___c_TypeDefinitionIndex)->GetStaticField(0x3D380);
	}
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_A1E1EB00C26FE3FC___c_TypeDefinitionIndex)->GetStaticField(0x3D388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_A1E1EB00C26FE3FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1E1EB00C26FE3FC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_A1E1EB00C26FE3FC___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}
};
