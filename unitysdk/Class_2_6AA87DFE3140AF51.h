#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_23F67DD15593C8D6;
class Class_1_8279BFFA57BC2D0E;
class Class_2_47C05B055FCC48B3;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6AA87DFE3140AF51_METHOD_2_02B7A9B7DE670ADB_OFFSET UNITYSDK_OFFSET(0xCB18B40)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xCB18AE0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xCB18DC0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_1B265F1038CD73C2_OFFSET UNITYSDK_OFFSET(0xCB18D50)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_2177C24A5E2E46CB_OFFSET UNITYSDK_OFFSET(0xCB18BA0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xCB19230)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCB189B0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xCB19060)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xCB193C0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xCB19340)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xCB190D0)
#define CLASS_2_6AA87DFE3140AF51_METHOD_2_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0xCB19120)
#define CLASS_2_6AA87DFE3140AF51__CTOR_OFFSET UNITYSDK_OFFSET(0xCB18920)
#define CLASS_2_6AA87DFE3140AF51__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB184D0)
#define CLASS_2_6AA87DFE3140AF51__ONTICK_OFFSET UNITYSDK_OFFSET(0xCB19180)
#define CLASS_2_6AA87DFE3140AF51___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB19420)
#define CLASS_2_6AA87DFE3140AF51___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xCB19480)

inline static constexpr unsigned int Class_2_6AA87DFE3140AF51_TypeDefinitionIndex = 59134;

class Class_2_6AA87DFE3140AF51 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Nullable_1<::System::Single>* StaticGet_Field_2_10()
	{
		return (::System::Nullable_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6AA87DFE3140AF51_TypeDefinitionIndex)->GetStaticField(0x11E20);
	}
	::Class_2_47C05B055FCC48B3* Field_2_8; // 0x60
	::RPG::Client::LocalizedText* Field_2_2; // 0x68
	::System::String* Field_2_6; // 0x70
	::Class_1_23F67DD15593C8D6* Field_2_9; // 0x78
	::System::String* Field_2_5; // 0x80
	::System::String* Field_2_7; // 0x88
	::System::String* Field_2_4; // 0x90
	::RPG::Client::LocalizedText* Field_2_3; // 0x98
	::RPG::Client::RPGAnimationEvent* Field_2_1; // 0xA0
	::UnityEngine::Animation* Field_2_0; // 0xA8
	::System::Single Field_2_11; // 0xB0
	::System::UInt32 Field_2_12; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_02B7A9B7DE670ADB(::Class_2_47C05B055FCC48B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_47C05B055FCC48B3*))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_02B7A9B7DE670ADB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2177C24A5E2E46CB(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_2177C24A5E2E46CB_OFFSET))(this, a1);
	}

	::System::String* Method_2_1B265F1038CD73C2(::RPG::GameCore::VersusBarReasonTipType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::VersusBarReasonTipType))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_1B265F1038CD73C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Method_2_F4C8B018D655630D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_F4C8B018D655630D_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::Class_1_23F67DD15593C8D6* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_23F67DD15593C8D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6AA87DFE3140AF51___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
