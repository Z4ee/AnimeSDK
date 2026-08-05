#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_929E686C2F593C85;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

#define CLASS_1_7127353CA91AF50A_METHOD_1_41724A87C3C0A9AC_OFFSET UNITYSDK_OFFSET(0x1E39FFC0)
#define CLASS_1_7127353CA91AF50A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1E3A07E0)
#define CLASS_1_7127353CA91AF50A_METHOD_1_6212B41AAE2779E5_OFFSET UNITYSDK_OFFSET(0x1E39E130)
#define CLASS_1_7127353CA91AF50A_METHOD_1_7CBC6699BC67CE6E_OFFSET UNITYSDK_OFFSET(0x1E39F470)
#define CLASS_1_7127353CA91AF50A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39D620)

inline static constexpr unsigned int Class_1_7127353CA91AF50A_TypeDefinitionIndex = 34569;

class Class_1_7127353CA91AF50A : public ::System::Object
{
public:
	::Foundation::PriorityQueue_2<::Class_1_929E686C2F593C85*, ::Class_1_929E686C2F593C85*>* Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_7CBC6699BC67CE6E(::Class_1_929E686C2F593C85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E686C2F593C85*))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_7CBC6699BC67CE6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_41724A87C3C0A9AC(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_41724A87C3C0A9AC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6212B41AAE2779E5(::Class_1_929E686C2F593C85*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_929E686C2F593C85*&))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_6212B41AAE2779E5_OFFSET))(this, a1);
	}
};
