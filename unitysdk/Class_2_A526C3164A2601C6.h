#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_A526C3164A2601C6_ModifyValueStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_2_785640A227AAD72E;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A526C3164A2601C6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A08BA0)
#define CLASS_2_A526C3164A2601C6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18A08E60)
#define CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A07380)
#define CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18A073A0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_00BE5A24F02298DC_OFFSET UNITYSDK_OFFSET(0x18A08090)
#define CLASS_2_A526C3164A2601C6_METHOD_2_16ABB763B7D3AEA1_OFFSET UNITYSDK_OFFSET(0x18A08710)
#define CLASS_2_A526C3164A2601C6_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x18A08540)
#define CLASS_2_A526C3164A2601C6_METHOD_2_1F46A648CF073D05_OFFSET UNITYSDK_OFFSET(0x18A08AD0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x18A07740)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x18A07550)
#define CLASS_2_A526C3164A2601C6_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x18A07BA0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18A073E0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18A07920)
#define CLASS_2_A526C3164A2601C6_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18A07010)
#define CLASS_2_A526C3164A2601C6_METHOD_2_58BFC52E546ECE1F_OFFSET UNITYSDK_OFFSET(0x18A08030)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5D868F3D6A3DAB13_OFFSET UNITYSDK_OFFSET(0x18A07DB0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x18A08330)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x18A079F0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_AAE61ABAE8899086_OFFSET UNITYSDK_OFFSET(0x18A07C60)
#define CLASS_2_A526C3164A2601C6_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18A08620)
#define CLASS_2_A526C3164A2601C6_METHOD_2_BCA794728913022B_OFFSET UNITYSDK_OFFSET(0x18A07EB0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A086B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x18A07800)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18A08A10)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18A08950)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x18A085B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x18A07870)
#define CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A07390)
#define CLASS_2_A526C3164A2601C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A09130)
#define CLASS_2_A526C3164A2601C6__CTOR_OFFSET UNITYSDK_OFFSET(0x18A090E0)
#define CLASS_2_A526C3164A2601C6__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A06F00)
#define CLASS_2_A526C3164A2601C6__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18A07B60)
#define CLASS_2_A526C3164A2601C6__ONTICK_OFFSET UNITYSDK_OFFSET(0x18A07990)

inline static constexpr unsigned int Class_2_A526C3164A2601C6_TypeDefinitionIndex = 71518;

class Class_2_A526C3164A2601C6 : public ::Class_1_34917908B7833130
{
public:
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_PGBDJCMFMLA()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x14330);
	}
	static ::RPG::Client::TextID* StaticGet_DNGJPMIKNJN()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x14338);
	}
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	// static const ::System::String* KOKPKMKKOLE; // 0x0
	// static const ::System::String* MAJLGCMMDJM; // 0x0
	// static const ::System::Int32 NKIMAJCMKEE = 0x9; // 0x0
	::UnityEngine::Animation* BAFAAEFEBPJ; // 0x60
	::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x68
	::UnityEngine::ParticleSystem* NBMAJJLINGG; // 0x70
	::UnityEngine::UI::Text* JOMIDDFEFDK; // 0x78
	::UnityEngine::AnimationState* DFGNANDJMGI; // 0x80
	::Il2CppArray<::Class_2_785640A227AAD72E*>* ENAIOFCCCBJ; // 0x88
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x90
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x98
	::System::Boolean AKBPNMEFGAO; // 0xA0
	::System::Boolean AIAOGICLMDP; // 0xA1
	::System::Boolean EOCGLLBKHCF; // 0xA2
	::RPG::GameCore::ScoringShowType IPBPELECDBK; // 0xA4
	::System::Int32 DEBFEIKENAO; // 0xA8
	::System::Int32 LBDLCOKPMPL; // 0xAC
	::System::Int32 _Index_k__BackingField; // 0xB0
	::Class_2_A526C3164A2601C6_ModifyValueStatus MNGCKPBFFBC; // 0xB4
	::System::Single OOIDHDNKAFP; // 0xB8
	::System::Int32 MIHIDJPABDK; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAE61ABAE8899086(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_AAE61ABAE8899086_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCA794728913022B(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_BCA794728913022B_OFFSET))(this, a1);
	}

	::System::Void Method_2_58BFC52E546ECE1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_58BFC52E546ECE1F_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D868F3D6A3DAB13(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_5D868F3D6A3DAB13_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F5C92AD8354C0C(::RPG::GameCore::ScoringShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_F4F5C92AD8354C0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_00BE5A24F02298DC(::Class_2_A526C3164A2601C6_ModifyValueStatus a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A526C3164A2601C6_ModifyValueStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_00BE5A24F02298DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_16ABB763B7D3AEA1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_16ABB763B7D3AEA1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F46A648CF073D05(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_1F46A648CF073D05_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
