#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_481;
class Class_3_C3F0E3B5AB5977AE_18;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B30EB13395677771_CLASS_1_00B585FF8C552EB6__CTOR_OFFSET UNITYSDK_OFFSET(0x114B6E60)

inline static constexpr unsigned int Class_2_B30EB13395677771_Class_1_00B585FF8C552EB6_TypeDefinitionIndex = 51371;

class Class_2_B30EB13395677771_Class_1_00B585FF8C552EB6 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_481* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_18*>* Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x21

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_1_00B585FF8C552EB6__CTOR_OFFSET))(this, a1);
	}
};
