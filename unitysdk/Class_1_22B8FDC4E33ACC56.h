#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_12ABE890CAA92AB9;
class Class_1_2AEC7C4C0F203579;
class Class_1_9015B34004B876E5;
class Class_1_9015B34004B876E5_1;
class Class_1_AE4553DBAC72BB2D;
class Class_1_D17272E82AE804C2_29;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x16776D80)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_546CAA3EBBF2E065_OFFSET UNITYSDK_OFFSET(0x16776DF0)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_A85C48C9FFC0CF55_OFFSET UNITYSDK_OFFSET(0x16776780)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_DCEFF804A18F7728_OFFSET UNITYSDK_OFFSET(0x16776AF0)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_FCEBEAD2390B94D2_OFFSET UNITYSDK_OFFSET(0x167769C0)
#define CLASS_1_22B8FDC4E33ACC56__CTOR_OFFSET UNITYSDK_OFFSET(0x16777B50)

inline static constexpr unsigned int Class_1_22B8FDC4E33ACC56_TypeDefinitionIndex = 56480;

class Class_1_22B8FDC4E33ACC56 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GOBDPJABGEH; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_29*>* KCOMPKMJCMC; // 0x18
	::Class_1_12ABE890CAA92AB9* HLFDLAIDABN; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* MAOCICGPNOE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* FCDAMKENCCE; // 0x30
	::System::Collections::Generic::List_1<::Class_1_AE4553DBAC72BB2D*>* AHKBIHOGBJB; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* JOBFPOMPGOC; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* LEOOKBHBABM; // 0x48
	::Class_1_2AEC7C4C0F203579* KAEJCAMAIIE; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* PNLOHHEENGI; // 0x58
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5_1*>* BHLMEOBLIDG; // 0x60
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>* KIACPLNFMLH; // 0x68
	::System::UInt32 KOMFCJAFGPA; // 0x70
	::System::UInt32 BHFNGFHKKMF; // 0x74
	::System::UInt32 AACGBEBGDPE; // 0x78
	::System::UInt32 HBPDNKBPOKL; // 0x7C
	::System::UInt32 CJCCMAACJDB; // 0x80
	::System::UInt32 EHNJDIDABHD; // 0x84
	::System::UInt32 LIFBHELMEAI; // 0x88
	::System::UInt32 NFBJINKLLLK; // 0x8C
	::System::UInt32 LDFEJAAOLKB; // 0x90
	::System::Boolean OHJAOGJDJPO; // 0x94
	::System::UInt32 OOFPAKJPBAL; // 0x98
	::System::UInt32 LODNFLMBIEH; // 0x9C
	::System::UInt32 MLHLNECCDPD; // 0xA0
	::RPG::GameCore::FixPoint PKANAKAEJBF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_A85C48C9FFC0CF55()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_A85C48C9FFC0CF55_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_FCEBEAD2390B94D2()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_FCEBEAD2390B94D2_OFFSET))(this);
	}

	::System::Void Method_1_DCEFF804A18F7728(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_DCEFF804A18F7728_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::Class_1_22B8FDC4E33ACC56* Method_1_546CAA3EBBF2E065()
	{
		return ((::Class_1_22B8FDC4E33ACC56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_546CAA3EBBF2E065_OFFSET))(this);
	}
};
