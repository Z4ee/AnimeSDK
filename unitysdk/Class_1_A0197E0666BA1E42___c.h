#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A0197E0666BA1E42___C_METHOD_1_3F6675527A53D9AC_OFFSET UNITYSDK_OFFSET(0x1B714730)
#define CLASS_1_A0197E0666BA1E42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7146E0)
#define CLASS_1_A0197E0666BA1E42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B714720)

inline static constexpr unsigned int Class_1_A0197E0666BA1E42___c_TypeDefinitionIndex = 8259;

class Class_1_A0197E0666BA1E42___c : public ::System::Object
{
public:
	static ::Class_1_A0197E0666BA1E42___c** StaticGet___9()
	{
		return (::Class_1_A0197E0666BA1E42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0197E0666BA1E42___c_TypeDefinitionIndex)->GetStaticField(0x7230);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0197E0666BA1E42___c_TypeDefinitionIndex)->GetStaticField(0x7238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0197E0666BA1E42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0197E0666BA1E42___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3F6675527A53D9AC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A0197E0666BA1E42___C_METHOD_1_3F6675527A53D9AC_OFFSET))(this, a1, a2);
	}
};
