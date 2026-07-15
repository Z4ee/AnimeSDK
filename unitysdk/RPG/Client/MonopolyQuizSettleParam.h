#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYQUIZSETTLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1952F9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyQuizSettleParam_TypeDefinitionIndex = 63329;

	class MonopolyQuizSettleParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ItemDisplayDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ExtraItemDisplayDatas; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* PlayerIDs; // 0x20
		::System::UInt32 QuizID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYQUIZSETTLEPARAM__CTOR_OFFSET))(this);
		}
	};
}
