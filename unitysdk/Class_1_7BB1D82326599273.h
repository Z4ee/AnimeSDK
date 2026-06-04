#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_1_7BB1D82326599273_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xA4F8720)
#define CLASS_1_7BB1D82326599273_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA4F95B0)
#define CLASS_1_7BB1D82326599273_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xA4F9320)
#define CLASS_1_7BB1D82326599273_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4F9560)
#define CLASS_1_7BB1D82326599273_METHOD_1_F6D71BB9DFA2BE91_OFFSET UNITYSDK_OFFSET(0xA4F8AC0)
#define CLASS_1_7BB1D82326599273__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F8710)

inline static constexpr unsigned int Class_1_7BB1D82326599273_TypeDefinitionIndex = 72754;

class Class_1_7BB1D82326599273 : public ::System::Object
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* Field_1_0; // 0x10
	::RPG::Client::Prop::DuelChimeraProxy* Field_1_1; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x20
	::UnityEngine::Quaternion Field_1_3; // 0x30
	::System::Single Field_1_4; // 0x40
	::UnityEngine::Vector3 Field_1_5; // 0x44
	::System::Single Field_1_6; // 0x50
	::UnityEngine::Vector3 Field_1_7; // 0x54

	::System::Void _ctor(::RPG::Client::Prop::DuelChimeraProxy* a1, ::RPG::Client::Prop::DuelChimeraProxy* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*, ::RPG::Client::Prop::DuelChimeraProxy*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_F6D71BB9DFA2BE91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273_METHOD_1_F6D71BB9DFA2BE91_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB1D82326599273_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
