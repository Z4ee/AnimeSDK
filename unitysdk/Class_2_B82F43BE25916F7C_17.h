#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_17_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x179CBB10)
#define CLASS_2_B82F43BE25916F7C_17_METHOD_2_701FA6266B43D603_OFFSET UNITYSDK_OFFSET(0x179CB2D0)
#define CLASS_2_B82F43BE25916F7C_17__CTOR_OFFSET UNITYSDK_OFFSET(0x179CB2C0)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_17_TypeDefinitionIndex = 74389;

class Class_2_B82F43BE25916F7C_17 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_17__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_701FA6266B43D603(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_17_METHOD_2_701FA6266B43D603_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_17_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};
