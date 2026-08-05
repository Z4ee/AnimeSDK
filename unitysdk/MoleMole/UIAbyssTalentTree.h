#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class TalentTreeItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D97DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentTree_TypeDefinitionIndex = 55090;

	class UIAbyssTalentTree : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::TalentTreeItem*>* modelItems; // 0x58
		::System::Int32 TalentID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTTREE__CTOR_OFFSET))(this);
		}
	};
}
