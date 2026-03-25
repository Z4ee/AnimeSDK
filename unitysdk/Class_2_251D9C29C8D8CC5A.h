#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3467D1B5E152C2CB.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xEA52920)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xEA52650)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0xEA52980)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xEA528A0)
#define CLASS_2_251D9C29C8D8CC5A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEA52860)
#define CLASS_2_251D9C29C8D8CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0xEA529D0)

inline static constexpr unsigned int Class_2_251D9C29C8D8CC5A_TypeDefinitionIndex = 47531;

class Class_2_251D9C29C8D8CC5A : public ::Class_1_3467D1B5E152C2CB
{
public:
	::RPG::Client::NotifyHandler* Field_2_1; // 0x40
	::RPG::Client::NotifyType Field_2_0; // 0x48

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

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_2_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_251D9C29C8D8CC5A_METHOD_2_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
