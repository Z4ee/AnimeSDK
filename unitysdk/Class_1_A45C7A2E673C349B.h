#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A191518F735366A8;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_A45C7A2E673C349B_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x10595870)
#define CLASS_1_A45C7A2E673C349B_METHOD_1_27A7A836B45390B2_OFFSET UNITYSDK_OFFSET(0x10595840)
#define CLASS_1_A45C7A2E673C349B_METHOD_1_4E1119525909ECFD_OFFSET UNITYSDK_OFFSET(0x10595880)
#define CLASS_1_A45C7A2E673C349B_METHOD_1_670697B71ED1789C_OFFSET UNITYSDK_OFFSET(0x10595850)
#define CLASS_1_A45C7A2E673C349B_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x10595860)
#define CLASS_1_A45C7A2E673C349B_METHOD_1_A773FA9A9BB3A6B3_OFFSET UNITYSDK_OFFSET(0x10595830)
#define CLASS_1_A45C7A2E673C349B__CTOR_OFFSET UNITYSDK_OFFSET(0x10595820)

inline static constexpr unsigned int Class_1_A45C7A2E673C349B_TypeDefinitionIndex = 56153;

class Class_1_A45C7A2E673C349B : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Action_1<::Class_1_A191518F735366A8*>* Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action_1<::Class_1_A191518F735366A8*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A773FA9A9BB3A6B3(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_A773FA9A9BB3A6B3_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_1_27A7A836B45390B2()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_27A7A836B45390B2_OFFSET))(this);
	}

	::System::Void Method_1_670697B71ED1789C(::System::Action_1<::Class_1_A191518F735366A8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_670697B71ED1789C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Action_1<::Class_1_A191518F735366A8*>* Method_1_4E1119525909ECFD()
	{
		return ((::System::Action_1<::Class_1_A191518F735366A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A45C7A2E673C349B_METHOD_1_4E1119525909ECFD_OFFSET))(this);
	}
};
