#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_335;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_0D8BF0B023DC899E___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x156B5200)
#define CLASS_4_0D8BF0B023DC899E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B51B0)
#define CLASS_4_0D8BF0B023DC899E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156B51F0)

inline static constexpr unsigned int Class_4_0D8BF0B023DC899E___c_TypeDefinitionIndex = 78371;

class Class_4_0D8BF0B023DC899E___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_335*>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_335*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0D8BF0B023DC899E___c_TypeDefinitionIndex)->GetStaticField(0x2D980);
	}
	static ::Class_4_0D8BF0B023DC899E___c** StaticGet___9()
	{
		return (::Class_4_0D8BF0B023DC899E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0D8BF0B023DC899E___c_TypeDefinitionIndex)->GetStaticField(0x2D988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0D8BF0B023DC899E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0D8BF0B023DC899E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_335* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_335*))((::PBYTE)hIl2Cpp + CLASS_4_0D8BF0B023DC899E___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
