#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_77D255857CC40452__CTOR_OFFSET UNITYSDK_OFFSET(0x159E33D0)

inline static constexpr unsigned int Class_1_77D255857CC40452_TypeDefinitionIndex = 49714;

class Class_1_77D255857CC40452 : public ::System::Object
{
public:
	::Class_1_0D6706375CDAAE8C* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D255857CC40452__CTOR_OFFSET))(this);
	}
};
