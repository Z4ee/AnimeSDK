#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1670EA40)
#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1670EE20)
#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x1670F030)
#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_853C4BAB67B66148_OFFSET UNITYSDK_OFFSET(0x1670DC80)
#define CLASS_2_B82F43BE25916F7C_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1670DC70)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_14_TypeDefinitionIndex = 81633;

class Class_2_B82F43BE25916F7C_14 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_853C4BAB67B66148(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_853C4BAB67B66148_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}
};
