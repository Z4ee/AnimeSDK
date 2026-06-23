#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C0912EDB57890BE6_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14485BE0)
#define CLASS_2_C0912EDB57890BE6_METHOD_2_194E52137EC367C9_OFFSET UNITYSDK_OFFSET(0x14485670)
#define CLASS_2_C0912EDB57890BE6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x144853C0)
#define CLASS_2_C0912EDB57890BE6_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x144855E0)
#define CLASS_2_C0912EDB57890BE6_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14485C20)
#define CLASS_2_C0912EDB57890BE6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14485B40)
#define CLASS_2_C0912EDB57890BE6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144854E0)
#define CLASS_2_C0912EDB57890BE6__CCTOR_OFFSET UNITYSDK_OFFSET(0x14485560)
#define CLASS_2_C0912EDB57890BE6__CTOR_OFFSET UNITYSDK_OFFSET(0x144855D0)

inline static constexpr unsigned int Class_2_C0912EDB57890BE6_TypeDefinitionIndex = 83551;

class Class_2_C0912EDB57890BE6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x70; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x30
	::System::Boolean Field_2_0; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_194E52137EC367C9(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::List_1<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_194E52137EC367C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0912EDB57890BE6_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
