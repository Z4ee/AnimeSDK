#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class ComicImgSplitScreenGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMICPAGEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3856B0)
#define MOLEMOLE_COMICPAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C385760)

namespace MoleMole
{
	inline static constexpr unsigned int ComicPageData_TypeDefinitionIndex = 30579;

	class ComicPageData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>*>* splitScreenAudioDatasList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* pageStartContinuousAudioKeyList; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>* pageStartAudioDataList; // 0x20
		::MoleMole::ComicImgSplitScreenGroup* imgGroup; // 0x28
		::System::String* pageTransitionSoundKey; // 0x30
		::System::String* trackName; // 0x38
		::System::String* pageStartBGMState; // 0x40
		::System::Single transitionAudioDuration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICPAGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICPAGEDATA_CLEAR_OFFSET))(this);
		}
	};
}
