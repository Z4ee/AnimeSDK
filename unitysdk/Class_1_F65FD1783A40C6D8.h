#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F65FD1783A40C6D8_Class_1_F9D0D949D4DE2864;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_F65FD1783A40C6D8_METHOD_1_42372DAD677984CB_OFFSET UNITYSDK_OFFSET(0x916E340)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_4A470AFF92134627_OFFSET UNITYSDK_OFFSET(0x916DD20)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x916DE60)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_63ACC0D27D3459FE_OFFSET UNITYSDK_OFFSET(0x916E020)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x916E280)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0x916E180)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_2_OFFSET UNITYSDK_OFFSET(0x916E200)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x916E0F0)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_C08FF17A469FA820_OFFSET UNITYSDK_OFFSET(0x916D7C0)
#define CLASS_1_F65FD1783A40C6D8_METHOD_1_C69A20389C87A4E6_OFFSET UNITYSDK_OFFSET(0x916D5D0)
#define CLASS_1_F65FD1783A40C6D8__CTOR_OFFSET UNITYSDK_OFFSET(0x916DD60)

inline static constexpr unsigned int Class_1_F65FD1783A40C6D8_TypeDefinitionIndex = 70061;

class Class_1_F65FD1783A40C6D8 : public ::System::Object
{
public:
	::RPG::Client::ChenLingBattle::IGamePhase* Field_1_2; // 0x10
	::RPG::Client::ChenLingBattle::IGamePhase* Field_1_1; // 0x18
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_1_6; // 0x20
	::System::Collections::Generic::Queue_1<::Class_1_F65FD1783A40C6D8_Class_1_F9D0D949D4DE2864*>* Field_1_5; // 0x28
	::RPG::Client::ChenLingBattle::IGamePhase* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::ChenLingBattle::IGamePhase*>* Field_1_4; // 0x38
	::System::Boolean Field_1_0; // 0x40

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C69A20389C87A4E6(::System::Type* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_C69A20389C87A4E6_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingBattle::IGamePhase* Method_1_4A470AFF92134627()
	{
		return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_4A470AFF92134627_OFFSET))(this);
	}

	::System::Void Method_1_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_BB93C69D78C65A48_2_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_C08FF17A469FA820(::RPG::Client::ChenLingBattle::IGamePhase* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_C08FF17A469FA820_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_63ACC0D27D3459FE(::RPG::Client::ChenLingBattle::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_63ACC0D27D3459FE_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingBattle::IGamePhase* Method_1_42372DAD677984CB()
	{
		return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_METHOD_1_42372DAD677984CB_OFFSET))(this);
	}
};
