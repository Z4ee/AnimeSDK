#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A1BFBEED80515F5F.h"

class Class_1_8127A0E66BE3BB12;
class Class_1_A767C3DCD789E4BF;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_E1BEE2F41017CF0B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC77CCF0)
#define CLASS_4_E1BEE2F41017CF0B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC77CDC0)
#define CLASS_4_E1BEE2F41017CF0B_METHOD_4_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xC77C900)
#define CLASS_4_E1BEE2F41017CF0B_METHOD_4_B35E7E320C6E607B_OFFSET UNITYSDK_OFFSET(0xC77CA60)
#define CLASS_4_E1BEE2F41017CF0B_METHOD_4_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC77CC00)
#define CLASS_4_E1BEE2F41017CF0B_METHOD_4_D5F28AFD29B39D22_OFFSET UNITYSDK_OFFSET(0xC77CAF0)
#define CLASS_4_E1BEE2F41017CF0B__CTOR_OFFSET UNITYSDK_OFFSET(0xC77CE60)
#define CLASS_4_E1BEE2F41017CF0B__ONBIND_OFFSET UNITYSDK_OFFSET(0xC77C800)

inline static constexpr unsigned int Class_4_E1BEE2F41017CF0B_TypeDefinitionIndex = 71256;

class Class_4_E1BEE2F41017CF0B : public ::Class_3_A1BFBEED80515F5F
{
public:
	::Class_1_A767C3DCD789E4BF* EKDLLLIPKEE; // 0x138
	::System::String* CHAMNLJOFII; // 0x140
	::UnityEngine::UI::Image* IGPGEAPACDK; // 0x148
	::UnityEngine::UI::Image* KEFCOKPMPDO; // 0x150

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_METHOD_4_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_4_B35E7E320C6E607B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_METHOD_4_B35E7E320C6E607B_OFFSET))(this);
	}

	::System::Void Method_4_D5F28AFD29B39D22(::Class_1_8127A0E66BE3BB12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8127A0E66BE3BB12*))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_METHOD_4_D5F28AFD29B39D22_OFFSET))(this, a1);
	}

	::System::Void Method_4_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_METHOD_4_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1BEE2F41017CF0B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
