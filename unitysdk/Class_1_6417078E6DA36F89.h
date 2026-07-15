#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1282;
class Class_1_F127B01B07319136;
class Class_2_2956BAF0F97343C0;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6417078E6DA36F89_METHOD_1_36B729164C92BDBF_OFFSET UNITYSDK_OFFSET(0x1529EBC0)
#define CLASS_1_6417078E6DA36F89_METHOD_1_586283E5554113CF_OFFSET UNITYSDK_OFFSET(0x1529E9D0)
#define CLASS_1_6417078E6DA36F89_METHOD_1_AFDE4487D6E86599_OFFSET UNITYSDK_OFFSET(0x1529EC30)
#define CLASS_1_6417078E6DA36F89_METHOD_1_BCCD5C4A411A6B32_OFFSET UNITYSDK_OFFSET(0x1529EDB0)
#define CLASS_1_6417078E6DA36F89_METHOD_1_DD9A38D450988876_OFFSET UNITYSDK_OFFSET(0x1529E700)
#define CLASS_1_6417078E6DA36F89_METHOD_1_F48F5DA53CCC7E90_OFFSET UNITYSDK_OFFSET(0x1529E8F0)
#define CLASS_1_6417078E6DA36F89__CTOR_OFFSET UNITYSDK_OFFSET(0x1529E640)

inline static constexpr unsigned int Class_1_6417078E6DA36F89_TypeDefinitionIndex = 75816;

class Class_1_6417078E6DA36F89 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1282* Field_1_0; // 0x10
	::RPG::Client::FateRin::Logging::ILogger* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1282* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1282*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F127B01B07319136* Method_1_DD9A38D450988876(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_1_F127B01B07319136*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_DD9A38D450988876_OFFSET))(this, a1);
	}

	::Class_1_F127B01B07319136* Method_1_F48F5DA53CCC7E90(::RPG::GameCore::FateRinCaseBoardAvatarType a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
	{
		return ((::Class_1_F127B01B07319136*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_F48F5DA53CCC7E90_OFFSET))(this, a1, a2);
	}

	::Class_2_2956BAF0F97343C0* Method_1_586283E5554113CF(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_2_2956BAF0F97343C0*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_586283E5554113CF_OFFSET))(this, a1);
	}

	::Class_2_2956BAF0F97343C0* Method_1_36B729164C92BDBF(::RPG::GameCore::FateRinCaseBoardAvatarType a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
	{
		return ((::Class_2_2956BAF0F97343C0*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_36B729164C92BDBF_OFFSET))(this, a1, a2);
	}

	::Class_1_F127B01B07319136* Method_1_AFDE4487D6E86599(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_1_F127B01B07319136*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_AFDE4487D6E86599_OFFSET))(this, a1);
	}

	::Class_2_2956BAF0F97343C0* Method_1_BCCD5C4A411A6B32(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::Class_2_2956BAF0F97343C0*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6417078E6DA36F89_METHOD_1_BCCD5C4A411A6B32_OFFSET))(this, a1);
	}
};
