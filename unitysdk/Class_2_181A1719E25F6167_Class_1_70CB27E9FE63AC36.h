#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_2_00CA65E821B3E470;
class Class_2_208CC9941471731A_418;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_181A1719E25F6167_CLASS_1_70CB27E9FE63AC36__CTOR_OFFSET UNITYSDK_OFFSET(0x15572C50)

inline static constexpr unsigned int Class_2_181A1719E25F6167_Class_1_70CB27E9FE63AC36_TypeDefinitionIndex = 75576;

class Class_2_181A1719E25F6167_Class_1_70CB27E9FE63AC36 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_00CA65E821B3E470*>* Field_1_0; // 0x10
	::Class_1_1EA8435E138F2E03* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_208CC9941471731A_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_418*))((::PBYTE)hIl2Cpp + CLASS_2_181A1719E25F6167_CLASS_1_70CB27E9FE63AC36__CTOR_OFFSET))(this, a1);
	}
};
