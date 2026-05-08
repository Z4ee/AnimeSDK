#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_5_684ED4F7990E83FF_3___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x10DB5190)
#define CLASS_5_684ED4F7990E83FF_3___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10DB5150)
#define CLASS_5_684ED4F7990E83FF_3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DB5100)
#define CLASS_5_684ED4F7990E83FF_3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB5140)

inline static constexpr unsigned int Class_5_684ED4F7990E83FF_3___c_TypeDefinitionIndex = 66587;

class Class_5_684ED4F7990E83FF_3___c : public ::System::Object
{
public:
	static ::Class_5_684ED4F7990E83FF_3___c** StaticGet___9()
	{
		return (::Class_5_684ED4F7990E83FF_3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF_3___c_TypeDefinitionIndex)->GetStaticField(0x31610);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF_3___c_TypeDefinitionIndex)->GetStaticField(0x31618);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF_3___c_TypeDefinitionIndex)->GetStaticField(0x31620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
