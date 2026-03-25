#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_201314D6C7A93CDF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_452E919D64CB8CCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C6A450)
#define CLASS_1_452E919D64CB8CCD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9C6AD60)
#define CLASS_1_452E919D64CB8CCD_METHOD_1_B318D49370D30C5F_OFFSET UNITYSDK_OFFSET(0x9C6A630)
#define CLASS_1_452E919D64CB8CCD_METHOD_1_B57121EB42C11E9C_OFFSET UNITYSDK_OFFSET(0x9C6A890)
#define CLASS_1_452E919D64CB8CCD_METHOD_1_D7862DDFEBFBA0AF_OFFSET UNITYSDK_OFFSET(0x9C6AB30)
#define CLASS_1_452E919D64CB8CCD_METHOD_1_E74F58C0D089392C_OFFSET UNITYSDK_OFFSET(0x9C6ABB0)
#define CLASS_1_452E919D64CB8CCD__CTOR_OFFSET UNITYSDK_OFFSET(0x9C6A390)

inline static constexpr unsigned int Class_1_452E919D64CB8CCD_TypeDefinitionIndex = 56845;

class Class_1_452E919D64CB8CCD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_201314D6C7A93CDF*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B318D49370D30C5F(::Class_1_201314D6C7A93CDF* a1, ::System::UInt32 a2, ::RPG::MVector3 a3, ::System::Nullable_1<::RPG::MVector3> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_201314D6C7A93CDF*, ::System::UInt32, ::RPG::MVector3, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_METHOD_1_B318D49370D30C5F_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector3 Method_1_B57121EB42C11E9C(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_METHOD_1_B57121EB42C11E9C_OFFSET))(this, a1);
	}

	::Class_1_201314D6C7A93CDF* Method_1_D7862DDFEBFBA0AF()
	{
		return ((::Class_1_201314D6C7A93CDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_METHOD_1_D7862DDFEBFBA0AF_OFFSET))(this);
	}

	::System::Void Method_1_E74F58C0D089392C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_METHOD_1_E74F58C0D089392C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E919D64CB8CCD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
