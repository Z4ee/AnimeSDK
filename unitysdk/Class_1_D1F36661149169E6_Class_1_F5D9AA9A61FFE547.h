#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_1;
class Class_1_D1F36661149169E6;
class Class_4_DA19DD65175B97CF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1F36661149169E6_CLASS_1_F5D9AA9A61FFE547_METHOD_1_46E23EECF1C95426_OFFSET UNITYSDK_OFFSET(0x117B8F40)
#define CLASS_1_D1F36661149169E6_CLASS_1_F5D9AA9A61FFE547__CTOR_OFFSET UNITYSDK_OFFSET(0x117B8F30)

inline static constexpr unsigned int Class_1_D1F36661149169E6_Class_1_F5D9AA9A61FFE547_TypeDefinitionIndex = 58018;

class Class_1_D1F36661149169E6_Class_1_F5D9AA9A61FFE547 : public ::System::Object
{
public:
	::Class_1_D1F36661149169E6* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_1*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_CLASS_1_F5D9AA9A61FFE547__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_46E23EECF1C95426(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_CLASS_1_F5D9AA9A61FFE547_METHOD_1_46E23EECF1C95426_OFFSET))(this, a1);
	}
};
