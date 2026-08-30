#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_AEA0006661D84E3E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_01E0F6BC11C98F1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169B0810)
#define CLASS_1_01E0F6BC11C98F1A_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x169B06D0)
#define CLASS_1_01E0F6BC11C98F1A_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x169B0310)
#define CLASS_1_01E0F6BC11C98F1A_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x169B0850)
#define CLASS_1_01E0F6BC11C98F1A_METHOD_1_72A75746BA46DDD6_OFFSET UNITYSDK_OFFSET(0x169B0460)
#define CLASS_1_01E0F6BC11C98F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x169B02D0)

inline static constexpr unsigned int Class_1_01E0F6BC11C98F1A_TypeDefinitionIndex = 79901;

class Class_1_01E0F6BC11C98F1A : public ::System::Object
{
public:
	::Class_1_AEA0006661D84E3E* LIIFJAEMFDP; // 0x10
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x18
	::Class_1_7D46F1066EF90FA6_3* CKHDGEHELHN; // 0x20
	::System::UInt32 OFEEMOCGHCA; // 0x28
	::System::UInt32 EOLDMPDDFEB; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_7D46F1066EF90FA6_3* a3, ::Class_1_AEA0006661D84E3E* a4, ::RPG::Client::FateRin::Logging::ILoggerFactory* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_AEA0006661D84E3E*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_GET_VERSION_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_72A75746BA46DDD6()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_METHOD_1_72A75746BA46DDD6_OFFSET))(this);
	}
};
