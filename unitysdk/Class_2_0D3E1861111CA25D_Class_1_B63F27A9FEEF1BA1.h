#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D3E1861111CA25D_CLASS_1_B63F27A9FEEF1BA1__CTOR_OFFSET UNITYSDK_OFFSET(0x16D182D0)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1_TypeDefinitionIndex = 68521;

class Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_B63F27A9FEEF1BA1__CTOR_OFFSET))(this);
	}
};
