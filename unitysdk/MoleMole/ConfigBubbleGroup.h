#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBUBBLEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19214C70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBubbleGroup_TypeDefinitionIndex = 84895;

	class ConfigBubbleGroup : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BubbleGroupPlayGraphContent*>* BubbleGroupDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUBBLEGROUP__CTOR_OFFSET))(this);
		}
	};
}
