#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_84777A4EA5145F7E;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4BF33E880BD2240E_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAD3C520)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xAD3BDF0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xAD3C3F0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xAD3BC50)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAD3C390)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xAD3BBF0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAD3BBA0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0xAD3BE50)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0xAD3C460)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_7A3A2C7B56BB7F35_OFFSET UNITYSDK_OFFSET(0xAD3C1C0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0xAD3C330)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_9A03733F1AEF05A2_OFFSET UNITYSDK_OFFSET(0xAD3C2C0)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xAD3C140)
#define CLASS_2_4BF33E880BD2240E_METHOD_2_F5AA48DF093DA896_OFFSET UNITYSDK_OFFSET(0xAD3C0D0)
#define CLASS_2_4BF33E880BD2240E_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xAD3C530)
#define CLASS_2_4BF33E880BD2240E__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3C540)
#define CLASS_2_4BF33E880BD2240E__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD3BA20)
#define CLASS_2_4BF33E880BD2240E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAD3BDB0)
#define CLASS_2_4BF33E880BD2240E__ONTICK_OFFSET UNITYSDK_OFFSET(0xAD3BAB0)
#define CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD3C590)
#define CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAD3C650)
#define CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xAD3C5F0)

inline static constexpr unsigned int Class_2_4BF33E880BD2240E_TypeDefinitionIndex = 61542;

class Class_2_4BF33E880BD2240E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::RPG::Client::UIFollow3DTarget* Field_2_1; // 0x68
	::System::String* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::System::Single _Duration_k__BackingField; // 0x80
	::UnityEngine::Vector2 Field_2_5; // 0x84
	::System::Single Field_2_6; // 0x8C
	::System::Boolean Field_2_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E__ONBIND_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F5AA48DF093DA896(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_F5AA48DF093DA896_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A3A2C7B56BB7F35(::Class_1_84777A4EA5145F7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_84777A4EA5145F7E*))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_7A3A2C7B56BB7F35_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_9A03733F1AEF05A2(::Class_1_84777A4EA5145F7E* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_84777A4EA5145F7E*))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_9A03733F1AEF05A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_85EBE7A0BED75540(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_85EBE7A0BED75540_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Single get_Duration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_GET_DURATION_OFFSET))(this);
	}

	::System::Void set_Duration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E_SET_DURATION_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BF33E880BD2240E___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
