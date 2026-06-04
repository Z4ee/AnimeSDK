#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DEECAF4D1D257CA;
namespace RPG::Client { class TeamBuildCalculator; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5514DE58090FFE7F_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1391EC30)
#define CLASS_1_5514DE58090FFE7F_METHOD_1_C08BE27261795AB9_OFFSET UNITYSDK_OFFSET(0x1391E730)
#define CLASS_1_5514DE58090FFE7F_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1391E9D0)
#define CLASS_1_5514DE58090FFE7F_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1391EC40)
#define CLASS_1_5514DE58090FFE7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1391E6E0)

inline static constexpr unsigned int Class_1_5514DE58090FFE7F_TypeDefinitionIndex = 57882;

class Class_1_5514DE58090FFE7F : public ::System::Object
{
public:
	::RPG::Client::TeamBuildCalculator* Field_1_0; // 0x10
	::Class_1_2DEECAF4D1D257CA* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>* Method_1_C08BE27261795AB9()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F_METHOD_1_C08BE27261795AB9_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::Class_1_2DEECAF4D1D257CA* get_PlayerReturnTrialAvatarInfoProvider()
	{
		return ((::Class_1_2DEECAF4D1D257CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
	}

	::System::Void set_PlayerReturnTrialAvatarInfoProvider(::Class_1_2DEECAF4D1D257CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DEECAF4D1D257CA*))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, a1);
	}
};
