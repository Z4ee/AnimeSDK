#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_25EA9E797601849C;
class Class_1_E9648967DA5FC7CD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CE43C07341147131_METHOD_1_025A36C3E75A8DD6_OFFSET UNITYSDK_OFFSET(0x16B11A00)
#define CLASS_1_CE43C07341147131_METHOD_1_16B099D8E3E887CE_OFFSET UNITYSDK_OFFSET(0x16B11C80)
#define CLASS_1_CE43C07341147131_METHOD_1_4051A03788371988_OFFSET UNITYSDK_OFFSET(0x16B11670)
#define CLASS_1_CE43C07341147131_METHOD_1_775A74BE29D6B68A_OFFSET UNITYSDK_OFFSET(0x16B12670)
#define CLASS_1_CE43C07341147131_METHOD_1_B8589BA48FF836FA_OFFSET UNITYSDK_OFFSET(0x16B12000)
#define CLASS_1_CE43C07341147131_METHOD_1_BF830799050DB17F_OFFSET UNITYSDK_OFFSET(0x16B12330)
#define CLASS_1_CE43C07341147131__CTOR_OFFSET UNITYSDK_OFFSET(0x16B11590)

inline static constexpr unsigned int Class_1_CE43C07341147131_TypeDefinitionIndex = 79892;

class Class_1_CE43C07341147131 : public ::System::Object
{
public:
	::Class_1_E9648967DA5FC7CD* HEJEGOGBFMP; // 0x10
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x18
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* JKMKALIDPJH; // 0x20

	::System::Void _ctor(::Class_1_E9648967DA5FC7CD* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9648967DA5FC7CD*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_4051A03788371988(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_4051A03788371988_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_16B099D8E3E887CE(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_16B099D8E3E887CE_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_BF830799050DB17F(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_BF830799050DB17F_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_775A74BE29D6B68A(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_775A74BE29D6B68A_OFFSET))(this, a1);
	}

	static ::Class_1_25EA9E797601849C* Method_1_025A36C3E75A8DD6(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::Class_1_25EA9E797601849C*(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_025A36C3E75A8DD6_OFFSET))(a1);
	}

	static ::Class_1_25EA9E797601849C* Method_1_B8589BA48FF836FA(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::Class_1_25EA9E797601849C*(*)(::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131_METHOD_1_B8589BA48FF836FA_OFFSET))(a1, a2);
	}
};
