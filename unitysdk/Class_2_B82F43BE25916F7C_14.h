#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x103A0050)
#define CLASS_2_B82F43BE25916F7C_14_METHOD_2_D77A433E32B3609D_OFFSET UNITYSDK_OFFSET(0x1039F8C0)
#define CLASS_2_B82F43BE25916F7C_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1039F8B0)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_14_TypeDefinitionIndex = 68913;

class Class_2_B82F43BE25916F7C_14 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D77A433E32B3609D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_D77A433E32B3609D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_14_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};
