#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceBase.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace MoleMole::HollowChessboard { class RenderTrackBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_GETMAINTRACK_OFFSET UNITYSDK_OFFSET(0x142901C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_GETSUBTRACKS_OFFSET UNITYSDK_OFFSET(0x14290200)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14290320)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderSequence_TypeDefinitionIndex = 40806;

	class HollowEntityRenderSequence : public ::MoleMole::HollowChessboard::RenderSequenceBase
	{
	public:
		::MoleMole::HollowChessboard::HollowEntityRenderTrack* MainTrack; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>* SubTracks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::RenderTrackBase* GetMainTrack()
		{
			return ((::MoleMole::HollowChessboard::RenderTrackBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_GETMAINTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderTrackBase*>* GetSubTracks()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderTrackBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_GETSUBTRACKS_OFFSET))(this);
		}
	};
}
