#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesLandData; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class PlanetFesAvatarAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2D90503A2C96CE28_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14370710)
#define CLASS_2_2D90503A2C96CE28_GET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x14370D10)
#define CLASS_2_2D90503A2C96CE28_GET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x14370CF0)
#define CLASS_2_2D90503A2C96CE28_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x14370C00)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14370760)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x14370420)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_3F567E67E7BEBB80_OFFSET UNITYSDK_OFFSET(0x14370810)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_4ACC22B5EF863806_OFFSET UNITYSDK_OFFSET(0x143703D0)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_52798EB998AFAE9F_OFFSET UNITYSDK_OFFSET(0x14370C20)
#define CLASS_2_2D90503A2C96CE28_METHOD_2_CEE4613E2D483767_OFFSET UNITYSDK_OFFSET(0x14370920)
#define CLASS_2_2D90503A2C96CE28_SET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x14370D20)
#define CLASS_2_2D90503A2C96CE28_SET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x14370D00)
#define CLASS_2_2D90503A2C96CE28_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x14370C10)
#define CLASS_2_2D90503A2C96CE28__CTOR_OFFSET UNITYSDK_OFFSET(0x14370D30)

inline static constexpr unsigned int Class_2_2D90503A2C96CE28_TypeDefinitionIndex = 62342;

class Class_2_2D90503A2C96CE28 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::PlanetFesAvatarData* _AvatarData_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* _AnimCompositeLUT_k__BackingField; // 0x20
	::RPG::GameCore::PlanetFesAvatarAnimConfig* _AnimConfig_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4ACC22B5EF863806(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_4ACC22B5EF863806_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_3F567E67E7BEBB80(::RPG::GameCore::PlanetFesAnimTypeEnum a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_3F567E67E7BEBB80_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_CEE4613E2D483767(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_CEE4613E2D483767_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::RPG::Client::PlanetFesAvatarData* get_AvatarData()
	{
		return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_GET_AVATARDATA_OFFSET))(this);
	}

	::System::Void set_AvatarData(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_SET_AVATARDATA_OFFSET))(this, a1);
	}

	::RPG::Client::PlanetFesLandData* Method_2_52798EB998AFAE9F()
	{
		return ((::RPG::Client::PlanetFesLandData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_METHOD_2_52798EB998AFAE9F_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAvatarAnimConfig* get_AnimConfig()
	{
		return ((::RPG::GameCore::PlanetFesAvatarAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_GET_ANIMCONFIG_OFFSET))(this);
	}

	::System::Void set_AnimConfig(::RPG::GameCore::PlanetFesAvatarAnimConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAvatarAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_SET_ANIMCONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* get_AnimCompositeLUT()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_GET_ANIMCOMPOSITELUT_OFFSET))(this);
	}

	::System::Void set_AnimCompositeLUT(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_2D90503A2C96CE28_SET_ANIMCOMPOSITELUT_OFFSET))(this, a1);
	}
};
