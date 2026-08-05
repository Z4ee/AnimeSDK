#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_413212C3F231D1B9.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_812;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_E8586C668F07BFDF_METHOD_1_1E895D3FF72E5431_OFFSET UNITYSDK_OFFSET(0x17E7FCF0)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_E8586C668F07BFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7FCE0)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_E8586C668F07BFDF_TypeDefinitionIndex = 49358;

class Class_2_9D9172C07F82DDAE_Class_1_E8586C668F07BFDF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::Enum_3_413212C3F231D1B9 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_E8586C668F07BFDF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1E895D3FF72E5431(::Class_2_208CC9941471731A_812* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_812*))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_E8586C668F07BFDF_METHOD_1_1E895D3FF72E5431_OFFSET))(this, a1);
	}
};
