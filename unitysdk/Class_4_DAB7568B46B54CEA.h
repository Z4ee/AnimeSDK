#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_DAB7568B46B54CEA_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12995D60)
#define CLASS_4_DAB7568B46B54CEA_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x129954D0)
#define CLASS_4_DAB7568B46B54CEA_METHOD_4_EE7453CDD020D346_OFFSET UNITYSDK_OFFSET(0x12995680)
#define CLASS_4_DAB7568B46B54CEA__CTOR_OFFSET UNITYSDK_OFFSET(0x12995C00)

inline static constexpr unsigned int Class_4_DAB7568B46B54CEA_TypeDefinitionIndex = 84171;

class Class_4_DAB7568B46B54CEA : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAB7568B46B54CEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAB7568B46B54CEA_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_EE7453CDD020D346(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_DAB7568B46B54CEA_METHOD_4_EE7453CDD020D346_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAB7568B46B54CEA_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
