#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_3E28D6CB7A8C3FEF_AddScoreStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_0_16E4307DCC419505_1111;
class Class_2_785640A227AAD72E;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16590B80)
#define CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16590EA0)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1658D7B0)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1658D7D0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1658EF00)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_16ABB763B7D3AEA1_OFFSET UNITYSDK_OFFSET(0x1658FCD0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1658FAB0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET UNITYSDK_OFFSET(0x1658F4C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1658FB90)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1658D810)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_424A8E8E51A30867_OFFSET UNITYSDK_OFFSET(0x1658D9C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4D5351A5CDAC34BC_OFFSET UNITYSDK_OFFSET(0x165908A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5300222F5F82CE10_OFFSET UNITYSDK_OFFSET(0x1658F850)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_723E3F6FB0A195B8_OFFSET UNITYSDK_OFFSET(0x16590080)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_75FE36A64191C70E_OFFSET UNITYSDK_OFFSET(0x16590030)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0x1658F530)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x1658EE50)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x1658F8A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x16590970)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1658D520)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x1658EFD0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET UNITYSDK_OFFSET(0x1658F590)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET UNITYSDK_OFFSET(0x1658F3B0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1658FC70)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x1658DCE0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1658DB90)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D2BEB454D782094A_OFFSET UNITYSDK_OFFSET(0x1658FEF0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1658DD50)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x165907E0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16590AA0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x165906E0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x1658FB20)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET UNITYSDK_OFFSET(0x1658F220)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1658F180)
#define CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1658D7C0)
#define CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165911D0)
#define CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x16591180)
#define CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1658D1F0)
#define CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1658F140)
#define CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET UNITYSDK_OFFSET(0x1658EF70)

inline static constexpr unsigned int Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex = 71782;

class Class_2_3E28D6CB7A8C3FEF : public ::Class_1_34917908B7833130
{
public:
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_PGBDJCMFMLA()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x13C20);
	}
	static ::RPG::Client::TextID* StaticGet_DNGJPMIKNJN()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x13C28);
	}
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* LEELOIGGNGG; // 0x0
	// static const ::System::String* JJBPMPKGBOH; // 0x0
	// static const ::System::String* PHCCGDLIIEO; // 0x0
	// static const ::System::String* HLAKHLOBKND; // 0x0
	// static const ::System::String* MIJIMFJDMDF; // 0x0
	// static const ::System::Int32 NKIMAJCMKEE = 0x9; // 0x0
	::Il2CppArray<::Class_2_785640A227AAD72E*>* ENAIOFCCCBJ; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1111*>*>* BKKHCMPENHP; // 0x68
	::UnityEngine::UI::Text* JOMIDDFEFDK; // 0x70
	::UnityEngine::Transform* CDAPHEBDDLL; // 0x78
	::UnityEngine::Transform* EGFJKKLANAA; // 0x80
	::UnityEngine::Transform* KPOGKCIDOCN; // 0x88
	::UnityEngine::ParticleSystem* KAPMCJCAKOD; // 0x90
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x98
	::UnityEngine::Animation* BAFAAEFEBPJ; // 0xA0
	::UnityEngine::Transform* NLIEMAJLLNF; // 0xA8
	::UnityEngine::UI::Text* DCOMPNACGJO; // 0xB0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xB8
	::UnityEngine::Transform* NBMAJJLINGG; // 0xC0
	::UnityEngine::ParticleSystem* AFMEJBOIJPC; // 0xC8
	::RPG::GameCore::LevelUIComponent* PNHILAGAMDO; // 0xD0
	::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0xD8
	::UnityEngine::AnimationState* DFGNANDJMGI; // 0xE0
	::System::Single OOIDHDNKAFP; // 0xE8
	::RPG::GameCore::ScoringShowType IPBPELECDBK; // 0xEC
	::System::Boolean EOCGLLBKHCF; // 0xF0
	::System::Boolean AKBPNMEFGAO; // 0xF1
	::System::Int32 _Index_k__BackingField; // 0xF4
	::System::Int32 PBLECKHOIHO; // 0xF8
	::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus CFDBFEENMAM; // 0xFC
	::System::Int32 BAHCMBAINBM; // 0x100
	::System::Int32 IHAHFIAFPMA; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_424A8E8E51A30867()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_424A8E8E51A30867_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5710FBB9C77699E(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C1BE26908999AAB(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_760FD1B4F7D8B904()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET))(this);
	}

	::System::Void Method_2_5300222F5F82CE10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5300222F5F82CE10_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C832A689ED924B93(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F5C92AD8354C0C(::RPG::GameCore::ScoringShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9826750958CBF99(::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1111* Method_2_D2BEB454D782094A(::RPG::GameCore::BattleTargetIconType a1)
	{
		return ((::Class_0_16E4307DCC419505_1111*(*)(::PVOID, ::RPG::GameCore::BattleTargetIconType))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D2BEB454D782094A_OFFSET))(this, a1);
	}

	::System::Void Method_2_75FE36A64191C70E(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_75FE36A64191C70E_OFFSET))(this, a1);
	}

	::System::Void Method_2_723E3F6FB0A195B8(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_723E3F6FB0A195B8_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_16ABB763B7D3AEA1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_16ABB763B7D3AEA1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D5351A5CDAC34BC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4D5351A5CDAC34BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
