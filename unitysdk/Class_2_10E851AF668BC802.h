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

#define CLASS_2_10E851AF668BC802_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250C3E0)
#define CLASS_2_10E851AF668BC802_GET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x1250CA70)
#define CLASS_2_10E851AF668BC802_GET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x1250CA50)
#define CLASS_2_10E851AF668BC802_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x1250C960)
#define CLASS_2_10E851AF668BC802_METHOD_2_21A5F537926DF4DD_OFFSET UNITYSDK_OFFSET(0x1250C6A0)
#define CLASS_2_10E851AF668BC802_METHOD_2_2A0DCDBB48648662_OFFSET UNITYSDK_OFFSET(0x1250C580)
#define CLASS_2_10E851AF668BC802_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1250C4D0)
#define CLASS_2_10E851AF668BC802_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1250C130)
#define CLASS_2_10E851AF668BC802_METHOD_2_9C5502B3E513A0A5_OFFSET UNITYSDK_OFFSET(0x1250C0E0)
#define CLASS_2_10E851AF668BC802_METHOD_2_F7CAA39998963DB6_OFFSET UNITYSDK_OFFSET(0x1250C980)
#define CLASS_2_10E851AF668BC802_SET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x1250CA80)
#define CLASS_2_10E851AF668BC802_SET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x1250CA60)
#define CLASS_2_10E851AF668BC802_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x1250C970)
#define CLASS_2_10E851AF668BC802__CTOR_OFFSET UNITYSDK_OFFSET(0x1250CA90)

inline static constexpr unsigned int Class_2_10E851AF668BC802_TypeDefinitionIndex = 61418;

class Class_2_10E851AF668BC802 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::PlanetFesAvatarData* _AvatarData_k__BackingField; // 0x18
	::RPG::GameCore::PlanetFesAvatarAnimConfig* _AnimConfig_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* _AnimCompositeLUT_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9C5502B3E513A0A5(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_9C5502B3E513A0A5_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_2A0DCDBB48648662(::RPG::GameCore::PlanetFesAnimTypeEnum a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_2A0DCDBB48648662_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_21A5F537926DF4DD(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_21A5F537926DF4DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::Client::PlanetFesAvatarData* get_AvatarData()
	{
		return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_GET_AVATARDATA_OFFSET))(this);
	}

	::System::Void set_AvatarData(::RPG::Client::PlanetFesAvatarData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_SET_AVATARDATA_OFFSET))(this, value);
	}

	::RPG::Client::PlanetFesLandData* Method_2_F7CAA39998963DB6()
	{
		return ((::RPG::Client::PlanetFesLandData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_METHOD_2_F7CAA39998963DB6_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAvatarAnimConfig* get_AnimConfig()
	{
		return ((::RPG::GameCore::PlanetFesAvatarAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_GET_ANIMCONFIG_OFFSET))(this);
	}

	::System::Void set_AnimConfig(::RPG::GameCore::PlanetFesAvatarAnimConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAvatarAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_SET_ANIMCONFIG_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* get_AnimCompositeLUT()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_GET_ANIMCOMPOSITELUT_OFFSET))(this);
	}

	::System::Void set_AnimCompositeLUT(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802_SET_ANIMCOMPOSITELUT_OFFSET))(this, value);
	}
};
