#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_1_7BB1D82326599273_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16CCCED0)
#define CLASS_1_7BB1D82326599273_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16CCDD60)
#define CLASS_1_7BB1D82326599273_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x16CCDAD0)
#define CLASS_1_7BB1D82326599273_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CCDD10)
#define CLASS_1_7BB1D82326599273_METHOD_1_F6D71BB9DFA2BE91_OFFSET UNITYSDK_OFFSET(0x16CCD270)
#define CLASS_1_7BB1D82326599273__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCCEC0)

inline static constexpr unsigned int Class_1_7BB1D82326599273_TypeDefinitionIndex = 77764;

class Class_1_7BB1D82326599273 : public ::System::Object
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x10
	::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x18
	::UnityEngine::Vector3 KGMNHAFNOHK; // 0x20
	::System::Single FOMCKBAHCFM; // 0x2C
	::UnityEngine::Quaternion NGIMALNHLNI; // 0x30
	::UnityEngine::Vector3 JNFHAIACECG; // 0x40
	::System::Single MFLNKDOADDG; // 0x4C
	::UnityEngine::Quaternion OKBPGPNJMFL; // 0x50

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
