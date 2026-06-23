#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_236;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_7E82C7E8DB390FD9___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x13C9D3B0)
#define CLASS_4_7E82C7E8DB390FD9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C9D360)
#define CLASS_4_7E82C7E8DB390FD9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9D3A0)

inline static constexpr unsigned int Class_4_7E82C7E8DB390FD9___c_TypeDefinitionIndex = 73124;

class Class_4_7E82C7E8DB390FD9___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_236*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_236*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7E82C7E8DB390FD9___c_TypeDefinitionIndex)->GetStaticField(0x42700);
	}
	static ::Class_4_7E82C7E8DB390FD9___c** StaticGet___9()
	{
		return (::Class_4_7E82C7E8DB390FD9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7E82C7E8DB390FD9___c_TypeDefinitionIndex)->GetStaticField(0x42708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7E82C7E8DB390FD9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E82C7E8DB390FD9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_236* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_236*))((::PBYTE)hIl2Cpp + CLASS_4_7E82C7E8DB390FD9___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
