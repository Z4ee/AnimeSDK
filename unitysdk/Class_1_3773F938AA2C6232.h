#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_51B971E69E38047E_Enum_3_7A3F54FF62AD1D47.h"
#include "unitysdk/System/Object.h"

class Class_1_3031E0A4B54925F5;
class Class_1_EC682544DE1271C8;
class Class_2_208CC9941471731A_705;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3773F938AA2C6232_METHOD_1_FA17B1D576A8D703_OFFSET UNITYSDK_OFFSET(0x13D0D620)
#define CLASS_1_3773F938AA2C6232__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0D590)

inline static constexpr unsigned int Class_1_3773F938AA2C6232_TypeDefinitionIndex = 87641;

class Class_1_3773F938AA2C6232 : public ::System::Object
{
public:
	::Class_1_3031E0A4B54925F5* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EC682544DE1271C8*>* Field_1_1; // 0x18
	::Class_2_51B971E69E38047E_Enum_3_7A3F54FF62AD1D47 Field_1_6; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3773F938AA2C6232__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_705* Method_1_FA17B1D576A8D703()
	{
		return ((::Class_2_208CC9941471731A_705*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3773F938AA2C6232_METHOD_1_FA17B1D576A8D703_OFFSET))(this);
	}
};
