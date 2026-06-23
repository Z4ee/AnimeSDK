#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0AD90EB0B15687C5_METHOD_4_08F9BF465A731835_OFFSET UNITYSDK_OFFSET(0xF7DC860)
#define CLASS_4_0AD90EB0B15687C5_METHOD_4_6E7D928AA979EE91_OFFSET UNITYSDK_OFFSET(0xF7DCA80)
#define CLASS_4_0AD90EB0B15687C5_METHOD_4_701E50D86BA341F0_OFFSET UNITYSDK_OFFSET(0xF7DC630)
#define CLASS_4_0AD90EB0B15687C5_METHOD_4_8799CFB78C7C7611_OFFSET UNITYSDK_OFFSET(0xF7DC8E0)
#define CLASS_4_0AD90EB0B15687C5_METHOD_4_922EAE27603294EA_OFFSET UNITYSDK_OFFSET(0xF7DCB30)
#define CLASS_4_0AD90EB0B15687C5_METHOD_4_9FF524BEF5CFF2CA_OFFSET UNITYSDK_OFFSET(0xF7DC310)
#define CLASS_4_0AD90EB0B15687C5__CTOR_OFFSET UNITYSDK_OFFSET(0xF7DC550)

inline static constexpr unsigned int Class_4_0AD90EB0B15687C5_TypeDefinitionIndex = 50250;

class Class_4_0AD90EB0B15687C5 : public ::Class_3_B3B7AD2B34783116
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_9FF524BEF5CFF2CA()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_9FF524BEF5CFF2CA_OFFSET))(this);
	}

	::System::Void Method_4_701E50D86BA341F0(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_701E50D86BA341F0_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_08F9BF465A731835()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_08F9BF465A731835_OFFSET))(this);
	}

	::System::Void Method_4_8799CFB78C7C7611(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_8799CFB78C7C7611_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_6E7D928AA979EE91(::MoleMole::HollowChessboard::HollowCell a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_6E7D928AA979EE91_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_922EAE27603294EA(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_0AD90EB0B15687C5_METHOD_4_922EAE27603294EA_OFFSET))(this, a1, a2);
	}
};
