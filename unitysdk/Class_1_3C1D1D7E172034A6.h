#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_3C1D1D7E172034A6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x134DD6E0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_25966D0212530B06_OFFSET UNITYSDK_OFFSET(0x134DD7A0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_2C927E534C9662EA_OFFSET UNITYSDK_OFFSET(0x134DDBE0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x134DDA20)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x134DD960)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x134DDB30)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x134DDA70)
#define CLASS_1_3C1D1D7E172034A6__CTOR_OFFSET UNITYSDK_OFFSET(0x134DD750)

inline static constexpr unsigned int Class_1_3C1D1D7E172034A6_TypeDefinitionIndex = 57349;

class Class_1_3C1D1D7E172034A6 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_3C1D1D7E172034A6*>* GICMMIMFLIM; // 0x10
	::RPG::Client::IAssetOperation* CABJOOIBDPM; // 0x18
	::UnityEngine::Object* IFCMOPKIFGD; // 0x20
	::RPG::Client::OnAssetOperationDelegate* EPEKNJLONJA; // 0x28
	::RPG::Client::IAssetOperation* CNPEOFLMHEC; // 0x30
	::UnityEngine::Object* NHFPKBHLLLH; // 0x38
	::System::String* CDMFNHJGGKF; // 0x40
	::System::String* CDGELMPLLPG; // 0x48
	::System::String* ENJLNAMAFLG; // 0x50
	::System::Int32 MNIPENLIKPH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_25966D0212530B06(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_25966D0212530B06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Boolean Method_1_2C927E534C9662EA(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_2C927E534C9662EA_OFFSET))(this, a1);
	}
};
