#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_164.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define CLASS_2_FFF9083835D38A52_CLEAR_OFFSET UNITYSDK_OFFSET(0x973C030)
#define CLASS_2_FFF9083835D38A52_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x973BF80)
#define CLASS_2_FFF9083835D38A52_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x973C0D0)
#define CLASS_2_FFF9083835D38A52_METHOD_2_8428F9EC30A8DECC_OFFSET UNITYSDK_OFFSET(0x973C080)
#define CLASS_2_FFF9083835D38A52__CTOR_OFFSET UNITYSDK_OFFSET(0x973C0E0)

inline static constexpr unsigned int Class_2_FFF9083835D38A52_TypeDefinitionIndex = 67572;

class Class_2_FFF9083835D38A52 : public ::Class_1_43BD383C98B4C0C5_164
{
public:
	::System::Collections::IList* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF9083835D38A52__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_FFF9083835D38A52_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF9083835D38A52_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8428F9EC30A8DECC(::System::Collections::IList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_2_FFF9083835D38A52_METHOD_2_8428F9EC30A8DECC_OFFSET))(this, a1);
	}

	::System::Collections::IList* get_Parameters()
	{
		return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF9083835D38A52_GET_PARAMETERS_OFFSET))(this);
	}
};
