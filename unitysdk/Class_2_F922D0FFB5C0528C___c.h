#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_F922D0FFB5C0528C___C_METHOD_1_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0x13CA2C90)
#define CLASS_2_F922D0FFB5C0528C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA2C40)
#define CLASS_2_F922D0FFB5C0528C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA2C80)

inline static constexpr unsigned int Class_2_F922D0FFB5C0528C___c_TypeDefinitionIndex = 45404;

class Class_2_F922D0FFB5C0528C___c : public ::System::Object
{
public:
	static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F922D0FFB5C0528C___c_TypeDefinitionIndex)->GetStaticField(0x47F60);
	}
	static ::Class_2_F922D0FFB5C0528C___c** StaticGet___9()
	{
		return (::Class_2_F922D0FFB5C0528C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F922D0FFB5C0528C___c_TypeDefinitionIndex)->GetStaticField(0x47F68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F922D0FFB5C0528C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F922D0FFB5C0528C___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F922D0FFB5C0528C___C_METHOD_1_F9DAB08EC8926B1B_OFFSET))(this);
	}
};
