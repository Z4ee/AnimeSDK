#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_143;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1DE31F486C9C83AD___C_METHOD_1_245C714485554CFE_OFFSET UNITYSDK_OFFSET(0xC99FAE0)
#define CLASS_2_1DE31F486C9C83AD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC99FA90)
#define CLASS_2_1DE31F486C9C83AD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC99FAD0)

inline static constexpr unsigned int Class_2_1DE31F486C9C83AD___c_TypeDefinitionIndex = 52087;

class Class_2_1DE31F486C9C83AD___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_025FF4981524A424_143*>** StaticGet___9__31_0()
	{
		return (::System::Action_1<::Class_3_025FF4981524A424_143*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DE31F486C9C83AD___c_TypeDefinitionIndex)->GetStaticField(0x46EA0);
	}
	static ::Class_2_1DE31F486C9C83AD___c** StaticGet___9()
	{
		return (::Class_2_1DE31F486C9C83AD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DE31F486C9C83AD___c_TypeDefinitionIndex)->GetStaticField(0x46EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1DE31F486C9C83AD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DE31F486C9C83AD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_245C714485554CFE(::Class_3_025FF4981524A424_143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_143*))((::PBYTE)hIl2Cpp + CLASS_2_1DE31F486C9C83AD___C_METHOD_1_245C714485554CFE_OFFSET))(this, a1);
	}
};
