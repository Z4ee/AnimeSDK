#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2D3D502BC62D9FF7;
namespace RPG::Client { class TeamBuildCalculator; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA341E6BE58C6762_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x12129160)
#define CLASS_1_EA341E6BE58C6762_METHOD_1_1435F324D2DE43F0_OFFSET UNITYSDK_OFFSET(0x12128C80)
#define CLASS_1_EA341E6BE58C6762_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x12128EF0)
#define CLASS_1_EA341E6BE58C6762_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x12129170)
#define CLASS_1_EA341E6BE58C6762__CTOR_OFFSET UNITYSDK_OFFSET(0x12128C30)

inline static constexpr unsigned int Class_1_EA341E6BE58C6762_TypeDefinitionIndex = 57092;

class Class_1_EA341E6BE58C6762 : public ::System::Object
{
public:
	::RPG::Client::TeamBuildCalculator* Field_1_1; // 0x10
	::Class_1_2D3D502BC62D9FF7* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>* Method_1_1435F324D2DE43F0()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762_METHOD_1_1435F324D2DE43F0_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::Class_1_2D3D502BC62D9FF7* get_PlayerReturnTrialAvatarInfoProvider()
	{
		return ((::Class_1_2D3D502BC62D9FF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
	}

	::System::Void set_PlayerReturnTrialAvatarInfoProvider(::Class_1_2D3D502BC62D9FF7* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D3D502BC62D9FF7*))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, value);
	}
};
