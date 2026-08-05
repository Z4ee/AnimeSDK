#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_0D90865F95372B37_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17674230)
#define CLASS_4_0D90865F95372B37_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x176737A0)
#define CLASS_4_0D90865F95372B37_METHOD_4_932AD1B829D6B2DF_OFFSET UNITYSDK_OFFSET(0x17673950)
#define CLASS_4_0D90865F95372B37__CTOR_OFFSET UNITYSDK_OFFSET(0x176740D0)

inline static constexpr unsigned int Class_4_0D90865F95372B37_TypeDefinitionIndex = 90586;

class Class_4_0D90865F95372B37 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0D90865F95372B37__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0D90865F95372B37_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_932AD1B829D6B2DF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0D90865F95372B37_METHOD_4_932AD1B829D6B2DF_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0D90865F95372B37_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
