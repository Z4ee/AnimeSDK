#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DD3AE3B6968036D4.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_51;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D6F39883402F739C_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x133D9620)
#define CLASS_1_D6F39883402F739C_POLISH_OFFSET UNITYSDK_OFFSET(0x133D93A0)
#define CLASS_1_D6F39883402F739C_RECYCLE_OFFSET UNITYSDK_OFFSET(0x133D94E0)
#define CLASS_1_D6F39883402F739C__CTOR_OFFSET UNITYSDK_OFFSET(0x133D9610)

inline static constexpr unsigned int Class_1_D6F39883402F739C_TypeDefinitionIndex = 62580;

class Class_1_D6F39883402F739C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::Class_1_43BD383C98B4C0C5_51* Field_1_3; // 0x18
	::System::Single Field_1_10; // 0x20
	::System::Int32 Field_1_11; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::UInt32 Field_1_1; // 0x2C
	::Enum_3_DD3AE3B6968036D4 Field_1_2; // 0x30
	::System::UInt32 Field_1_7; // 0x34
	::System::UInt32 Field_1_0; // 0x38
	::System::Boolean Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6F39883402F739C__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6F39883402F739C_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6F39883402F739C_RECYCLE_OFFSET))(this);
	}

	static ::Class_1_D6F39883402F739C* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D6F39883402F739C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6F39883402F739C_METHOD_1_358A144584A5DBFC_OFFSET))();
	}
};
