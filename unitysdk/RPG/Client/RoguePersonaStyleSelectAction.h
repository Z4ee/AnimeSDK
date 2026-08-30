#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB4A4ADDA7338C08_3;
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF16810)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_ISDISABLEREROLL_OFFSET UNITYSDK_OFFSET(0xDF16630)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xDF16610)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_STYLELIST_OFFSET UNITYSDK_OFFSET(0xDF165D0)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_USEDREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xDF165F0)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xDF16760)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_ISDISABLEREROLL_OFFSET UNITYSDK_OFFSET(0xDF16640)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xDF16620)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_STYLELIST_OFFSET UNITYSDK_OFFSET(0xDF165E0)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_USEDREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xDF16600)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xDF16850)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xDF166F0)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDF16650)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__SETUPSTYLELIST_OFFSET UNITYSDK_OFFSET(0xDF168A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePersonaStyleSelectAction_TypeDefinitionIndex = 67040;

	class RoguePersonaStyleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* _StyleList_k__BackingField; // 0x10
		::System::Boolean _IsDisableReroll_k__BackingField; // 0x18
		::System::UInt32 _MaxRerollCount_k__BackingField; // 0x1C
		::System::UInt32 _RogueActionID; // 0x20
		::System::UInt32 _UsedRerollCount_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_FB4A4ADDA7338C08_3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* get_StyleList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_STYLELIST_OFFSET))(this);
		}

		::System::Void set_StyleList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_STYLELIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsedRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_USEDREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_UsedRerollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_USEDREROLLCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_MAXREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_MAXREROLLCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisableReroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_ISDISABLEREROLL_OFFSET))(this);
		}

		::System::Void set_IsDisableReroll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_ISDISABLEREROLL_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::Class_1_FB4A4ADDA7338C08_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_FB4A4ADDA7338C08_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void _SetupStyleList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__SETUPSTYLELIST_OFFSET))(this, a1);
		}
	};
}
