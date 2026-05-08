#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A0F8BCDE5B3FADFA.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETALLSECTIONS_OFFSET UNITYSDK_OFFSET(0x14290710)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x14290880)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETCONDITIONSBYINDEX_OFFSET UNITYSDK_OFFSET(0x14290D20)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETSECTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x14290760)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14291160)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderTrackBase_TypeDefinitionIndex = 39220;

	class RenderTrackBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_174*>* GetAllSections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_174*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETALLSECTIONS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_174* GetSectionByIndex(::System::Int32 index)
		{
			return ((::Class_0_16E4307DCC419505_174*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETSECTIONBYINDEX_OFFSET))(this, index);
		}

		::System::Void GetBindEvents(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*& eventCollection, ::System::Int32 bindSectionIndex, ::Enum_3_A0F8BCDE5B3FADFA linkableType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*&, ::System::Int32, ::Enum_3_A0F8BCDE5B3FADFA))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETBINDEVENTS_OFFSET))(this, eventCollection, bindSectionIndex, linkableType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>* GetConditionsByIndex(::System::Int32 sectionIndex)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETCONDITIONSBYINDEX_OFFSET))(this, sectionIndex);
		}
	};
}
