#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32338A82C4129BDE;
class Class_1_6AE08EF87FF0FFCC;
namespace System { class Type; }

#define CLASS_1_19D95B7F48200F16_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x104BEBA0)
#define CLASS_1_19D95B7F48200F16_METHOD_1_77DF5DA6F37BF810_OFFSET UNITYSDK_OFFSET(0x104BEC10)
#define CLASS_1_19D95B7F48200F16_METHOD_1_7D5A1113A0454294_OFFSET UNITYSDK_OFFSET(0x104BEF40)
#define CLASS_1_19D95B7F48200F16__CTOR_OFFSET UNITYSDK_OFFSET(0x104BEEF0)

inline static constexpr unsigned int Class_1_19D95B7F48200F16_TypeDefinitionIndex = 50868;

class Class_1_19D95B7F48200F16 : public ::System::Object
{
public:
	::Class_1_32338A82C4129BDE* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_32338A82C4129BDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32338A82C4129BDE*))((::PBYTE)hIl2Cpp + CLASS_1_19D95B7F48200F16__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D95B7F48200F16_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_77DF5DA6F37BF810()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D95B7F48200F16_METHOD_1_77DF5DA6F37BF810_OFFSET))(this);
	}

	::System::Void Method_1_7D5A1113A0454294(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_19D95B7F48200F16_METHOD_1_7D5A1113A0454294_OFFSET))(this, a1);
	}
};
