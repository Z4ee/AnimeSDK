#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03F28262DB3DCF5B___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C23AA0)

inline static constexpr unsigned int Class_1_03F28262DB3DCF5B___c__DisplayClass0_0_TypeDefinitionIndex = 74864;

class Class_1_03F28262DB3DCF5B___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F28262DB3DCF5B___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}
};
