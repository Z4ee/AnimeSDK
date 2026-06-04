#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MarbleDamageTextInfo; }
namespace RPG::Client { class TextOutline; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5CEDCBB60BC93587_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAA8B110)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_0771C000AEF9ADC0_OFFSET UNITYSDK_OFFSET(0xAA8ABF0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xAA8B000)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xAA8A6F0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xAA8A550)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAA8AFA0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xAA8A4F0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAA8A4A0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0xAA8A750)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0xAA8B050)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0xAA8AF40)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_C5D09897CC7133B0_OFFSET UNITYSDK_OFFSET(0xAA8A9F0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xAA8AB70)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_CCC64E59F8E6BE77_OFFSET UNITYSDK_OFFSET(0xAA8AE90)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xAA8AA50)
#define CLASS_2_5CEDCBB60BC93587_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xAA8B120)
#define CLASS_2_5CEDCBB60BC93587__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8B130)
#define CLASS_2_5CEDCBB60BC93587__ONBIND_OFFSET UNITYSDK_OFFSET(0xAA8A2E0)
#define CLASS_2_5CEDCBB60BC93587__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAA8A6B0)
#define CLASS_2_5CEDCBB60BC93587__ONTICK_OFFSET UNITYSDK_OFFSET(0xAA8A3B0)
#define CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAA8B180)
#define CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAA8B240)
#define CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xAA8B1E0)

inline static constexpr unsigned int Class_2_5CEDCBB60BC93587_TypeDefinitionIndex = 61543;

class Class_2_5CEDCBB60BC93587 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x1D; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2E; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Animation* Field_2_4; // 0x60
	::RPG::Client::TextOutline* Field_2_5; // 0x68
	::System::String* Field_2_6; // 0x70
	::RPG::Client::LocalizedText* Field_2_7; // 0x78
	::RPG::Client::UIFollow3DTarget* Field_2_8; // 0x80
	::System::Boolean Field_2_9; // 0x88
	::System::Single _Duration_k__BackingField; // 0x8C
	::UnityEngine::Vector2 Field_2_11; // 0x90
	::System::Single Field_2_12; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587__ONBIND_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C5D09897CC7133B0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_C5D09897CC7133B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0771C000AEF9ADC0(::RPG::Client::MarbleDamageTextInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_0771C000AEF9ADC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_CCC64E59F8E6BE77(::RPG::Client::MarbleDamageTextInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_CCC64E59F8E6BE77_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_85EBE7A0BED75540(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_85EBE7A0BED75540_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Single get_Duration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_GET_DURATION_OFFSET))(this);
	}

	::System::Void set_Duration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_SET_DURATION_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
