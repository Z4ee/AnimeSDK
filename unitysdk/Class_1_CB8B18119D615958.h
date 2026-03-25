#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B278F2E496DACE9A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CB8B18119D615958_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A6DC0)
#define CLASS_1_CB8B18119D615958__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A6F70)

inline static constexpr unsigned int Class_1_CB8B18119D615958_TypeDefinitionIndex = 46111;

class Class_1_CB8B18119D615958 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B278F2E496DACE9A*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B18119D615958__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B18119D615958_DISPOSE_OFFSET))(this);
	}
};
