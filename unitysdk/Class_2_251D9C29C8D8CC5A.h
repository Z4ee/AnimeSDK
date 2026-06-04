#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3467D1B5E152C2CB.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xD199350)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xD1990F0)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_596D9113D22B8335_OFFSET UNITYSDK_OFFSET(0xD1993E0)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0xD199440)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD199310)
#define CLASS_2_251D9C29C8D8CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0xD199490)

inline static constexpr unsigned int Class_2_251D9C29C8D8CC5A_TypeDefinitionIndex = 54995;

class Class_2_251D9C29C8D8CC5A : public ::Class_1_3467D1B5E152C2CB
{
public:
	::RPG::Client::NotifyHandler* Field_2_0; // 0x40
	::RPG::Client::NotifyType Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_2_596D9113D22B8335()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_596D9113D22B8335_OFFSET))(this);
	}

	::System::Void Method_2_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
