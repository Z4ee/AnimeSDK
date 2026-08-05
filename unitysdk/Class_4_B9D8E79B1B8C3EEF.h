#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_456EBDEEF53FC724_OFFSET UNITYSDK_OFFSET(0x145A8F20)
#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_701E50D86BA341F0_OFFSET UNITYSDK_OFFSET(0x145A9060)
#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_7AD977A3DB6199E4_OFFSET UNITYSDK_OFFSET(0x145A9660)
#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_922EAE27603294EA_OFFSET UNITYSDK_OFFSET(0x145A9280)
#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_9FF524BEF5CFF2CA_OFFSET UNITYSDK_OFFSET(0x145A8C00)
#define CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_A5E44068C0B8938D_OFFSET UNITYSDK_OFFSET(0x145A96E0)
#define CLASS_4_B9D8E79B1B8C3EEF__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8E40)

inline static constexpr unsigned int Class_4_B9D8E79B1B8C3EEF_TypeDefinitionIndex = 51516;

class Class_4_B9D8E79B1B8C3EEF : public ::Class_3_B3B7AD2B34783116
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_9FF524BEF5CFF2CA()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_9FF524BEF5CFF2CA_OFFSET))(this);
	}

	::System::Boolean Method_4_456EBDEEF53FC724(::MoleMole::HollowChessboard::HollowCell a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_456EBDEEF53FC724_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_701E50D86BA341F0(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_701E50D86BA341F0_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_922EAE27603294EA(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_922EAE27603294EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_A5E44068C0B8938D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_A5E44068C0B8938D_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_7AD977A3DB6199E4()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9D8E79B1B8C3EEF_METHOD_4_7AD977A3DB6199E4_OFFSET))(this);
	}
};
