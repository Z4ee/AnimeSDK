#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DEECAF4D1D257CA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FA2301FC3580108A_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x152C7480)
#define CLASS_1_FA2301FC3580108A_METHOD_1_4FF474FCEBC20659_OFFSET UNITYSDK_OFFSET(0x152C7380)
#define CLASS_1_FA2301FC3580108A_METHOD_1_710617EA4BA4C457_OFFSET UNITYSDK_OFFSET(0x152C7320)
#define CLASS_1_FA2301FC3580108A_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x152C71E0)
#define CLASS_1_FA2301FC3580108A_METHOD_1_E338DD0B13C463F8_OFFSET UNITYSDK_OFFSET(0x152C7400)
#define CLASS_1_FA2301FC3580108A_METHOD_1_F88BB8550AF9F145_OFFSET UNITYSDK_OFFSET(0x152C72A0)
#define CLASS_1_FA2301FC3580108A_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x152C7490)
#define CLASS_1_FA2301FC3580108A__CTOR_OFFSET UNITYSDK_OFFSET(0x152C71D0)

inline static constexpr unsigned int Class_1_FA2301FC3580108A_TypeDefinitionIndex = 61982;

class Class_1_FA2301FC3580108A : public ::System::Object
{
public:
	::Class_1_2DEECAF4D1D257CA* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_F88BB8550AF9F145(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_METHOD_1_F88BB8550AF9F145_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_710617EA4BA4C457(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_METHOD_1_710617EA4BA4C457_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4FF474FCEBC20659(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_METHOD_1_4FF474FCEBC20659_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Method_1_E338DD0B13C463F8()
	{
		return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_METHOD_1_E338DD0B13C463F8_OFFSET))(this);
	}

	::Class_1_2DEECAF4D1D257CA* get_PlayerReturnTrialAvatarInfoProvider()
	{
		return ((::Class_1_2DEECAF4D1D257CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
	}

	::System::Void set_PlayerReturnTrialAvatarInfoProvider(::Class_1_2DEECAF4D1D257CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DEECAF4D1D257CA*))((::PBYTE)hIl2Cpp + CLASS_1_FA2301FC3580108A_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, a1);
	}
};
