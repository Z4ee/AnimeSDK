#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DB3DD38167790643;
class Class_3_87492AF8E794E45E_44;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_DB3DD38167790643_CLASS_1_5D747EA84488D657_METHOD_1_A3B750FF0054A8C9_OFFSET UNITYSDK_OFFSET(0x1AC3C110)
#define CLASS_2_DB3DD38167790643_CLASS_1_5D747EA84488D657__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3C100)

inline static constexpr unsigned int Class_2_DB3DD38167790643_Class_1_5D747EA84488D657_TypeDefinitionIndex = 51678;

class Class_2_DB3DD38167790643_Class_1_5D747EA84488D657 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_87492AF8E794E45E_44*>* Field_1_6; // 0x10
	::Class_2_DB3DD38167790643* Field_1_1; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB3DD38167790643_CLASS_1_5D747EA84488D657__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3B750FF0054A8C9(::Class_3_87492AF8E794E45E_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_44*))((::PBYTE)hIl2Cpp + CLASS_2_DB3DD38167790643_CLASS_1_5D747EA84488D657_METHOD_1_A3B750FF0054A8C9_OFFSET))(this, a1);
	}
};
