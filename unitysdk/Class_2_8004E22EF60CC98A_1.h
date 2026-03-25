#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_2;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8004E22EF60CC98A_1_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x8C92F80)
#define CLASS_2_8004E22EF60CC98A_1_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x8C931D0)
#define CLASS_2_8004E22EF60CC98A_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C932D0)
#define CLASS_2_8004E22EF60CC98A_1_METHOD_2_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0x8C93050)
#define CLASS_2_8004E22EF60CC98A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8C93240)
#define CLASS_2_8004E22EF60CC98A_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C92D90)
#define CLASS_2_8004E22EF60CC98A_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C93270)

inline static constexpr unsigned int Class_2_8004E22EF60CC98A_1_TypeDefinitionIndex = 58666;

class Class_2_8004E22EF60CC98A_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::RPG::Client::LocalizedText* Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_6161A7BAB784EB4F(::Class_1_6CE70F4211D79CD5_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_2*))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1_METHOD_2_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
