#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04477E61F1A460E6_Class_1_7F895BF043FFC385;
class Class_1_046D7E7D73E44996;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_04477E61F1A460E6_METHOD_1_0F909D155E3D86F8_OFFSET UNITYSDK_OFFSET(0xAA3E680)
#define CLASS_1_04477E61F1A460E6_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAA3E9E0)
#define CLASS_1_04477E61F1A460E6_METHOD_1_C787BCE30DA8812F_OFFSET UNITYSDK_OFFSET(0xAA3E5F0)
#define CLASS_1_04477E61F1A460E6_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0xAA3E7A0)
#define CLASS_1_04477E61F1A460E6_METHOD_1_FFE2EA06661B93F5_OFFSET UNITYSDK_OFFSET(0xAA3EB00)
#define CLASS_1_04477E61F1A460E6__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3F060)

inline static constexpr unsigned int Class_1_04477E61F1A460E6_TypeDefinitionIndex = 61461;

class Class_1_04477E61F1A460E6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x14; // 0x0
	::System::Collections::Generic::Queue_1<::Class_1_04477E61F1A460E6_Class_1_7F895BF043FFC385*>* Field_1_5; // 0x10
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C787BCE30DA8812F(::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_METHOD_1_C787BCE30DA8812F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F909D155E3D86F8(::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_METHOD_1_0F909D155E3D86F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_FFE2EA06661B93F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_METHOD_1_FFE2EA06661B93F5_OFFSET))(this, a1);
	}
};
