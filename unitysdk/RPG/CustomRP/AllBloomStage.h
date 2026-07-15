#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class BloomStage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_ALLBLOOMSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x177F9A50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AllBloomStage_TypeDefinitionIndex = 36244;

	class AllBloomStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::BloomStage*>* Stages; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ALLBLOOMSTAGE__CTOR_OFFSET))(this);
		}
	};
}
