#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82C76D3704BD9187__CTOR_OFFSET UNITYSDK_OFFSET(0x13FC6900)

inline static constexpr unsigned int Class_1_82C76D3704BD9187_TypeDefinitionIndex = 71321;

class Class_1_82C76D3704BD9187 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C76D3704BD9187__CTOR_OFFSET))(this);
	}
};
