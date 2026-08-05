#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_D8BBC44DD4135F68_METHOD_2_61BD14BCB4E5A836_OFFSET UNITYSDK_OFFSET(0x125280A0)
#define CLASS_2_D8BBC44DD4135F68_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x125288E0)
#define CLASS_2_D8BBC44DD4135F68__CTOR_OFFSET UNITYSDK_OFFSET(0x12528090)

inline static constexpr unsigned int Class_2_D8BBC44DD4135F68_TypeDefinitionIndex = 56266;

class Class_2_D8BBC44DD4135F68 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_D8BBC44DD4135F68__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_61BD14BCB4E5A836(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8BBC44DD4135F68_METHOD_2_61BD14BCB4E5A836_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8BBC44DD4135F68_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};
