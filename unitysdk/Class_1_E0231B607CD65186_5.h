#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61;
class Class_1_AC00AF6C29094205;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A606C50)

inline static constexpr unsigned int Class_1_E0231B607CD65186_5_TypeDefinitionIndex = 40907;

class Class_1_E0231B607CD65186_5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* GGHCKBHGHFC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* EDEBKBFGDFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_5__CTOR_OFFSET))(this);
	}
};
