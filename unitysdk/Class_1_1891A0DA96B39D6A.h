#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ControlType.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_1891A0DA96B39D6A_METHOD_1_1DB47BDCF61DE5D9_OFFSET UNITYSDK_OFFSET(0x1920BD00)
#define CLASS_1_1891A0DA96B39D6A_METHOD_1_C351BAA077A16D49_OFFSET UNITYSDK_OFFSET(0x1920C060)
#define CLASS_1_1891A0DA96B39D6A_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1920BCB0)
#define CLASS_1_1891A0DA96B39D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1920C250)

inline static constexpr unsigned int Class_1_1891A0DA96B39D6A_TypeDefinitionIndex = 70003;

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

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_1DB47BDCF61DE5D9(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_1DB47BDCF61DE5D9_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::ControlType Method_1_C351BAA077A16D49()
	{
		return ((::RPG::Client::ControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1891A0DA96B39D6A_METHOD_1_C351BAA077A16D49_OFFSET))(this);
	}
};
