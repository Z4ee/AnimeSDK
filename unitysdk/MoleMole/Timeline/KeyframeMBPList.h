#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class KeyframeMBP; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_KEYFRAMEMBPLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x191BDAB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int KeyframeMBPList_TypeDefinitionIndex = 85590;

	class KeyframeMBPList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Timeline::KeyframeMBP*>* KeyframeMbps; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::Timeline::KeyframeMBP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_KEYFRAMEMBPLIST__CTOR_OFFSET))(this, a1);
		}
	};
}
