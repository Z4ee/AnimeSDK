#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_24BB280588B7BF22.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_4502605F4267F6F1;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_21EFA74BA240374E_METHOD_5_31C46ABEB6AA5DD4_OFFSET UNITYSDK_OFFSET(0x1308A770)
#define CLASS_5_21EFA74BA240374E_METHOD_5_32EAF063CE746755_OFFSET UNITYSDK_OFFSET(0x1308A970)
#define CLASS_5_21EFA74BA240374E_METHOD_5_9A406B5B2D9F3AA9_OFFSET UNITYSDK_OFFSET(0x1308A4E0)
#define CLASS_5_21EFA74BA240374E_METHOD_5_9CF2B07D68581C45_OFFSET UNITYSDK_OFFSET(0x1308A780)
#define CLASS_5_21EFA74BA240374E_METHOD_5_D8FDB5293E41A6D4_OFFSET UNITYSDK_OFFSET(0x1308AC50)
#define CLASS_5_21EFA74BA240374E__CTOR_OFFSET UNITYSDK_OFFSET(0x1308A640)

inline static constexpr unsigned int Class_5_21EFA74BA240374E_TypeDefinitionIndex = 43795;

class Class_5_21EFA74BA240374E : public ::Class_4_24BB280588B7BF22
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_5_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_9A406B5B2D9F3AA9()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_9A406B5B2D9F3AA9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_31C46ABEB6AA5DD4()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_31C46ABEB6AA5DD4_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_9CF2B07D68581C45(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_9CF2B07D68581C45_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_32EAF063CE746755(::System::UInt32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::UInt32 a3, ::Class_1_4502605F4267F6F1*& a4)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::Class_1_4502605F4267F6F1*&))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_32EAF063CE746755_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_D8FDB5293E41A6D4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_D8FDB5293E41A6D4_OFFSET))(this, a1);
	}
};
