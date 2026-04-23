#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ControlType.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_815;
class Class_1_1A781135C1474CFC;
namespace System { class String; }

#define CLASS_1_1891A0DA96B39D6A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xC0D2D20)
#define CLASS_1_1891A0DA96B39D6A_METHOD_1_1DB47BDCF61DE5D9_OFFSET UNITYSDK_OFFSET(0xC0D2D30)
#define CLASS_1_1891A0DA96B39D6A_METHOD_1_C351BAA077A16D49_OFFSET UNITYSDK_OFFSET(0xC0D3090)
#define CLASS_1_1891A0DA96B39D6A__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D3280)

inline static constexpr unsigned int Class_1_1891A0DA96B39D6A_TypeDefinitionIndex = 67555;

class Class_1_1891A0DA96B39D6A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_1DB47BDCF61DE5D9(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_815* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_815*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_1DB47BDCF61DE5D9_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::ControlType Method_1_C351BAA077A16D49()
	{
		return ((::RPG::Client::ControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_C351BAA077A16D49_OFFSET))(this);
	}
};
