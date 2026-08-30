#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7968F86BC6ACC74;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_973AEE2294153826__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DEB80)

inline static constexpr unsigned int Class_1_973AEE2294153826_TypeDefinitionIndex = 49370;

class Class_1_973AEE2294153826 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C7968F86BC6ACC74*>* Items; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_973AEE2294153826__CTOR_OFFSET))(this);
	}
};
