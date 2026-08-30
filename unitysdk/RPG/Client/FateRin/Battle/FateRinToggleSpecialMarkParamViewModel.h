#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_39D4CC5F087AC6A7;
namespace RPG::Client::FateRin::Battle { class FateRinSpecialMarkTextNodeViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x1CBD9750)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x1CBD9730)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x1CBD9760)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x1CBD9740)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD9510)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinToggleSpecialMarkParamViewModel_TypeDefinitionIndex = 79546;

	class FateRinToggleSpecialMarkParamViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* _TextNodeList_k__BackingField; // 0x10
		::System::String* _TriggerName_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_39D4CC5F087AC6A7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_39D4CC5F087AC6A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TriggerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TRIGGERNAME_OFFSET))(this);
		}

		::System::Void set_TriggerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TRIGGERNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* get_TextNodeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TEXTNODELIST_OFFSET))(this);
		}

		::System::Void set_TextNodeList(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TEXTNODELIST_OFFSET))(this, a1);
		}
	};
}
