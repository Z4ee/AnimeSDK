#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_11_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0xE91B5C0)
#define CLASS_2_B82F43BE25916F7C_11_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0xE91B7D0)
#define CLASS_2_B82F43BE25916F7C_11_METHOD_2_853C4BAB67B66148_OFFSET UNITYSDK_OFFSET(0xE91A430)
#define CLASS_2_B82F43BE25916F7C_11_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xE91B1E0)
#define CLASS_2_B82F43BE25916F7C_11__CTOR_OFFSET UNITYSDK_OFFSET(0xE91A420)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_11_TypeDefinitionIndex = 57776;

class Class_2_B82F43BE25916F7C_11 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_11__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_853C4BAB67B66148(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_11_METHOD_2_853C4BAB67B66148_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_11_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_11_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_11_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}
};
