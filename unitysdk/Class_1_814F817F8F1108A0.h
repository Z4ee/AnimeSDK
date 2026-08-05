#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_87;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_814F817F8F1108A0_METHOD_1_1B82D823AE4FCDB4_OFFSET UNITYSDK_OFFSET(0x11C78F10)
#define CLASS_1_814F817F8F1108A0_METHOD_1_28648F3E495195A9_OFFSET UNITYSDK_OFFSET(0x11C78FB0)
#define CLASS_1_814F817F8F1108A0_METHOD_1_4CA35F322974156E_OFFSET UNITYSDK_OFFSET(0x11C79100)
#define CLASS_1_814F817F8F1108A0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11C79070)
#define CLASS_1_814F817F8F1108A0__CTOR_OFFSET UNITYSDK_OFFSET(0x11C79020)

inline static constexpr unsigned int Class_1_814F817F8F1108A0_TypeDefinitionIndex = 88152;

class Class_1_814F817F8F1108A0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1B82D823AE4FCDB4(::Class_2_208CC9941471731A_87* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_87*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_1B82D823AE4FCDB4_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_28648F3E495195A9(::Class_2_208CC9941471731A_87* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_87*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_28648F3E495195A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4CA35F322974156E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_4CA35F322974156E_OFFSET))(this, a1);
	}
};
