#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3EE7A6A96DB9FA9B.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_3095BEE394F7510C_OFFSET UNITYSDK_OFFSET(0x176BDD30)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x176BDCA0)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x176BDA60)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x176BDD90)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x176BDC60)
#define CLASS_2_251D9C29C8D8CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x176BDDE0)

inline static constexpr unsigned int Class_2_251D9C29C8D8CC5A_TypeDefinitionIndex = 56228;

class Class_2_251D9C29C8D8CC5A : public ::Class_1_3EE7A6A96DB9FA9B
{
public:
	::RPG::Client::NotifyHandler* Field_2_0; // 0x40
	::RPG::Client::NotifyType Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_2_3095BEE394F7510C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_3095BEE394F7510C_OFFSET))(this);
	}

	::System::Void Method_2_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
