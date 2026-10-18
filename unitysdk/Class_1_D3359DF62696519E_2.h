#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_30C7E5C640F89710;
class Class_1_F4C0A89701E5181C;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D3359DF62696519E_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB886390)
#define CLASS_1_D3359DF62696519E_2_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB885AE0)
#define CLASS_1_D3359DF62696519E_2_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xB885BD0)
#define CLASS_1_D3359DF62696519E_2_METHOD_1_F0F8DE036FE283F6_1_OFFSET UNITYSDK_OFFSET(0xB886440)
#define CLASS_1_D3359DF62696519E_2_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xB885B80)
#define CLASS_1_D3359DF62696519E_2_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB885AF0)
#define CLASS_1_D3359DF62696519E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB885B00)

inline static constexpr unsigned int Class_1_D3359DF62696519E_2_TypeDefinitionIndex = 79578;

class Class_1_D3359DF62696519E_2 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F4C0A89701E5181C*>* _Traits_k__BackingField; // 0x10
	::Class_1_30C7E5C640F89710* JOKBAPFCJFM; // 0x18

	::System::Void _ctor(::Class_1_30C7E5C640F89710* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30C7E5C640F89710*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F4C0A89701E5181C*>* get_Traits()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F4C0A89701E5181C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_GET_TRAITS_OFFSET))(this);
	}

	::System::Void set_Traits(::System::Collections::Generic::IReadOnlyList_1<::Class_1_F4C0A89701E5181C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_F4C0A89701E5181C*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_SET_TRAITS_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_METHOD_1_F0F8DE036FE283F6_1_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}
};
