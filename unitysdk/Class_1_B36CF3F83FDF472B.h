#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046D7E7D73E44996;
namespace RPG::Client { class PSManager; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B36CF3F83FDF472B_METHOD_1_0C3EB93BBF68E6E6_1_OFFSET UNITYSDK_OFFSET(0x10A97490)
#define CLASS_1_B36CF3F83FDF472B_METHOD_1_0C3EB93BBF68E6E6_OFFSET UNITYSDK_OFFSET(0x10A97360)
#define CLASS_1_B36CF3F83FDF472B_METHOD_1_89FE5E6F36ECBFED_OFFSET UNITYSDK_OFFSET(0x10A975C0)
#define CLASS_1_B36CF3F83FDF472B__CTOR_OFFSET UNITYSDK_OFFSET(0x10A975F0)

inline static constexpr unsigned int Class_1_B36CF3F83FDF472B_TypeDefinitionIndex = 52172;

class Class_1_B36CF3F83FDF472B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B36CF3F83FDF472B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C3EB93BBF68E6E6(::System::Action_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_B36CF3F83FDF472B_METHOD_1_0C3EB93BBF68E6E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C3EB93BBF68E6E6_1(::System::Action_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_B36CF3F83FDF472B_METHOD_1_0C3EB93BBF68E6E6_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PSManager* Method_1_89FE5E6F36ECBFED()
	{
		return ((::RPG::Client::PSManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B36CF3F83FDF472B_METHOD_1_89FE5E6F36ECBFED_OFFSET))(this);
	}
};
