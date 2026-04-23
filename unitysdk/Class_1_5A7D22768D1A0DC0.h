#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_380;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreviewAvatarProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A7D22768D1A0DC0_GET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x11DE1650)
#define CLASS_1_5A7D22768D1A0DC0_METHOD_1_0455E74A2C24147C_OFFSET UNITYSDK_OFFSET(0x11DE1930)
#define CLASS_1_5A7D22768D1A0DC0_METHOD_1_195DF386A5E6C470_OFFSET UNITYSDK_OFFSET(0x11DE1670)
#define CLASS_1_5A7D22768D1A0DC0_METHOD_1_E582D531F4D0FF21_OFFSET UNITYSDK_OFFSET(0x11DE1B60)
#define CLASS_1_5A7D22768D1A0DC0_SET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x11DE1660)
#define CLASS_1_5A7D22768D1A0DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE1AD0)

inline static constexpr unsigned int Class_1_5A7D22768D1A0DC0_TypeDefinitionIndex = 57804;

class Class_1_5A7D22768D1A0DC0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_380* _AvatarFactory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::RPG::Client::PreviewAvatarProxy*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_380* get_AvatarFactory()
	{
		return ((::Class_0_16E4307DCC419505_380*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0_GET_AVATARFACTORY_OFFSET))(this);
	}

	::System::Void set_AvatarFactory(::Class_0_16E4307DCC419505_380* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0_SET_AVATARFACTORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_195DF386A5E6C470(::Struct_2_AAD4F4215611A944& a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0_METHOD_1_195DF386A5E6C470_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0455E74A2C24147C(::RPG::Client::PreviewAvatarProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PreviewAvatarProxy*))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0_METHOD_1_0455E74A2C24147C_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_E582D531F4D0FF21(::Struct_2_AAD4F4215611A944& a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_5A7D22768D1A0DC0_METHOD_1_E582D531F4D0FF21_OFFSET))(this, a1, a2);
	}
};
