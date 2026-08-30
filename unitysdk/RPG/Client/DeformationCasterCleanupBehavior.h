#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class DeformationCasterCleanupMonoPlugin; }

#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x192E1F20)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x192E1E50)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x192E1CF0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x192E1DC0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x192E2020)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCasterCleanupBehavior_TypeDefinitionIndex = 70230;

	class DeformationCasterCleanupBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_3_4307B2A4B4A12C1A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_1_OFFSET))(this);
		}

		::System::Void Method_3_870AF3CD1D0A67B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_METHOD_3_870AF3CD1D0A67B1_OFFSET))(this);
		}

		::RPG::Client::DeformationCasterCleanupMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DeformationCasterCleanupMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
