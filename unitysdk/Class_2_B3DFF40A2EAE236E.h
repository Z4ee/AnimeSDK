#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6312566761D69A.h"

namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_B3DFF40A2EAE236E_METHOD_2_1C6136E170351E7E_OFFSET UNITYSDK_OFFSET(0x179D3400)
#define CLASS_2_B3DFF40A2EAE236E_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x179D3530)
#define CLASS_2_B3DFF40A2EAE236E__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3180)

inline static constexpr unsigned int Class_2_B3DFF40A2EAE236E_TypeDefinitionIndex = 62217;

class Class_2_B3DFF40A2EAE236E : public ::Class_1_ED6312566761D69A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3DFF40A2EAE236E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1C6136E170351E7E(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B3DFF40A2EAE236E_METHOD_2_1C6136E170351E7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3DFF40A2EAE236E_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}
};
