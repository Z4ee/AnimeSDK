#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_260.h"
#include "unitysdk/Struct_2_8FE35F6355424026_1.h"

namespace MoleMole { class UIBabeltowerTrickAvatarRowWidgetController; }
namespace System { class String; }

#define CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_26DF032375CA1E56_OFFSET UNITYSDK_OFFSET(0x16093CE0)
#define CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_2CDCFA89F503A756_OFFSET UNITYSDK_OFFSET(0x16093C60)
#define CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_C1E25A4EB96AF930_OFFSET UNITYSDK_OFFSET(0x16093CF0)
#define CLASS_3_ADFCC89BEC7EE1E8__CTOR_OFFSET UNITYSDK_OFFSET(0x16093C20)

inline static constexpr unsigned int Class_3_ADFCC89BEC7EE1E8_TypeDefinitionIndex = 72824;

class Class_3_ADFCC89BEC7EE1E8 : public ::Class_2_534AF681CC2BD5FD_260<::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*>
{
public:
	::System::Int32 Field_3_2; // 0x28
	::System::Int32 Field_3_1; // 0x2C
	::Struct_2_8FE35F6355424026_1 Field_3_0; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Struct_2_8FE35F6355424026_1 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Struct_2_8FE35F6355424026_1))((::PBYTE)hIl2Cpp + CLASS_3_ADFCC89BEC7EE1E8__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_2CDCFA89F503A756(::MoleMole::UIBabeltowerTrickAvatarRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_2CDCFA89F503A756_OFFSET))(this, a1);
	}

	::System::Void Method_3_26DF032375CA1E56(::MoleMole::UIBabeltowerTrickAvatarRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_26DF032375CA1E56_OFFSET))(this, a1);
	}

	static ::Class_3_ADFCC89BEC7EE1E8* Method_3_C1E25A4EB96AF930(::System::Int32 a1, ::Struct_2_8FE35F6355424026_1 a2)
	{
		return ((::Class_3_ADFCC89BEC7EE1E8*(*)(::System::Int32, ::Struct_2_8FE35F6355424026_1))((::PBYTE)hIl2Cpp + CLASS_3_ADFCC89BEC7EE1E8_METHOD_3_C1E25A4EB96AF930_OFFSET))(a1, a2);
	}
};
