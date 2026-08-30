#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"

class Class_1_640990790F67F83E;
namespace RPG::Client { class GridFightFatePraySelectAction; }
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1BD3DEA0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0x1BD3DE30)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0x1BD3E070)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BD3E150)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_COMPLETEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD3E180)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_INPENDING_OFFSET UNITYSDK_OFFSET(0x1BD3E0F0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_SELECTEDQUESTS_OFFSET UNITYSDK_OFFSET(0x1BD3E170)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD3D670)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1BD3E020)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BD3E160)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0x1BD3DF30)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3D600)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT__ONQUESTPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1BD3DD30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePrayTraitEffect_TypeDefinitionIndex = 65447;

	class GridFightFatePrayTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>* _SelectedQuests_k__BackingField; // 0x30
		::RPG::Client::GridFightFatePraySelectAction* _Action_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_640990790F67F83E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_640990790F67F83E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnQuestPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT__ONQUESTPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightFatePraySelectAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFatePraySelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Boolean get_InPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_INPENDING_OFFSET))(this);
		}

		::RPG::Client::GridFightFatePraySelectAction* get_Action()
		{
			return ((::RPG::Client::GridFightFatePraySelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightFatePraySelectAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFatePraySelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>* get_SelectedQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPrayQuest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_SELECTEDQUESTS_OFFSET))(this);
		}

		::System::Int32 get_CompletedQuestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT_GET_COMPLETEDQUESTCOUNT_OFFSET))(this);
		}
	};
}
