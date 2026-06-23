#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_5B30A91CD8F11E40.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6ACACA0DC05B90E7_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x19ECA480)
#define STRUCT_2_6ACACA0DC05B90E7_METHOD_2_C173C4CFF0D25751_OFFSET UNITYSDK_OFFSET(0x19ECA210)
#define STRUCT_2_6ACACA0DC05B90E7__CTOR_OFFSET UNITYSDK_OFFSET(0x871270)

inline static constexpr unsigned int Struct_2_6ACACA0DC05B90E7_TypeDefinitionIndex = 72298;

struct alignas(8) Struct_2_6ACACA0DC05B90E7
{
	::Struct_2_5B30A91CD8F11E40 Field_2_0; // 0x10
	::Struct_2_5B30A91CD8F11E40 Field_2_1; // 0x20

	::System::Void _ctor(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6ACACA0DC05B90E7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_C173C4CFF0D25751(::Struct_2_6ACACA0DC05B90E7 a1, ::Struct_2_6ACACA0DC05B90E7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_6ACACA0DC05B90E7, ::Struct_2_6ACACA0DC05B90E7))((::PBYTE)hIl2Cpp + STRUCT_2_6ACACA0DC05B90E7_METHOD_2_C173C4CFF0D25751_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_6ACACA0DC05B90E7 a1, ::Struct_2_6ACACA0DC05B90E7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_6ACACA0DC05B90E7, ::Struct_2_6ACACA0DC05B90E7))((::PBYTE)hIl2Cpp + STRUCT_2_6ACACA0DC05B90E7_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}
};
