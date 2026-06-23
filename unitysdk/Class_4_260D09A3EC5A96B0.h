#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_260D09A3EC5A96B0_METHOD_4_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x11D5DBF0)
#define CLASS_4_260D09A3EC5A96B0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11D5E2D0)
#define CLASS_4_260D09A3EC5A96B0_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11D5DA40)
#define CLASS_4_260D09A3EC5A96B0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5E170)

inline static constexpr unsigned int Class_4_260D09A3EC5A96B0_TypeDefinitionIndex = 60910;

class Class_4_260D09A3EC5A96B0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_260D09A3EC5A96B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_260D09A3EC5A96B0_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_260D09A3EC5A96B0_METHOD_4_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_260D09A3EC5A96B0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
