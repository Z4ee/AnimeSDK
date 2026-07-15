#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_491E50B6E3A58276_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_491E50B6E3A58276__CTOR_OFFSET UNITYSDK_OFFSET(0x14698A30)

inline static constexpr unsigned int Class_1_491E50B6E3A58276_TypeDefinitionIndex = 47790;

class Class_1_491E50B6E3A58276 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_491E50B6E3A58276_1*>* Field_1_0; // 0x10
	::Class_1_491E50B6E3A58276_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_491E50B6E3A58276__CTOR_OFFSET))(this);
	}
};
