#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_AEA0006661D84E3E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_A02146AC1764D44A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180022F0)
#define CLASS_1_A02146AC1764D44A_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x180021B0)
#define CLASS_1_A02146AC1764D44A_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18001DF0)
#define CLASS_1_A02146AC1764D44A_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18002330)
#define CLASS_1_A02146AC1764D44A_METHOD_1_72A75746BA46DDD6_OFFSET UNITYSDK_OFFSET(0x18001F40)
#define CLASS_1_A02146AC1764D44A__CTOR_OFFSET UNITYSDK_OFFSET(0x18001DB0)

inline static constexpr unsigned int Class_1_A02146AC1764D44A_TypeDefinitionIndex = 79899;

class Class_1_A02146AC1764D44A : public ::System::Object
{
public:
	::Class_1_AEA0006661D84E3E* LIIFJAEMFDP; // 0x10
	::Class_1_7D46F1066EF90FA6_3* CKHDGEHELHN; // 0x18
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x20
	::System::UInt32 EOLDMPDDFEB; // 0x28
	::Struct_2_D645B4E0B73852B6 CJEMKBMCMBI; // 0x2C

	::System::Void _ctor(::Struct_2_D645B4E0B73852B6 a1, ::System::UInt32 a2, ::Class_1_7D46F1066EF90FA6_3* a3, ::Class_1_AEA0006661D84E3E* a4, ::RPG::Client::FateRin::Logging::ILoggerFactory* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6, ::System::UInt32, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_AEA0006661D84E3E*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A_GET_VERSION_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_72A75746BA46DDD6()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02146AC1764D44A_METHOD_1_72A75746BA46DDD6_OFFSET))(this);
	}
};
