#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_089A1F341C18FF2A__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3C470)

inline static constexpr unsigned int Class_1_089A1F341C18FF2A_TypeDefinitionIndex = 79251;

class Class_1_089A1F341C18FF2A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HODNMBAEKPG; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OBNHCGIDDDC; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ILIPCNCIPBB; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_089A1F341C18FF2A__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
