#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

class Class_1_B9E56D0D50E02617;
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GETBLACKCOUNT_OFFSET UNITYSDK_OFFSET(0xD18D190)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GET_HASBLACKQUEST_OFFSET UNITYSDK_OFFSET(0xD18D040)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xD18D020)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xD18CDB0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xD18CF40)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xD18D030)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xD18CBA0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD18CB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePraySelectAction_TypeDefinitionIndex = 65414;

	class GridFightFatePraySelectAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>* _Options_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_B9E56D0D50E02617* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SELECTMEMBER_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SELECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>* get_Options()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBlackQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GET_HASBLACKQUEST_OFFSET))(this);
		}

		::System::Int32 GetBlackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION_GETBLACKCOUNT_OFFSET))(this);
		}
	};
}
