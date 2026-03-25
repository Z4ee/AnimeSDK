#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameComponentBase; }

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA94DE40)
#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA94DF20)
#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA94DED0)
#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA94DF90)
#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xA94E060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_GameComponentArray_TypeDefinitionIndex = 43339;

	class GameEntity_GameComponentArray : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameComponentBase*>* Array; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_GET_LENGTH_OFFSET))(this);
		}

		::RPG::GameCore::GameComponentBase* get_Item(::System::Int32 index)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::RPG::GameCore::GameComponentBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTARRAY_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
