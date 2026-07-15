#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_9E840E2FFD45BB99;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_01E0F6BC11C98F1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DAA130)
#define CLASS_1_01E0F6BC11C98F1A_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x16DA9FF0)
#define CLASS_1_01E0F6BC11C98F1A_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x16DA9C30)
#define CLASS_1_01E0F6BC11C98F1A_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x16DAA170)
#define CLASS_1_01E0F6BC11C98F1A_METHOD_1_72A75746BA46DDD6_OFFSET UNITYSDK_OFFSET(0x16DA9D80)
#define CLASS_1_01E0F6BC11C98F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA9BF0)

inline static constexpr unsigned int Class_1_01E0F6BC11C98F1A_TypeDefinitionIndex = 76268;

class Class_1_01E0F6BC11C98F1A : public ::System::Object
{
public:
	::RPG::Client::FateRin::Logging::ILogger* Field_1_0; // 0x10
	::Class_1_9E840E2FFD45BB99* Field_1_1; // 0x18
	::Class_1_7D46F1066EF90FA6_3* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_7D46F1066EF90FA6_3* a3, ::Class_1_9E840E2FFD45BB99* a4, ::RPG::Client::FateRin::Logging::ILoggerFactory* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_9E840E2FFD45BB99*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_384*))((::PBYTE)hIl2Cpp + CLASS_1_01E0F6BC11C98F1A_EXPORTPROFILE_OFFSET))(this, a1);
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
