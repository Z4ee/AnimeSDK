#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E_METHOD_1_21A358A17D2D5084_OFFSET UNITYSDK_OFFSET(0x14E1DF20)
#define CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E_METHOD_1_C70A059F3E9BE83A_OFFSET UNITYSDK_OFFSET(0x14E1DCA0)
#define CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x14E12A80)

inline static constexpr unsigned int Class_1_2EB110F542D52C8D_Class_1_1688C5663D71EF4E_TypeDefinitionIndex = 78521;

class Class_1_2EB110F542D52C8D_Class_1_1688C5663D71EF4E : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C70A059F3E9BE83A(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E_METHOD_1_C70A059F3E9BE83A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_21A358A17D2D5084(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_1688C5663D71EF4E_METHOD_1_21A358A17D2D5084_OFFSET))(this, a1, a2, a3);
	}
};
