#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x12CB06D0)
#define CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x12CB0720)
#define CLASS_1_D9E31DBDCCF0E950_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12CB0710)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_2_TypeDefinitionIndex = 57622;

class Class_1_D9E31DBDCCF0E950_2 : public ::System::Object
{
public:
	::Struct_2_D9E98FAEB7FF7336 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2__CTOR_OFFSET))(this);
	}

	::Struct_2_D9E98FAEB7FF7336 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_D9E98FAEB7FF7336(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_D9E98FAEB7FF7336 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D9E98FAEB7FF7336))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}
};
