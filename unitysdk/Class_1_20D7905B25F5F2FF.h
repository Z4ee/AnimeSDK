#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyModifierExtraParamsType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_20D7905B25F5F2FF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C54610)
#define CLASS_1_20D7905B25F5F2FF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18C54910)
#define CLASS_1_20D7905B25F5F2FF_METHOD_1_33D9277D1D76DE9B_OFFSET UNITYSDK_OFFSET(0x18C54670)
#define CLASS_1_20D7905B25F5F2FF_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x18C54990)
#define CLASS_1_20D7905B25F5F2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x18C54FE0)

inline static constexpr unsigned int Class_1_20D7905B25F5F2FF_TypeDefinitionIndex = 71511;

class Class_1_20D7905B25F5F2FF : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_6; // 0x20
	::MoleMole::Config::MaterialPropertyModifierExtraParamsType Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D7905B25F5F2FF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20D7905B25F5F2FF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_20D7905B25F5F2FF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_33D9277D1D76DE9B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20D7905B25F5F2FF_METHOD_1_33D9277D1D76DE9B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_20D7905B25F5F2FF_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
