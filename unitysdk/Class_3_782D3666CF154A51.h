#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_782D3666CF154A51_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15623420)
#define CLASS_3_782D3666CF154A51_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15623410)
#define CLASS_3_782D3666CF154A51_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15623390)
#define CLASS_3_782D3666CF154A51_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15623350)
#define CLASS_3_782D3666CF154A51__CTOR_OFFSET UNITYSDK_OFFSET(0x156233D0)

inline static constexpr unsigned int Class_3_782D3666CF154A51_TypeDefinitionIndex = 59548;

class Class_3_782D3666CF154A51 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_782D3666CF154A51*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_5; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x40
	::System::Int32 Field_3_0; // 0x48
	::System::Int32 Field_3_3; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782D3666CF154A51__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782D3666CF154A51_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782D3666CF154A51_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782D3666CF154A51_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782D3666CF154A51_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
