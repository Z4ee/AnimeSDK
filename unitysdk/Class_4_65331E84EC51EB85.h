#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_65331E84EC51EB85_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1991C650)
#define CLASS_4_65331E84EC51EB85_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1991CD10)
#define CLASS_4_65331E84EC51EB85_METHOD_4_3632C47ABCCD20ED_OFFSET UNITYSDK_OFFSET(0x1991C560)
#define CLASS_4_65331E84EC51EB85_METHOD_4_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x1991C7A0)
#define CLASS_4_65331E84EC51EB85_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1991CC80)
#define CLASS_4_65331E84EC51EB85__CTOR_OFFSET UNITYSDK_OFFSET(0x1991CB50)

inline static constexpr unsigned int Class_4_65331E84EC51EB85_TypeDefinitionIndex = 79173;

class Class_4_65331E84EC51EB85 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3632C47ABCCD20ED(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85_METHOD_4_3632C47ABCCD20ED_OFFSET))(this, a1);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_BB5DFAE4FCEC0C51(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85_METHOD_4_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65331E84EC51EB85_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
