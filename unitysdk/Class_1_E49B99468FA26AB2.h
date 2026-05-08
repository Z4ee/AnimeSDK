#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E5778BB52E10271;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E49B99468FA26AB2__CTOR_OFFSET UNITYSDK_OFFSET(0x11263720)

inline static constexpr unsigned int Class_1_E49B99468FA26AB2_TypeDefinitionIndex = 73543;

class Class_1_E49B99468FA26AB2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E49B99468FA26AB2__CTOR_OFFSET))(this);
	}
};
