#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC76D1702CC17C09;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_D0E664FA3B6613BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DD280)

inline static constexpr unsigned int Class_1_D0E664FA3B6613BD_TypeDefinitionIndex = 40350;

class Class_1_D0E664FA3B6613BD : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_CC76D1702CC17C09*>* DLELAJDGAFE; // 0x10
	::System::Single NFDPPMDBBHH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E664FA3B6613BD__CTOR_OFFSET))(this);
	}
};
