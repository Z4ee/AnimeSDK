#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE84D8E232AFC277_Class_1_F9D0D949D4DE2864;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_CE84D8E232AFC277_METHOD_1_4A470AFF92134627_1_OFFSET UNITYSDK_OFFSET(0x15833950)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_4A470AFF92134627_OFFSET UNITYSDK_OFFSET(0x15833330)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x15833470)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_63ACC0D27D3459FE_OFFSET UNITYSDK_OFFSET(0x15833630)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0x15833790)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_2_OFFSET UNITYSDK_OFFSET(0x15833810)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x15833700)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_CFFCD2E5974E68EA_OFFSET UNITYSDK_OFFSET(0x15832C00)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_D9A0DCC0A4AFCD24_OFFSET UNITYSDK_OFFSET(0x15832DF0)
#define CLASS_1_CE84D8E232AFC277_METHOD_1_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x15833890)
#define CLASS_1_CE84D8E232AFC277__CTOR_OFFSET UNITYSDK_OFFSET(0x15833370)

inline static constexpr unsigned int Class_1_CE84D8E232AFC277_TypeDefinitionIndex = 75823;

class Class_1_CE84D8E232AFC277 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::ChenLingBattle::IGamePhase*>* PAHJPOGLALP; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_CE84D8E232AFC277_Class_1_F9D0D949D4DE2864*>* JKEJPOGHMND; // 0x18
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* PHCFMCOJHAO; // 0x20
	::RPG::Client::ChenLingBattle::IGamePhase* OIONFABNEBK; // 0x28
	::RPG::Client::ChenLingBattle::IGamePhase* BOKIJMMFCKO; // 0x30
	::RPG::Client::ChenLingBattle::IGamePhase* GDHFEAKLHFJ; // 0x38
	::System::Boolean AKBAIKCDEHP; // 0x40

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFFCD2E5974E68EA(::System::Type* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_CFFCD2E5974E68EA_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingBattle::IGamePhase* Method_1_4A470AFF92134627()
	{
		return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_4A470AFF92134627_OFFSET))(this);
	}

	::System::Void Method_1_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_BB93C69D78C65A48_2_OFFSET))(this);
	}

	::System::Void Method_1_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_1_D9A0DCC0A4AFCD24(::RPG::Client::ChenLingBattle::IGamePhase* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_D9A0DCC0A4AFCD24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_63ACC0D27D3459FE(::RPG::Client::ChenLingBattle::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_63ACC0D27D3459FE_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingBattle::IGamePhase* Method_1_4A470AFF92134627_1()
	{
		return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_METHOD_1_4A470AFF92134627_1_OFFSET))(this);
	}
};
