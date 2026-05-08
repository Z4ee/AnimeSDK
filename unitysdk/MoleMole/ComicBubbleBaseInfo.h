#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class BubbleInfo; }
namespace UnityEngine::Timeline { class WwiseAudioInfo; }

#define MOLEMOLE_COMICBUBBLEBASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA83850)

namespace MoleMole
{
	inline static constexpr unsigned int ComicBubbleBaseInfo_TypeDefinitionIndex = 30574;

	class ComicBubbleBaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::WwiseAudioInfo*>* audioInfos; // 0x10
		::UnityEngine::Timeline::BubbleInfo* bubbleInfo; // 0x18
		::System::Double time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICBUBBLEBASEINFO__CTOR_OFFSET))(this);
		}
	};
}
