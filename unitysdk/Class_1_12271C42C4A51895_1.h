#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_12271C42C4A51895_1_METHOD_1_7EFD94ECD2A1208E_OFFSET UNITYSDK_OFFSET(0x16F69A90)
#define CLASS_1_12271C42C4A51895_1_METHOD_1_F8F6A303DF35A01D_OFFSET UNITYSDK_OFFSET(0x16F69B50)
#define CLASS_1_12271C42C4A51895_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F69D10)

inline static constexpr unsigned int Class_1_12271C42C4A51895_1_TypeDefinitionIndex = 60075;

class Class_1_12271C42C4A51895_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12271C42C4A51895_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7EFD94ECD2A1208E(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_12271C42C4A51895_1_METHOD_1_7EFD94ECD2A1208E_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_384* Method_1_F8F6A303DF35A01D(::Class_0_16E4307DCC419505_384* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_384*(*)(::PVOID, ::Class_0_16E4307DCC419505_384*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_12271C42C4A51895_1_METHOD_1_F8F6A303DF35A01D_OFFSET))(this, a1, a2, a3);
	}
};
