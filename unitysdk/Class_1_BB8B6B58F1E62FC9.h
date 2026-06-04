#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_BB8B6B58F1E62FC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144C4180)
#define CLASS_1_BB8B6B58F1E62FC9_METHOD_1_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x144C4810)
#define CLASS_1_BB8B6B58F1E62FC9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x144C4260)
#define CLASS_1_BB8B6B58F1E62FC9_METHOD_1_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x144C42C0)
#define CLASS_1_BB8B6B58F1E62FC9_METHOD_1_E67AC278AF14384B_OFFSET UNITYSDK_OFFSET(0x144C4520)
#define CLASS_1_BB8B6B58F1E62FC9__CTOR_OFFSET UNITYSDK_OFFSET(0x144C40D0)

inline static constexpr unsigned int Class_1_BB8B6B58F1E62FC9_TypeDefinitionIndex = 62106;

class Class_1_BB8B6B58F1E62FC9 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x49445; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9_METHOD_1_6096CA3BC11444EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67AC278AF14384B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9_METHOD_1_E67AC278AF14384B_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_0581090195E9C81F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB8B6B58F1E62FC9_METHOD_1_0581090195E9C81F_OFFSET))();
	}
};
