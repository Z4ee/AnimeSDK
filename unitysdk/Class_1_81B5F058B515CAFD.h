#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_4049D22E129EA19F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_81B5F058B515CAFD_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x12507F40)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_7073B423B15F467A_OFFSET UNITYSDK_OFFSET(0x12506CC0)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_1_OFFSET UNITYSDK_OFFSET(0x12507500)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_OFFSET UNITYSDK_OFFSET(0x12507390)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x12507670)
#define CLASS_1_81B5F058B515CAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x12506CB0)

inline static constexpr unsigned int Class_1_81B5F058B515CAFD_TypeDefinitionIndex = 82955;

class Class_1_81B5F058B515CAFD : public ::System::Object
{
public:
	::Class_1_1EA8435E138F2E03* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_4049D22E129EA19F*>* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7073B423B15F467A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_7073B423B15F467A_OFFSET))(this);
	}

	::System::Void Method_1_997789EFBC974E21(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_997789EFBC974E21_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::Class_1_4049D22E129EA19F* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_4049D22E129EA19F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}
};
