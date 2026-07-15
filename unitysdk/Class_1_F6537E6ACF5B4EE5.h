#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_F6537E6ACF5B4EE5_METHOD_1_82491156CBEEDB18_OFFSET UNITYSDK_OFFSET(0x16738F50)
#define CLASS_1_F6537E6ACF5B4EE5_METHOD_1_B2958DA8327A5271_OFFSET UNITYSDK_OFFSET(0x16739020)
#define CLASS_1_F6537E6ACF5B4EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x167390E0)

inline static constexpr unsigned int Class_1_F6537E6ACF5B4EE5_TypeDefinitionIndex = 60074;

class Class_1_F6537E6ACF5B4EE5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6537E6ACF5B4EE5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_82491156CBEEDB18(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_F6537E6ACF5B4EE5_METHOD_1_82491156CBEEDB18_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_384* Method_1_B2958DA8327A5271(::Class_0_16E4307DCC419505_384* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_384*(*)(::PVOID, ::Class_0_16E4307DCC419505_384*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_F6537E6ACF5B4EE5_METHOD_1_B2958DA8327A5271_OFFSET))(this, a1, a2, a3);
	}
};
