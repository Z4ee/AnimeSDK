#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_1_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x13B53730)
#define CLASS_2_B82F43BE25916F7C_1_METHOD_2_D77A433E32B3609D_OFFSET UNITYSDK_OFFSET(0x13B52F50)
#define CLASS_2_B82F43BE25916F7C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B52F40)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_1_TypeDefinitionIndex = 41695;

class Class_2_B82F43BE25916F7C_1 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D77A433E32B3609D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1_METHOD_2_D77A433E32B3609D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};
