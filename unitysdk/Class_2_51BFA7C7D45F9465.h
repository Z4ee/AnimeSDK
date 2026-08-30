#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_51BFA7C7D45F9465_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x130A0730)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x1309F7E0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x130A0650)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x130A0580)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x130A0520)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x1309F550)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1309F4A0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x130A06D0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_7972F6E7977EE3D1_OFFSET UNITYSDK_OFFSET(0x130A03A0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x1309FFC0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_A952A8375452F1E8_OFFSET UNITYSDK_OFFSET(0x1309FE40)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x130A0320)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x130A05F0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_E09D592A696D3352_OFFSET UNITYSDK_OFFSET(0x130A0430)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1309F5A0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_EEA2FE649684CA1B_OFFSET UNITYSDK_OFFSET(0x1309FE90)
#define CLASS_2_51BFA7C7D45F9465_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x130A0740)
#define CLASS_2_51BFA7C7D45F9465__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0750)
#define CLASS_2_51BFA7C7D45F9465__ONBIND_OFFSET UNITYSDK_OFFSET(0x1309F2A0)
#define CLASS_2_51BFA7C7D45F9465__ONTICK_OFFSET UNITYSDK_OFFSET(0x1309FF30)

inline static constexpr unsigned int Class_2_51BFA7C7D45F9465_TypeDefinitionIndex = 71809;

class Class_2_51BFA7C7D45F9465 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* JGEGLOKFOCM; // 0x0
	// static const ::System::String* JCLANKOMIIP; // 0x0
	// static const ::System::String* AEGLBFIEBAC; // 0x0
	// static const ::System::String* GAOFPPDCPCE; // 0x0
	// static const ::System::String* OPHLDLOJNGP; // 0x0
	// static const ::System::String* OCDKLPJMOLJ; // 0x0
	// static const ::System::String* IHJIOPAKFJO; // 0x0
	// static const ::System::String* BMBBPNFLIGC; // 0x0
	// static const ::System::Single LFLJFBNOKOB; // 0x0
	// static const ::System::String* OKIMBLGMCFD; // 0x0
	// static const ::System::String* ONNNIHPEFDL; // 0x0
	// static const ::System::String* KLMIBMHDODN; // 0x0
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
	::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x68
	::RPG::Client::LocalizedText* CICDAIDENDF; // 0x70
	::UnityEngine::UI::Image* AJKPFICIIIP; // 0x78
	::RPG::Client::LocalizedText* CNKCNJDBIJD; // 0x80
	::UnityEngine::Transform* EEEDLPNBLND; // 0x88
	::UnityEngine::Transform* JEKIAKPFELH; // 0x90
	::Class_1_A474572029D08468* ABOBEBEOHPA; // 0x98
	::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0xA0
	::UnityEngine::Transform* PJNLAHMNPJP; // 0xA8
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xB0
	::System::Boolean FHBNNGCEPFD; // 0xB8
	::System::Boolean _IsEnable_k__BackingField; // 0xB9
	::RPG::Client::UISkillIndex CKGLFLGFPPP; // 0xBC
	::System::Single DCIHJHCJNMI; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_EEA2FE649684CA1B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_EEA2FE649684CA1B_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_2_7972F6E7977EE3D1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ICharacterSkillRowData* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ICharacterSkillRowData*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_7972F6E7977EE3D1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E09D592A696D3352(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_E09D592A696D3352_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_SET_ISENABLE_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndex Method_2_A952A8375452F1E8()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_A952A8375452F1E8_OFFSET))(this);
	}
};
