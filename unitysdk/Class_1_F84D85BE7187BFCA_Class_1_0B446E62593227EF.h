#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF85135934DD45B5;
class Class_1_F84D85BE7187BFCA;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F84D85BE7187BFCA_CLASS_1_0B446E62593227EF_METHOD_1_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0x15DCB070)
#define CLASS_1_F84D85BE7187BFCA_CLASS_1_0B446E62593227EF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCB060)

inline static constexpr unsigned int Class_1_F84D85BE7187BFCA_Class_1_0B446E62593227EF_TypeDefinitionIndex = 56919;

class Class_1_F84D85BE7187BFCA_Class_1_0B446E62593227EF : public ::System::Object
{
public:
	::System::Action_1<::Class_1_BF85135934DD45B5*>* Field_1_0; // 0x10
	::Class_1_BF85135934DD45B5* Field_1_1; // 0x18
	::Class_1_F84D85BE7187BFCA* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84D85BE7187BFCA_CLASS_1_0B446E62593227EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_88AB60EC06BE78FB(::Class_1_BF85135934DD45B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF85135934DD45B5*))((::PBYTE)hIl2Cpp + CLASS_1_F84D85BE7187BFCA_CLASS_1_0B446E62593227EF_METHOD_1_88AB60EC06BE78FB_OFFSET))(this, a1);
	}
};
