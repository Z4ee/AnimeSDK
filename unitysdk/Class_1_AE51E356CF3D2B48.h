#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE51E356CF3D2B48__CTOR_OFFSET UNITYSDK_OFFSET(0x1571E470)

inline static constexpr unsigned int Class_1_AE51E356CF3D2B48_TypeDefinitionIndex = 66637;

class Class_1_AE51E356CF3D2B48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE51E356CF3D2B48__CTOR_OFFSET))(this);
	}
};
