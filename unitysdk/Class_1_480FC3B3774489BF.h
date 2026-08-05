#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_1_480FC3B3774489BF_METHOD_1_1661A8D8E3BA157D_OFFSET UNITYSDK_OFFSET(0x10B361F0)
#define CLASS_1_480FC3B3774489BF_METHOD_1_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x10B361A0)
#define CLASS_1_480FC3B3774489BF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B36160)
#define CLASS_1_480FC3B3774489BF__CTOR_OFFSET UNITYSDK_OFFSET(0x10B36150)

inline static constexpr unsigned int Class_1_480FC3B3774489BF_TypeDefinitionIndex = 62153;

class Class_1_480FC3B3774489BF : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::GraphicSettingProfileBase* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_1_480FC3B3774489BF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_480FC3B3774489BF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_480FC3B3774489BF_METHOD_1_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1661A8D8E3BA157D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_480FC3B3774489BF_METHOD_1_1661A8D8E3BA157D_OFFSET))(this, a1, a2);
	}
};
