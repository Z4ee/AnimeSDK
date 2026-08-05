#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderTrackBase.h"

class Class_0_16E4307DCC419505_384;
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IHollowEntitySection; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GETFILTEREDSECTIONTYPELIST_OFFSET UNITYSDK_OFFSET(0x19BF6410)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GETNAME_OFFSET UNITYSDK_OFFSET(0x19BF63A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x19BF63E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x19BF63F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x19BF6400)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6750)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK__GETFILTEREDSECTIONTYPELIST_B__10_3_OFFSET UNITYSDK_OFFSET(0x19BF6760)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderTrack_TypeDefinitionIndex = 87969;

	class HollowEntityRenderTrack : public ::MoleMole::HollowChessboard::RenderTrackBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>* SectionData; // 0x10
		::System::String* DebugName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>* ConditionData; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>* EventsData; // 0x28
		::MoleMole::HollowChessboard::RenderSequenceSectionType TrackType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK__CTOR_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GETNAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>* get_Conditions()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_CONDITIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::IRenderEvent*>* get_Events()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::IRenderEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_EVENTS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_384*>* get_Section()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_384*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GET_SECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetFilteredSectionTypeList()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_GETFILTEREDSECTIONTYPELIST_OFFSET))(this);
		}

		::System::Boolean _GetFilteredSectionTypeList_b__10_3(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK__GETFILTEREDSECTIONTYPELIST_B__10_3_OFFSET))(this, x);
		}
	};
}
