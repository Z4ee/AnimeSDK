#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6CFD545CB9F30D6;
namespace MoleMole { class UICinemaInvitePageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_270AC9529BDD8E1A_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xFB1A630)
#define CLASS_1_270AC9529BDD8E1A_METHOD_1_75AEAD55E0E3A11F_OFFSET UNITYSDK_OFFSET(0xFB1A680)
#define CLASS_1_270AC9529BDD8E1A_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xFB1A5E0)
#define CLASS_1_270AC9529BDD8E1A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB1A5A0)
#define CLASS_1_270AC9529BDD8E1A__CTOR_OFFSET UNITYSDK_OFFSET(0xFB1A670)

inline static constexpr unsigned int Class_1_270AC9529BDD8E1A_TypeDefinitionIndex = 54661;

class Class_1_270AC9529BDD8E1A : public ::System::Object
{
public:
	::MoleMole::UICinemaInvitePageController* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_270AC9529BDD8E1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_270AC9529BDD8E1A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_270AC9529BDD8E1A_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C6CFD545CB9F30D6*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C6CFD545CB9F30D6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_270AC9529BDD8E1A_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_75AEAD55E0E3A11F(::MoleMole::UICinemaInvitePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaInvitePageController*))((::PBYTE)hIl2Cpp + CLASS_1_270AC9529BDD8E1A_METHOD_1_75AEAD55E0E3A11F_OFFSET))(this, a1);
	}
};
