#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_373;
class Class_1_152440782683448A;
class Class_2_D079E335ECA1E136;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_855C52860E843240_GET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x11500E70)
#define CLASS_1_855C52860E843240_GET_AVATARPROXYFACTORY_OFFSET UNITYSDK_OFFSET(0x11500E90)
#define CLASS_1_855C52860E843240_GET_SERVERAVATARPROFILEFACTORY_OFFSET UNITYSDK_OFFSET(0x11500EB0)
#define CLASS_1_855C52860E843240_METHOD_1_0B6F187DB45E7EDF_OFFSET UNITYSDK_OFFSET(0x11501650)
#define CLASS_1_855C52860E843240_METHOD_1_24DDBE0B1A4A8BFD_1_OFFSET UNITYSDK_OFFSET(0x11501AC0)
#define CLASS_1_855C52860E843240_METHOD_1_24DDBE0B1A4A8BFD_OFFSET UNITYSDK_OFFSET(0x11501A00)
#define CLASS_1_855C52860E843240_METHOD_1_381C8F6E3911CBDD_OFFSET UNITYSDK_OFFSET(0x11500ED0)
#define CLASS_1_855C52860E843240_METHOD_1_4471D735DB5DDCA9_1_OFFSET UNITYSDK_OFFSET(0x11501D90)
#define CLASS_1_855C52860E843240_METHOD_1_4471D735DB5DDCA9_OFFSET UNITYSDK_OFFSET(0x11501B80)
#define CLASS_1_855C52860E843240_METHOD_1_5D0F7C2E3D59BB96_OFFSET UNITYSDK_OFFSET(0x115010C0)
#define CLASS_1_855C52860E843240_METHOD_1_6985E2D2A0BCF409_1_OFFSET UNITYSDK_OFFSET(0x115013D0)
#define CLASS_1_855C52860E843240_METHOD_1_6985E2D2A0BCF409_OFFSET UNITYSDK_OFFSET(0x11501150)
#define CLASS_1_855C52860E843240_METHOD_1_88479DB0BA833117_OFFSET UNITYSDK_OFFSET(0x115016B0)
#define CLASS_1_855C52860E843240_SET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x11500E80)
#define CLASS_1_855C52860E843240_SET_AVATARPROXYFACTORY_OFFSET UNITYSDK_OFFSET(0x11500EA0)
#define CLASS_1_855C52860E843240_SET_SERVERAVATARPROFILEFACTORY_OFFSET UNITYSDK_OFFSET(0x11500EC0)
#define CLASS_1_855C52860E843240__CTOR_OFFSET UNITYSDK_OFFSET(0x11501FA0)

inline static constexpr unsigned int Class_1_855C52860E843240_TypeDefinitionIndex = 50960;

class Class_1_855C52860E843240 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_373* _AvatarFactory_k__BackingField; // 0x10
	::Class_2_D079E335ECA1E136* _ServerAvatarProfileFactory_k__BackingField; // 0x18
	::Class_1_152440782683448A* _AvatarProxyFactory_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_BC950E36747FB4C9, ::RPG::AvatarSystem::Avatar*>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarProxy*>* Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_2, ::RPG::Client::AvatarProxy*>* Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_373* get_AvatarFactory()
	{
		return ((::Class_0_16E4307DCC419505_373*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_GET_AVATARFACTORY_OFFSET))(this);
	}

	::System::Void set_AvatarFactory(::Class_0_16E4307DCC419505_373* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_SET_AVATARFACTORY_OFFSET))(this, value);
	}

	::Class_1_152440782683448A* get_AvatarProxyFactory()
	{
		return ((::Class_1_152440782683448A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_GET_AVATARPROXYFACTORY_OFFSET))(this);
	}

	::System::Void set_AvatarProxyFactory(::Class_1_152440782683448A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152440782683448A*))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_SET_AVATARPROXYFACTORY_OFFSET))(this, value);
	}

	::Class_2_D079E335ECA1E136* get_ServerAvatarProfileFactory()
	{
		return ((::Class_2_D079E335ECA1E136*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_GET_SERVERAVATARPROFILEFACTORY_OFFSET))(this);
	}

	::System::Void set_ServerAvatarProfileFactory(::Class_2_D079E335ECA1E136* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D079E335ECA1E136*))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_SET_SERVERAVATARPROFILEFACTORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::Avatar* Method_1_381C8F6E3911CBDD(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_381C8F6E3911CBDD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>* Method_1_5D0F7C2E3D59BB96(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_5D0F7C2E3D59BB96_OFFSET))(this, a1);
	}

	::System::Void Method_1_6985E2D2A0BCF409(::Struct_2_019938BC9C50B169_2& a1, ::Struct_2_BC950E36747FB4C9& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_6985E2D2A0BCF409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6985E2D2A0BCF409_1(::Struct_2_019938BC9C50B169_1& a1, ::Struct_2_019938BC9C50B169_2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_6985E2D2A0BCF409_1_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_0B6F187DB45E7EDF(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_0B6F187DB45E7EDF_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_24DDBE0B1A4A8BFD(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_24DDBE0B1A4A8BFD_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_24DDBE0B1A4A8BFD_1(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_24DDBE0B1A4A8BFD_1_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_88479DB0BA833117(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_88479DB0BA833117_OFFSET))(this, a1);
	}

	::System::Void Method_1_4471D735DB5DDCA9(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_4471D735DB5DDCA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4471D735DB5DDCA9_1(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240_METHOD_1_4471D735DB5DDCA9_1_OFFSET))(this, a1);
	}
};
