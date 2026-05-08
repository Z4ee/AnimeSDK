#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class SerializeKeyframe; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_ATTRKEYFRAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x11DFB890)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AttrKeyFrames_TypeDefinitionIndex = 72271;

	class AttrKeyFrames : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Timeline::SerializeKeyframe*>* keyFrames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ATTRKEYFRAMES__CTOR_OFFSET))(this);
		}
	};
}
