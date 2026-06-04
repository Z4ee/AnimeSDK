#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define CLASS_2_3C5644B873C48995_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13B4E340)
#define CLASS_2_3C5644B873C48995_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x13B4E1D0)
#define CLASS_2_3C5644B873C48995__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E310)
#define CLASS_2_3C5644B873C48995__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B4E260)
#define CLASS_2_3C5644B873C48995___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B4E3A0)

inline static constexpr unsigned int Class_2_3C5644B873C48995_TypeDefinitionIndex = 66642;

class Class_2_3C5644B873C48995 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C5644B873C48995__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3C5644B873C48995_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C5644B873C48995__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3C5644B873C48995_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C5644B873C48995___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
