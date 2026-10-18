#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C125C9CAA23B7724_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB346C70)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB346D50)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_258333C2E3556047_OFFSET UNITYSDK_OFFSET(0xB346F80)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xB347210)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xB346DB0)
#define CLASS_1_C125C9CAA23B7724__CTOR_OFFSET UNITYSDK_OFFSET(0xB346BC0)

inline static constexpr unsigned int Class_1_C125C9CAA23B7724_TypeDefinitionIndex = 66427;

class Class_1_C125C9CAA23B7724 : public ::System::Object
{
public:
	// static const ::System::UInt32 PCLFMDLIGNL = 0x49445; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* CBEDFFEHENB; // 0x10
	::System::Int32 LADPGKLGJPC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void Method_1_258333C2E3556047(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_258333C2E3556047_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_B2AF81294D9C69C7_OFFSET))();
	}
};
