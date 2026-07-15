#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_8844A4E6AE686D5C_6;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_EA3A29E15425EA01_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x18BB50C0)
#define CLASS_2_EA3A29E15425EA01_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x18BB5200)
#define CLASS_2_EA3A29E15425EA01_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BB5070)
#define CLASS_2_EA3A29E15425EA01_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x18BB5290)
#define CLASS_2_EA3A29E15425EA01_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x18BB5170)
#define CLASS_2_EA3A29E15425EA01_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x18BB5110)
#define CLASS_2_EA3A29E15425EA01_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x18BB5000)
#define CLASS_2_EA3A29E15425EA01__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB5410)

inline static constexpr unsigned int Class_2_EA3A29E15425EA01_TypeDefinitionIndex = 62034;

class Class_2_EA3A29E15425EA01 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01__CTOR_OFFSET))(this);
	}

	::System::Void UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_UPDATESTART_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_PREUPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3A29E15425EA01_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
