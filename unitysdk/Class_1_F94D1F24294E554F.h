#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F94D1F24294E554F_METHOD_1_E5204C0EB6EBF361_OFFSET UNITYSDK_OFFSET(0x10744400)
#define CLASS_1_F94D1F24294E554F__CTOR_OFFSET UNITYSDK_OFFSET(0x10744340)

inline static constexpr unsigned int Class_1_F94D1F24294E554F_TypeDefinitionIndex = 45909;

class Class_1_F94D1F24294E554F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x10
	::Class_2_604149159BD159AA* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_F94D1F24294E554F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5204C0EB6EBF361(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_F94D1F24294E554F_METHOD_1_E5204C0EB6EBF361_OFFSET))(this, a1);
	}
};
