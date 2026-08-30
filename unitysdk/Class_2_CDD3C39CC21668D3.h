#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ElationPointChangePopUIStyle.h"

class Class_1_D1403D5EBDB678B3_2;
class Class_2_CDD3C39CC21668D3_Class_2_562902FDFF3F5056;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CDD3C39CC21668D3_METHOD_2_E443625AAFA6531A_OFFSET UNITYSDK_OFFSET(0x163DA5E0)
#define CLASS_2_CDD3C39CC21668D3_METHOD_2_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x163DA740)
#define CLASS_2_CDD3C39CC21668D3_METHOD_2_F1E1DC61D1C45DDA_OFFSET UNITYSDK_OFFSET(0x163DA570)
#define CLASS_2_CDD3C39CC21668D3__CTOR_OFFSET UNITYSDK_OFFSET(0x163DA990)
#define CLASS_2_CDD3C39CC21668D3__ONBIND_OFFSET UNITYSDK_OFFSET(0x163DA200)

inline static constexpr unsigned int Class_2_CDD3C39CC21668D3_TypeDefinitionIndex = 72063;

class Class_2_CDD3C39CC21668D3 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationPointChangePopUIStyle, ::Class_2_CDD3C39CC21668D3_Class_2_562902FDFF3F5056*>* JNLOPNECCDP; // 0x60
	::Class_2_CDD3C39CC21668D3_Class_2_562902FDFF3F5056* NCODOADGHHG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD3C39CC21668D3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD3C39CC21668D3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F1E1DC61D1C45DDA(::Class_1_D1403D5EBDB678B3_2* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3_2*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CDD3C39CC21668D3_METHOD_2_F1E1DC61D1C45DDA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD3C39CC21668D3_METHOD_2_F17676F976AEF1D8_OFFSET))(this);
	}

	::Class_2_CDD3C39CC21668D3_Class_2_562902FDFF3F5056* Method_2_E443625AAFA6531A(::Class_1_D1403D5EBDB678B3_2* a1)
	{
		return ((::Class_2_CDD3C39CC21668D3_Class_2_562902FDFF3F5056*(*)(::PVOID, ::Class_1_D1403D5EBDB678B3_2*))((::PBYTE)hIl2Cpp + CLASS_2_CDD3C39CC21668D3_METHOD_2_E443625AAFA6531A_OFFSET))(this, a1);
	}
};
