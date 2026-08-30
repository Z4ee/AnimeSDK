#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3172A5E6971D457.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEvent; }

#define CLASS_2_A19242EEAD28C9DC_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x1E5BC8E0)
#define CLASS_2_A19242EEAD28C9DC_METHOD_2_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0x1E5BC850)
#define CLASS_2_A19242EEAD28C9DC_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1E5BC760)
#define CLASS_2_A19242EEAD28C9DC_METHOD_2_C3F21EE22F1550A9_OFFSET UNITYSDK_OFFSET(0x1E5BC7C0)
#define CLASS_2_A19242EEAD28C9DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B1D60)

inline static constexpr unsigned int Class_2_A19242EEAD28C9DC_TypeDefinitionIndex = 42385;

class Class_2_A19242EEAD28C9DC : public ::Class_1_A3172A5E6971D457<::UnityEngine::Events::UnityEvent*>
{
public:
	::System::Void _ctor(::System::Object* a1, ::UnityEngine::Events::UnityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + CLASS_2_A19242EEAD28C9DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_2_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A19242EEAD28C9DC_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
	}

	::System::Void Method_2_C3F21EE22F1550A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A19242EEAD28C9DC_METHOD_2_C3F21EE22F1550A9_OFFSET))(this);
	}

	::System::Void Method_2_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A19242EEAD28C9DC_METHOD_2_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A19242EEAD28C9DC_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}
};
