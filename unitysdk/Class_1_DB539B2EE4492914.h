#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5EC8E3A5E7BE15F2;
namespace System { class String; }

#define CLASS_1_DB539B2EE4492914__CTOR_OFFSET UNITYSDK_OFFSET(0x8C223A0)

inline static constexpr unsigned int Class_1_DB539B2EE4492914_TypeDefinitionIndex = 45228;

class Class_1_DB539B2EE4492914 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5EC8E3A5E7BE15F2*>* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB539B2EE4492914__CTOR_OFFSET))(this);
	}
};
