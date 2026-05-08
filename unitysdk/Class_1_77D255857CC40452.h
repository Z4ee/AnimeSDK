#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_77D255857CC40452__CTOR_OFFSET UNITYSDK_OFFSET(0x14195660)

inline static constexpr unsigned int Class_1_77D255857CC40452_TypeDefinitionIndex = 63171;

class Class_1_77D255857CC40452 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_83665B095F1535B5_2*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D255857CC40452__CTOR_OFFSET))(this);
	}
};
