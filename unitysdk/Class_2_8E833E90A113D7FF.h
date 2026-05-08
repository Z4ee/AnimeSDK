#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_8E833E90A113D7FF_METHOD_2_B20ED6356A8A8501_OFFSET UNITYSDK_OFFSET(0x77AA2B0)
#define CLASS_2_8E833E90A113D7FF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77AA260)
#define CLASS_2_8E833E90A113D7FF_METHOD_2_E7F26FE285113F92_OFFSET UNITYSDK_OFFSET(0x77AA440)
#define CLASS_2_8E833E90A113D7FF_METHOD_2_F150C5568638A32E_OFFSET UNITYSDK_OFFSET(0x77AA5E0)
#define CLASS_2_8E833E90A113D7FF_ONSTART_OFFSET UNITYSDK_OFFSET(0x77AA220)
#define CLASS_2_8E833E90A113D7FF__CTOR_OFFSET UNITYSDK_OFFSET(0x77AA2A0)

inline static constexpr unsigned int Class_2_8E833E90A113D7FF_TypeDefinitionIndex = 54542;

class Class_2_8E833E90A113D7FF : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B20ED6356A8A8501(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF_METHOD_2_B20ED6356A8A8501_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E7F26FE285113F92(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF_METHOD_2_E7F26FE285113F92_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_F150C5568638A32E(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::System::Int64>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_2_8E833E90A113D7FF_METHOD_2_F150C5568638A32E_OFFSET))(this, a1, a2, a3);
	}
};
