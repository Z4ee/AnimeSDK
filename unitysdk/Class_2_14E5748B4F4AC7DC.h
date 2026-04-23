#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x11D66430)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x11D66300)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_850D9AEA61D237DC_OFFSET UNITYSDK_OFFSET(0x11D661D0)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x11D663B0)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11D664E0)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_E9E55F90B2DD5E38_OFFSET UNITYSDK_OFFSET(0x11D66560)
#define CLASS_2_14E5748B4F4AC7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x11D66630)

inline static constexpr unsigned int Class_2_14E5748B4F4AC7DC_TypeDefinitionIndex = 65833;

class Class_2_14E5748B4F4AC7DC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::String* Field_2_7; // 0x60
	::UnityEngine::GameObject* Field_2_4; // 0x68
	::UnityEngine::Animator* Field_2_5; // 0x70
	::System::Int32 Field_2_2; // 0x78
	::System::Int32 Field_2_3; // 0x7C
	::System::Int32 Field_2_0; // 0x80
	::System::Boolean Field_2_6; // 0x84
	::System::Int32 Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_850D9AEA61D237DC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_850D9AEA61D237DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_E9E55F90B2DD5E38(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_E9E55F90B2DD5E38_OFFSET))(this, a1);
	}
};
