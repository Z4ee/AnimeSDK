#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B2F925D6B1C8426F;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE966CAF6C3A4852_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xDE2CB00)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_3FACD83836441927_OFFSET UNITYSDK_OFFSET(0xDE2CDD0)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0xDE2CC70)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xDE2CB80)
#define CLASS_1_FE966CAF6C3A4852_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xDE2CD30)
#define CLASS_1_FE966CAF6C3A4852__CTOR_OFFSET UNITYSDK_OFFSET(0xDE2CEA0)

inline static constexpr unsigned int Class_1_FE966CAF6C3A4852_TypeDefinitionIndex = 68568;

class Class_1_FE966CAF6C3A4852 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B2F925D6B1C8426F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_B2F925D6B1C8426F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B2F925D6B1C8426F*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_B2F925D6B1C8426F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B2F925D6B1C8426F*))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B2F925D6B1C8426F*>* Method_1_3FACD83836441927()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B2F925D6B1C8426F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE966CAF6C3A4852_METHOD_1_3FACD83836441927_OFFSET))(this);
	}
};
