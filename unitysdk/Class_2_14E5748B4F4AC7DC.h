#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x18C8F1D0)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x18C8F0A0)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0x18C8EF30)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x18C8F150)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18C8F280)
#define CLASS_2_14E5748B4F4AC7DC_METHOD_2_E9E55F90B2DD5E38_OFFSET UNITYSDK_OFFSET(0x18C8F300)
#define CLASS_2_14E5748B4F4AC7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8F3C0)

inline static constexpr unsigned int Class_2_14E5748B4F4AC7DC_TypeDefinitionIndex = 71385;

class Class_2_14E5748B4F4AC7DC : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::UnityEngine::GameObject* OIHLFMFFAOB; // 0x68
	::System::String* JEMHPABIGAG; // 0x70
	::System::Int32 EHHMPAJHMMC; // 0x78
	::System::Int32 JOJFJNOGCJG; // 0x7C
	::System::Boolean OGAGNOPLEIH; // 0x80
	::System::Int32 JGHEDODJGMC; // 0x84
	::System::Int32 PAKOENKDCEC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_56F65626149842A5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_56F65626149842A5_OFFSET))(this, a1);
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

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E9E55F90B2DD5E38(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_14E5748B4F4AC7DC_METHOD_2_E9E55F90B2DD5E38_OFFSET))(this, a1);
	}
};
