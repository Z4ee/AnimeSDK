#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }

#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_64F0C85A431FBD69_1_OFFSET UNITYSDK_OFFSET(0xA618020)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0xA617F90)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_87C146B88C09819B_OFFSET UNITYSDK_OFFSET(0xA617CE0)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_BB21E70A98E57A0B_OFFSET UNITYSDK_OFFSET(0xA6180B0)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xA617F40)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xA617EF0)
#define CLASS_1_1D9AC93FBE6CB05F_METHOD_1_F011EE5765D2A9CC_OFFSET UNITYSDK_OFFSET(0xA617DA0)

inline static constexpr unsigned int Class_1_1D9AC93FBE6CB05F_TypeDefinitionIndex = 59067;

class Class_1_1D9AC93FBE6CB05F : public ::System::Object
{
public:
	static ::System::Nullable_1<::RPG::GameCore::ChallengeGroupType> Method_1_87C146B88C09819B()
	{
		return ((::System::Nullable_1<::RPG::GameCore::ChallengeGroupType>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_87C146B88C09819B_OFFSET))();
	}

	static ::RPG::Client::ChallengeData* Method_1_F011EE5765D2A9CC()
	{
		return ((::RPG::Client::ChallengeData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_F011EE5765D2A9CC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_64F0C85A431FBD69_1_OFFSET))();
	}

	static ::System::Boolean Method_1_BB21E70A98E57A0B(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_1D9AC93FBE6CB05F_METHOD_1_BB21E70A98E57A0B_OFFSET))(a1);
	}
};
