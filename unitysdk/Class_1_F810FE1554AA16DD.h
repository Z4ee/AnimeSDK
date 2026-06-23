#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1040;
namespace System { class String; }

#define CLASS_1_F810FE1554AA16DD_METHOD_1_3D5C781C14F29B56_OFFSET UNITYSDK_OFFSET(0x17D9F070)
#define CLASS_1_F810FE1554AA16DD_METHOD_1_8B6B17ED9E562BAE_OFFSET UNITYSDK_OFFSET(0x17D9EEE0)
#define CLASS_1_F810FE1554AA16DD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9F140)

inline static constexpr unsigned int Class_1_F810FE1554AA16DD_TypeDefinitionIndex = 54074;

class Class_1_F810FE1554AA16DD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F810FE1554AA16DD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6B17ED9E562BAE(::Class_2_208CC9941471731A_1040* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1040*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_F810FE1554AA16DD_METHOD_1_8B6B17ED9E562BAE_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_3D5C781C14F29B56(::Class_2_208CC9941471731A_1040* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_1040*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_F810FE1554AA16DD_METHOD_1_3D5C781C14F29B56_OFFSET))(this, a1, a2);
	}
};
