#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_24BB280588B7BF22.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_4502605F4267F6F1;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_5B1936DF86C29EEE_METHOD_5_31C46ABEB6AA5DD4_OFFSET UNITYSDK_OFFSET(0x15599670)
#define CLASS_5_5B1936DF86C29EEE_METHOD_5_4C0FD581959D6787_OFFSET UNITYSDK_OFFSET(0x155991D0)
#define CLASS_5_5B1936DF86C29EEE_METHOD_5_9A406B5B2D9F3AA9_OFFSET UNITYSDK_OFFSET(0x15598E10)
#define CLASS_5_5B1936DF86C29EEE_METHOD_5_ACF8E44097884500_OFFSET UNITYSDK_OFFSET(0x155993A0)
#define CLASS_5_5B1936DF86C29EEE_METHOD_5_D8FDB5293E41A6D4_OFFSET UNITYSDK_OFFSET(0x155990A0)
#define CLASS_5_5B1936DF86C29EEE__CTOR_OFFSET UNITYSDK_OFFSET(0x15598F70)

inline static constexpr unsigned int Class_5_5B1936DF86C29EEE_TypeDefinitionIndex = 60148;

class Class_5_5B1936DF86C29EEE : public ::Class_4_24BB280588B7BF22
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_5_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_9A406B5B2D9F3AA9()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE_METHOD_5_9A406B5B2D9F3AA9_OFFSET))(this);
	}

	::System::Void Method_5_D8FDB5293E41A6D4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE_METHOD_5_D8FDB5293E41A6D4_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_4C0FD581959D6787(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE_METHOD_5_4C0FD581959D6787_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_ACF8E44097884500(::System::UInt32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::UInt32 a3, ::Class_1_4502605F4267F6F1*& a4)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::Class_1_4502605F4267F6F1*&))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE_METHOD_5_ACF8E44097884500_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_31C46ABEB6AA5DD4()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5B1936DF86C29EEE_METHOD_5_31C46ABEB6AA5DD4_OFFSET))(this);
	}
};
