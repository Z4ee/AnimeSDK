#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_076710115AC6DDA3___C_METHOD_1_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x11426170)
#define CLASS_1_076710115AC6DDA3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11426120)
#define CLASS_1_076710115AC6DDA3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11426160)

inline static constexpr unsigned int Class_1_076710115AC6DDA3___c_TypeDefinitionIndex = 80982;

class Class_1_076710115AC6DDA3___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::Struct_2_B679E4D914A10080_2>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Int32, ::Struct_2_B679E4D914A10080_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_076710115AC6DDA3___c_TypeDefinitionIndex)->GetStaticField(0x46830);
	}
	static ::Class_1_076710115AC6DDA3___c** StaticGet___9()
	{
		return (::Class_1_076710115AC6DDA3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_076710115AC6DDA3___c_TypeDefinitionIndex)->GetStaticField(0x46838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3___C__CTOR_OFFSET))(this);
	}

	::Struct_2_B679E4D914A10080_2 Method_1_0D3CEA11284B35A1(::System::Int32 a1)
	{
		return ((::Struct_2_B679E4D914A10080_2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3___C_METHOD_1_0D3CEA11284B35A1_OFFSET))(this, a1);
	}
};
