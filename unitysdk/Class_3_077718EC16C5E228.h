#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NetworkErrorDialog.h"

class Class_1_AA4BCBC1E3A957A3;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_077718EC16C5E228_METHOD_3_33C64EF100D014E2_OFFSET UNITYSDK_OFFSET(0x16A20290)
#define CLASS_3_077718EC16C5E228_METHOD_3_5186EFC6098B0C71_OFFSET UNITYSDK_OFFSET(0x16A1EF90)
#define CLASS_3_077718EC16C5E228_METHOD_3_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x16A1FDD0)
#define CLASS_3_077718EC16C5E228_METHOD_3_AB9B9E71B0D7294E_OFFSET UNITYSDK_OFFSET(0x16A1FD20)
#define CLASS_3_077718EC16C5E228_METHOD_3_C51707E083C19D01_OFFSET UNITYSDK_OFFSET(0x16A1ED00)
#define CLASS_3_077718EC16C5E228_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16A1EF40)
#define CLASS_3_077718EC16C5E228_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x16A1FEA0)
#define CLASS_3_077718EC16C5E228_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0x16A20080)
#define CLASS_3_077718EC16C5E228__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1EF30)
#define CLASS_3_077718EC16C5E228__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x16A1F210)
#define CLASS_3_077718EC16C5E228__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16A1F380)

inline static constexpr unsigned int Class_3_077718EC16C5E228_TypeDefinitionIndex = 69419;

class Class_3_077718EC16C5E228 : public ::RPG::Client::NetworkErrorDialog
{
public:
	::Class_1_AA4BCBC1E3A957A3* Field_3_0; // 0x1A0
	::System::Boolean Field_3_1; // 0x1A8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C51707E083C19D01(::System::String* a1, ::Class_1_AA4BCBC1E3A957A3* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_AA4BCBC1E3A957A3*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_C51707E083C19D01_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5186EFC6098B0C71(::System::String* a1, ::System::String* a2, ::Class_1_AA4BCBC1E3A957A3* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Class_1_AA4BCBC1E3A957A3*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_5186EFC6098B0C71_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_AA4BCBC1E3A957A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AA4BCBC1E3A957A3*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228__SETUPVIEW_OFFSET))(this);
	}

	::System::Void OnBtnCancelClick(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_ONBTNCANCELCLICK_OFFSET))(this, a1);
	}

	::System::Void OnBtnDetailClick(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_ONBTNDETAILCLICK_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_AB9B9E71B0D7294E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_AB9B9E71B0D7294E_OFFSET))();
	}

	::System::Boolean Method_3_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_3_33C64EF100D014E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228_METHOD_3_33C64EF100D014E2_OFFSET))(this, a1);
	}
};
