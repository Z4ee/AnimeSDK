#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_5C7F69784A5C81DE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8004E22EF60CC98A_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x10BCC6B0)
#define CLASS_2_8004E22EF60CC98A_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x10BCC9E0)
#define CLASS_2_8004E22EF60CC98A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10BCCAE0)
#define CLASS_2_8004E22EF60CC98A_METHOD_2_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0x10BCC780)
#define CLASS_2_8004E22EF60CC98A__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCCA50)
#define CLASS_2_8004E22EF60CC98A__ONBIND_OFFSET UNITYSDK_OFFSET(0x10BCC4C0)
#define CLASS_2_8004E22EF60CC98A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10BCCA80)

inline static constexpr unsigned int Class_2_8004E22EF60CC98A_TypeDefinitionIndex = 58665;

class Class_2_8004E22EF60CC98A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x68
	::UnityEngine::UI::Image* Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_F232DA5FE2B51D5A(::Class_1_5C7F69784A5C81DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE*))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_METHOD_2_F232DA5FE2B51D5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8004E22EF60CC98A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
