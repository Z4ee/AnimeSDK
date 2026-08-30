#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MarbleDamageTextInfo; }
namespace RPG::Client { class TextOutline; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5CEDCBB60BC93587_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x176C3570)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x176C3460)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x176C2C00)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x176C2A60)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x176C3400)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x176C2A00)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x176C29B0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x176C2C60)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x176C34B0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_816F1DBAA1FF1DFE_OFFSET UNITYSDK_OFFSET(0x176C3090)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0x176C3390)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0x176C2EE0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x176C3010)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_CCC64E59F8E6BE77_OFFSET UNITYSDK_OFFSET(0x176C32E0)
#define CLASS_2_5CEDCBB60BC93587_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x176C2F40)
#define CLASS_2_5CEDCBB60BC93587_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x176C3580)
#define CLASS_2_5CEDCBB60BC93587__CTOR_OFFSET UNITYSDK_OFFSET(0x176C3590)
#define CLASS_2_5CEDCBB60BC93587__ONBIND_OFFSET UNITYSDK_OFFSET(0x176C27F0)
#define CLASS_2_5CEDCBB60BC93587__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x176C2BC0)
#define CLASS_2_5CEDCBB60BC93587__ONTICK_OFFSET UNITYSDK_OFFSET(0x176C28C0)

inline static constexpr unsigned int Class_2_5CEDCBB60BC93587_TypeDefinitionIndex = 65890;

class Class_2_5CEDCBB60BC93587 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 DODNAJDHOLB = 0x1D; // 0x0
	// static const ::System::Int32 PNJIDOOHEEA = 0x2E; // 0x0
	// static const ::System::String* EFCNKKHAFDL; // 0x0
	// static const ::System::String* HHHKNIDDFDE; // 0x0
	::RPG::Client::TextOutline* JNOIOMJGDFD; // 0x60
	::UnityEngine::Animation* KCOAILOHDND; // 0x68
	::RPG::Client::UIFollow3DTarget* MCMALLKMDNC; // 0x70
	::RPG::Client::LocalizedText* CALNLFBNMPM; // 0x78
	::System::String* AMMFAOBBPCN; // 0x80
	::System::Boolean FMNEEONAMNO; // 0x88
	::System::Single NGMPALMFOKL; // 0x8C
	::System::Single _Duration_k__BackingField; // 0x90
	::UnityEngine::Vector2 IDGKNMLPGDL; // 0x94

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

	::System::Void Method_2_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_816F1DBAA1FF1DFE(::RPG::Client::MarbleDamageTextInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5CEDCBB60BC93587_METHOD_2_816F1DBAA1FF1DFE_OFFSET))(this, a1);
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
};
