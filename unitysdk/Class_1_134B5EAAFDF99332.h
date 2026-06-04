#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }

#define CLASS_1_134B5EAAFDF99332_METHOD_1_0565FABAFC7D63CB_OFFSET UNITYSDK_OFFSET(0x138039B0)
#define CLASS_1_134B5EAAFDF99332_METHOD_1_0DCDDCFD25017B8A_OFFSET UNITYSDK_OFFSET(0x13803880)
#define CLASS_1_134B5EAAFDF99332_METHOD_1_350409C0AA9CB81D_OFFSET UNITYSDK_OFFSET(0x13803790)
#define CLASS_1_134B5EAAFDF99332_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x138036E0)

inline static constexpr unsigned int Class_1_134B5EAAFDF99332_TypeDefinitionIndex = 74176;

class Class_1_134B5EAAFDF99332 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_134B5EAAFDF99332_METHOD_1_ABFE6A357B89C69A_OFFSET))();
	}

	static ::System::Nullable_1<::RPG::GameCore::ChallengeGroupType> Method_1_350409C0AA9CB81D()
	{
		return ((::System::Nullable_1<::RPG::GameCore::ChallengeGroupType>(*)())((::PBYTE)hIl2Cpp + CLASS_1_134B5EAAFDF99332_METHOD_1_350409C0AA9CB81D_OFFSET))();
	}

	static ::System::Void Method_1_0DCDDCFD25017B8A(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_134B5EAAFDF99332_METHOD_1_0DCDDCFD25017B8A_OFFSET))(a1, a2);
	}

	static ::RPG::Client::TextID Method_1_0565FABAFC7D63CB(::System::Int32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_134B5EAAFDF99332_METHOD_1_0565FABAFC7D63CB_OFFSET))(a1);
	}
};
