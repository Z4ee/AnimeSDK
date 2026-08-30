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

#define CLASS_2_E6EF2882E9A3F562_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162AC0A0)
#define CLASS_2_E6EF2882E9A3F562_GET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x162AC7B0)
#define CLASS_2_E6EF2882E9A3F562_GET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x162AC790)
#define CLASS_2_E6EF2882E9A3F562_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x162AC620)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x162AC0F0)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_3FC7548B0A5FED1D_OFFSET UNITYSDK_OFFSET(0x162ABD20)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_5A43AF909A0A1F64_OFFSET UNITYSDK_OFFSET(0x162AC640)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x162ABD70)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_8FFFE37609FB2D6B_OFFSET UNITYSDK_OFFSET(0x162AC1A0)
#define CLASS_2_E6EF2882E9A3F562_METHOD_2_C19D20271C8024A4_OFFSET UNITYSDK_OFFSET(0x162AC2B0)
#define CLASS_2_E6EF2882E9A3F562_SET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0x162AC7C0)
#define CLASS_2_E6EF2882E9A3F562_SET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x162AC7A0)
#define CLASS_2_E6EF2882E9A3F562_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x162AC630)
#define CLASS_2_E6EF2882E9A3F562__CTOR_OFFSET UNITYSDK_OFFSET(0x162AC7D0)

inline static constexpr unsigned int Class_2_E6EF2882E9A3F562_TypeDefinitionIndex = 66693;

class Class_2_E6EF2882E9A3F562 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* _AnimCompositeLUT_k__BackingField; // 0x18
	::RPG::Client::PlanetFesAvatarData* _AvatarData_k__BackingField; // 0x20
	::RPG::GameCore::PlanetFesAvatarAnimConfig* _AnimConfig_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3FC7548B0A5FED1D(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_3FC7548B0A5FED1D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_8FFFE37609FB2D6B(::RPG::GameCore::PlanetFesAnimTypeEnum a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_8FFFE37609FB2D6B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_2_C19D20271C8024A4(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_C19D20271C8024A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::RPG::Client::PlanetFesAvatarData* get_AvatarData()
	{
		return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_GET_AVATARDATA_OFFSET))(this);
	}

	::System::Void set_AvatarData(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_SET_AVATARDATA_OFFSET))(this, a1);
	}

	::RPG::Client::PlanetFesLandData* Method_2_5A43AF909A0A1F64()
	{
		return ((::RPG::Client::PlanetFesLandData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_METHOD_2_5A43AF909A0A1F64_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAvatarAnimConfig* get_AnimConfig()
	{
		return ((::RPG::GameCore::PlanetFesAvatarAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_GET_ANIMCONFIG_OFFSET))(this);
	}

	::System::Void set_AnimConfig(::RPG::GameCore::PlanetFesAvatarAnimConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAvatarAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_SET_ANIMCONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* get_AnimCompositeLUT()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_GET_ANIMCOMPOSITELUT_OFFSET))(this);
	}

	::System::Void set_AnimCompositeLUT(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562_SET_ANIMCOMPOSITELUT_OFFSET))(this, a1);
	}
};
