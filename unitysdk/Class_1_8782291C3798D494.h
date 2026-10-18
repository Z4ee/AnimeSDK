#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace System { class String; }

#define CLASS_1_8782291C3798D494_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C41E0)
#define CLASS_1_8782291C3798D494__CTOR_OFFSET UNITYSDK_OFFSET(0x155C42B0)

inline static constexpr unsigned int Class_1_8782291C3798D494_TypeDefinitionIndex = 55868;

class Class_1_8782291C3798D494 : public ::System::Object
{
public:
	::System::String* DIEKBKFIFLK; // 0x10
	::Class_3_07C3C4D2990C49EE* NGEALADFOOA; // 0x18
	::System::Int32 EFEPKLBFGBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8782291C3798D494__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8782291C3798D494_DISPOSE_OFFSET))(this);
	}
};
