#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzleSolutionItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ORACLEPUZZLESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0xAE85B80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleSolution_TypeDefinitionIndex = 72230;

	class OraclePuzzleSolution : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleSolutionItem*>* ItemID2GridPosMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLESOLUTION__CTOR_OFFSET))(this);
		}
	};
}
