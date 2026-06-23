#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_21;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x150CD160)
#define CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150CD110)
#define CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150CD150)

inline static constexpr unsigned int Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex = 86363;

class Class_3_5F8DAA47ACDB7251___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_21*>** StaticGet___9__464_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x32C90);
	}
	static ::Class_3_5F8DAA47ACDB7251___c** StaticGet___9()
	{
		return (::Class_3_5F8DAA47ACDB7251___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x32C98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_21*))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
