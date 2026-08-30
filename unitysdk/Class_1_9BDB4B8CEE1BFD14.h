#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_777;
class Class_1_0AC6DA5D6009B6DB;
class Class_1_4C038D02B7044E61;
class Class_1_F127B01B07319136;
class Class_2_2956BAF0F97343C0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_0AE0F7C91CCB9E23_OFFSET UNITYSDK_OFFSET(0x1765B070)
#define CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_69D73FD31027E6F5_OFFSET UNITYSDK_OFFSET(0x1765AE40)
#define CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_8200AFA2147653FC_OFFSET UNITYSDK_OFFSET(0x1765B330)
#define CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_AC3632EAAC00CFA8_OFFSET UNITYSDK_OFFSET(0x1765B0E0)
#define CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_EAC055612159D8B5_OFFSET UNITYSDK_OFFSET(0x1765B5E0)
#define CLASS_1_9BDB4B8CEE1BFD14__CTOR_OFFSET UNITYSDK_OFFSET(0x1765ACF0)

inline static constexpr unsigned int Class_1_9BDB4B8CEE1BFD14_TypeDefinitionIndex = 79454;

class Class_1_9BDB4B8CEE1BFD14 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardAvatarType, ::Class_2_2956BAF0F97343C0*>* PGHLCHEOBIA; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardAvatarType, ::Class_1_F127B01B07319136*>* EBEAGIAHMOO; // 0x18
	::Class_0_16E4307DCC419505_777* HPNDAEDOHNN; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_777* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_777*))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14__CTOR_OFFSET))(this, a1);
	}

	::Class_1_F127B01B07319136* Method_1_69D73FD31027E6F5(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_1_F127B01B07319136*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_69D73FD31027E6F5_OFFSET))(this, a1);
	}

	::Class_2_2956BAF0F97343C0* Method_1_8200AFA2147653FC(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_2_2956BAF0F97343C0*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_8200AFA2147653FC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinCaseBoardAvatarType Method_1_0AE0F7C91CCB9E23(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_0AE0F7C91CCB9E23_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinCaseBoardAvatarType Method_1_EAC055612159D8B5(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_EAC055612159D8B5_OFFSET))(this, a1);
	}

	static ::Class_1_4C038D02B7044E61* Method_1_AC3632EAAC00CFA8(::Class_1_0AC6DA5D6009B6DB* a1, ::RPG::GameCore::FateRinCaseBoardAvatarType a2)
	{
		return ((::Class_1_4C038D02B7044E61*(*)(::Class_1_0AC6DA5D6009B6DB*, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_9BDB4B8CEE1BFD14_METHOD_1_AC3632EAAC00CFA8_OFFSET))(a1, a2);
	}
};
