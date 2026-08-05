#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE9C1BB8249D53A5;
class Class_2_208CC9941471731A_684;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_580FDF147B4BEC86_METHOD_1_3E55E7A52DCC0FB9_OFFSET UNITYSDK_OFFSET(0x14F3D600)
#define CLASS_1_580FDF147B4BEC86__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3D5A0)

inline static constexpr unsigned int Class_1_580FDF147B4BEC86_TypeDefinitionIndex = 14055;

class Class_1_580FDF147B4BEC86 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_580FDF147B4BEC86__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_684* Method_1_3E55E7A52DCC0FB9(::Class_1_CE9C1BB8249D53A5* a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_684*(*)(::PVOID, ::Class_1_CE9C1BB8249D53A5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_580FDF147B4BEC86_METHOD_1_3E55E7A52DCC0FB9_OFFSET))(this, a1, a2);
	}
};
