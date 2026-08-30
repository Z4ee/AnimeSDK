#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_4861D42713DBAB1D_METHOD_1_876C3F8E8206B5CD_OFFSET UNITYSDK_OFFSET(0x1928E5A0)
#define CLASS_1_4861D42713DBAB1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1928E4F0)

inline static constexpr unsigned int Class_1_4861D42713DBAB1D_TypeDefinitionIndex = 79908;

class Class_1_4861D42713DBAB1D : public ::System::Object
{
public:
	::Class_1_F248B058F5A06B98* DEEMJACOGII; // 0x10
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x18

	::System::Void _ctor(::Class_1_F248B058F5A06B98* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F248B058F5A06B98*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_4861D42713DBAB1D__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* Method_1_876C3F8E8206B5CD(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_4861D42713DBAB1D_METHOD_1_876C3F8E8206B5CD_OFFSET))(this, a1);
	}
};
