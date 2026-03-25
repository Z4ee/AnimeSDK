#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_1B7044A592B17773_8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2C765B417BAE8B02_GET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0x8BB1AC0)
#define CLASS_3_2C765B417BAE8B02_METHOD_3_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x8BB1A40)
#define CLASS_3_2C765B417BAE8B02_METHOD_3_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x8BB19B0)
#define CLASS_3_2C765B417BAE8B02_SET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0x8BB1AD0)
#define CLASS_3_2C765B417BAE8B02__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB1910)

inline static constexpr unsigned int Class_3_2C765B417BAE8B02_TypeDefinitionIndex = 60947;

class Class_3_2C765B417BAE8B02 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_8*>* _ContentDatas_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_1B7044A592B17773_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_8*))((::PBYTE)hIl2Cpp + CLASS_3_2C765B417BAE8B02__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_EC61075536D10822(::Class_1_1B7044A592B17773_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_8*))((::PBYTE)hIl2Cpp + CLASS_3_2C765B417BAE8B02_METHOD_3_EC61075536D10822_OFFSET))(this, a1);
	}

	::Class_1_1B7044A592B17773_8* Method_3_358A144584A5DBFC()
	{
		return ((::Class_1_1B7044A592B17773_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C765B417BAE8B02_METHOD_3_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_8*>* get_ContentDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C765B417BAE8B02_GET_CONTENTDATAS_OFFSET))(this);
	}

	::System::Void set_ContentDatas(::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_8*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_8*>*))((::PBYTE)hIl2Cpp + CLASS_3_2C765B417BAE8B02_SET_CONTENTDATAS_OFFSET))(this, value);
	}
};
