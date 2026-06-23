#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E82D879A57075A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165A5020)

inline static constexpr unsigned int Class_1_7E82D879A57075A7_1_TypeDefinitionIndex = 72053;

class Class_1_7E82D879A57075A7_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E82D879A57075A7_1__CTOR_OFFSET))(this);
	}
};
