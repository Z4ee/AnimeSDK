#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"

class Class_1_2A8F67D376A2BFDB;
class Class_1_52769F6D26C20191;
class Class_2_4432DBC0FB214C3F;
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_2_970269CBA5BC6359_GET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x17651CF0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x17652A20)
#define CLASS_2_970269CBA5BC6359_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x176523A0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x176521F0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17652330)
#define CLASS_2_970269CBA5BC6359_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17652850)
#define CLASS_2_970269CBA5BC6359_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x176525C0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17635BA0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_DAC8891FB404727D_OFFSET UNITYSDK_OFFSET(0x176520C0)
#define CLASS_2_970269CBA5BC6359_METHOD_2_EDC2DAFF79E1DC9E_OFFSET UNITYSDK_OFFSET(0x17651E20)
#define CLASS_2_970269CBA5BC6359_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x176529B0)
#define CLASS_2_970269CBA5BC6359_SET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x17651D00)
#define CLASS_2_970269CBA5BC6359__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x17652690)
#define CLASS_2_970269CBA5BC6359__CTOR_OFFSET UNITYSDK_OFFSET(0x17651D10)
#define CLASS_2_970269CBA5BC6359__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17652400)
#define CLASS_2_970269CBA5BC6359__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x176528E0)
#define CLASS_2_970269CBA5BC6359__ONTICK_OFFSET UNITYSDK_OFFSET(0x176527D0)
#define CLASS_2_970269CBA5BC6359__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17652630)
#define CLASS_2_970269CBA5BC6359__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17652730)

inline static constexpr unsigned int Class_2_970269CBA5BC6359_TypeDefinitionIndex = 69477;

class Class_2_970269CBA5BC6359 : public ::RPG::Client::UIController
{
public:
	static ::Class_2_970269CBA5BC6359** StaticGet__ActivePage_k__BackingField()
	{
		return (::Class_2_970269CBA5BC6359**)Il2CppClass::FromTypeDefinitionIndex(Class_2_970269CBA5BC6359_TypeDefinitionIndex)->GetStaticField(0x54640);
	}
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	::Class_1_52769F6D26C20191* Field_2_2; // 0x180
	::Class_1_2A8F67D376A2BFDB* Field_2_3; // 0x188
	::System::Boolean Field_2_4; // 0x190
	::System::Int32 Field_2_5; // 0x194

	::System::Void _ctor(::RPG::Client::UILayer a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_970269CBA5BC6359* get_ActivePage()
	{
		return ((::Class_2_970269CBA5BC6359*(*)())((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_GET_ACTIVEPAGE_OFFSET))();
	}

	static ::System::Void set_ActivePage(::Class_2_970269CBA5BC6359* a1)
	{
		return ((::System::Void(*)(::Class_2_970269CBA5BC6359*))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_SET_ACTIVEPAGE_OFFSET))(a1);
	}

	::System::Void Method_2_DAC8891FB404727D(::System::Single a1, ::System::Single a2, ::RPG::GameCore::FrameCaptureFadeoutType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_DAC8891FB404727D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_EDC2DAFF79E1DC9E()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_EDC2DAFF79E1DC9E_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_091B1F0E0E06E7DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_091B1F0E0E06E7DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_4432DBC0FB214C3F* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_4432DBC0FB214C3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_970269CBA5BC6359_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}
};
