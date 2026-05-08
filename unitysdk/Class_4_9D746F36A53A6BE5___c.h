#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_302;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_9D746F36A53A6BE5___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x141C5000)
#define CLASS_4_9D746F36A53A6BE5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141C4FB0)
#define CLASS_4_9D746F36A53A6BE5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141C4FF0)

inline static constexpr unsigned int Class_4_9D746F36A53A6BE5___c_TypeDefinitionIndex = 75232;

class Class_4_9D746F36A53A6BE5___c : public ::System::Object
{
public:
	static ::Class_4_9D746F36A53A6BE5___c** StaticGet___9()
	{
		return (::Class_4_9D746F36A53A6BE5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_9D746F36A53A6BE5___c_TypeDefinitionIndex)->GetStaticField(0x43040);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_302*>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_302*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_9D746F36A53A6BE5___c_TypeDefinitionIndex)->GetStaticField(0x43048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_9D746F36A53A6BE5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D746F36A53A6BE5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_302* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_302*))((::PBYTE)hIl2Cpp + CLASS_4_9D746F36A53A6BE5___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
