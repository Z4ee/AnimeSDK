#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7BC4AD84E3C2C80.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_55;
class Class_3_01B4CC30216C9ABE;
class Class_3_FFA05EDEE0611C83;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F859E651E3F62DC7_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1E1C2630)
#define CLASS_1_F859E651E3F62DC7_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x1E1C2740)
#define CLASS_1_F859E651E3F62DC7_METHOD_1_CE4C49110ABC62F1_OFFSET UNITYSDK_OFFSET(0x1E1C2670)
#define CLASS_1_F859E651E3F62DC7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C2550)
#define CLASS_1_F859E651E3F62DC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C24B0)

inline static constexpr unsigned int Class_1_F859E651E3F62DC7_TypeDefinitionIndex = 92100;

class Class_1_F859E651E3F62DC7 : public ::System::Object
{
public:
	::Class_3_FFA05EDEE0611C83* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7807B2B04302CD7B_55*>* Field_1_6; // 0x18
	::Enum_3_B7BC4AD84E3C2C80 Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::Int32 Field_1_7; // 0x28
	::System::UInt32 Field_1_1; // 0x2C

	::System::Void _ctor(::Class_3_FFA05EDEE0611C83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FFA05EDEE0611C83*))((::PBYTE)hIl2Cpp + CLASS_1_F859E651E3F62DC7__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F859E651E3F62DC7_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F859E651E3F62DC7_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Class_3_01B4CC30216C9ABE* Method_1_CE4C49110ABC62F1()
	{
		return ((::Class_3_01B4CC30216C9ABE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F859E651E3F62DC7_METHOD_1_CE4C49110ABC62F1_OFFSET))(this);
	}

	::Class_1_7807B2B04302CD7B_55* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_7807B2B04302CD7B_55*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F859E651E3F62DC7_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}
};
