#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UINPCBUBBLEPERFORM_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17464C50)
#define MOLEMOLE_UINPCBUBBLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x17464C00)

namespace MoleMole
{
	inline static constexpr unsigned int UINpcBubblePerform_TypeDefinitionIndex = 40350;

	class UINpcBubblePerform : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mapping; // 0x28
		::System::UInt32 ownerID; // 0x30
		::System::Int32 performId; // 0x34
		::System::Int32 interactID; // 0x38

		::System::Void _ctor(::MoleMole::Battle::Entity* owner, ::System::Int32 interactID, ::System::Int32 performId, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mapping)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCBUBBLEPERFORM__CTOR_OFFSET))(this, owner, interactID, performId, mapping);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCBUBBLEPERFORM_ONPROCESS_OFFSET))(this);
		}
	};
}
