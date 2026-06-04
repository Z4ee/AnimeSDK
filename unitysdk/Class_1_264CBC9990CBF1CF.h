#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_264CBC9990CBF1CF_METHOD_1_08C578DC970E5EED_OFFSET UNITYSDK_OFFSET(0x142F1F70)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x142F1F20)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x142F20E0)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_6826D4DE9789BD2A_OFFSET UNITYSDK_OFFSET(0x142F2030)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x142F1EC0)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x142F2400)
#define CLASS_1_264CBC9990CBF1CF_METHOD_1_E84F19001ABFA9DF_OFFSET UNITYSDK_OFFSET(0x142F21D0)
#define CLASS_1_264CBC9990CBF1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x142F2440)

inline static constexpr unsigned int Class_1_264CBC9990CBF1CF_TypeDefinitionIndex = 55864;

class Class_1_264CBC9990CBF1CF : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_08C578DC970E5EED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_08C578DC970E5EED_OFFSET))(this, a1);
	}

	::System::Void Method_1_6826D4DE9789BD2A(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_6826D4DE9789BD2A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_E84F19001ABFA9DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_264CBC9990CBF1CF_METHOD_1_E84F19001ABFA9DF_OFFSET))(this, a1);
	}
};
