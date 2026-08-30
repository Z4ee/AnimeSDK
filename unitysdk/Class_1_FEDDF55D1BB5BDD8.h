#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }

#define CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_0565FABAFC7D63CB_OFFSET UNITYSDK_OFFSET(0x155DE270)
#define CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x155DDF20)
#define CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_2DD590057EF30D07_OFFSET UNITYSDK_OFFSET(0x155DE000)
#define CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_DCFCCF1F1557FC45_OFFSET UNITYSDK_OFFSET(0x155DE140)

inline static constexpr unsigned int Class_1_FEDDF55D1BB5BDD8_TypeDefinitionIndex = 80193;

class Class_1_FEDDF55D1BB5BDD8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_0DF420E95D6252BE_OFFSET))();
	}

	static ::System::Nullable_1<::RPG::GameCore::ChallengeGroupType> Method_1_2DD590057EF30D07()
	{
		return ((::System::Nullable_1<::RPG::GameCore::ChallengeGroupType>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_2DD590057EF30D07_OFFSET))();
	}

	static ::System::Void Method_1_DCFCCF1F1557FC45(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_DCFCCF1F1557FC45_OFFSET))(a1, a2);
	}

	static ::RPG::Client::TextID Method_1_0565FABAFC7D63CB(::System::Int32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDF55D1BB5BDD8_METHOD_1_0565FABAFC7D63CB_OFFSET))(a1);
	}
};
