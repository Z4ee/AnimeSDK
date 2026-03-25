#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8046184281F4A16F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11189C40)
#define CLASS_1_8046184281F4A16F_METHOD_1_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x1118A240)
#define CLASS_1_8046184281F4A16F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11189CE0)
#define CLASS_1_8046184281F4A16F_METHOD_1_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x11189D40)
#define CLASS_1_8046184281F4A16F_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x11189F80)
#define CLASS_1_8046184281F4A16F__CTOR_OFFSET UNITYSDK_OFFSET(0x11189BB0)

inline static constexpr unsigned int Class_1_8046184281F4A16F_TypeDefinitionIndex = 54019;

class Class_1_8046184281F4A16F : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x49445; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F_METHOD_1_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_0581090195E9C81F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8046184281F4A16F_METHOD_1_0581090195E9C81F_OFFSET))();
	}
};
