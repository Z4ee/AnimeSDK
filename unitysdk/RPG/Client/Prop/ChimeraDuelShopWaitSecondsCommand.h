#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDC29630)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xDC29690)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xDC29620)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopWaitSecondsCommand_TypeDefinitionIndex = 77880;

	class ChimeraDuelShopWaitSecondsCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::System::Single _Total; // 0x18
		::System::Single _Elapsed; // 0x1C

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND__CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET))(this, a1);
		}
	};
}
