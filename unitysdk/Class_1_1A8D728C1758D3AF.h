#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define CLASS_1_1A8D728C1758D3AF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1214B120)
#define CLASS_1_1A8D728C1758D3AF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1214B470)
#define CLASS_1_1A8D728C1758D3AF_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x1214B180)
#define CLASS_1_1A8D728C1758D3AF_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1214B4F0)
#define CLASS_1_1A8D728C1758D3AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1214B960)

inline static constexpr unsigned int Class_1_1A8D728C1758D3AF_TypeDefinitionIndex = 54466;

class Class_1_1A8D728C1758D3AF : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A8D728C1758D3AF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A8D728C1758D3AF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1A8D728C1758D3AF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A8D728C1758D3AF_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1A8D728C1758D3AF_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
