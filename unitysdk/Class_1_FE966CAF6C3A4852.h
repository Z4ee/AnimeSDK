#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_13;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE966CAF6C3A4852_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x10540F70)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x10541090)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_6490DE58675C1571_OFFSET UNITYSDK_OFFSET(0x105411C0)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10541150)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x10540FF0)
#define CLASS_1_FE966CAF6C3A4852__CTOR_OFFSET UNITYSDK_OFFSET(0x10541220)

inline static constexpr unsigned int Class_1_FE966CAF6C3A4852_TypeDefinitionIndex = 60177;

class Class_1_FE966CAF6C3A4852 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F3CA30716D4FAF92_13*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_F3CA30716D4FAF92_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_13*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_F3CA30716D4FAF92_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_13*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F3CA30716D4FAF92_13*>* Method_1_6490DE58675C1571()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F3CA30716D4FAF92_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_6490DE58675C1571_OFFSET))(this);
	}
};
