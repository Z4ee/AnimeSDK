#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B278F2E496DACE9A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C85A365670967EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DF9250)
#define CLASS_1_C85A365670967EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF9380)

inline static constexpr unsigned int Class_1_C85A365670967EA6_TypeDefinitionIndex = 57418;

class Class_1_C85A365670967EA6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B278F2E496DACE9A*>* JPCGMKGIAHD; // 0x10
	::System::Int32 EAJBNHGHPNM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85A365670967EA6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85A365670967EA6_DISPOSE_OFFSET))(this);
	}
};
