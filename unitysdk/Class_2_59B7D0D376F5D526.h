#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1135;
class Class_1_40540E08ABD916B4;
class Class_1_86B4CACC0974BF85;
class Class_1_C3BEB9A6D7F5D20E;
class Class_1_F7F129640441419D;
class Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25;
class Class_2_80016B9B50F708B7;
class DamageTextStyle;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class SimpleAnimation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutGroup; }

#define CLASS_2_59B7D0D376F5D526_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15396E70)
#define CLASS_2_59B7D0D376F5D526_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15396F90)
#define CLASS_2_59B7D0D376F5D526_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x15396BB0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_04516DC4047C3A8D_OFFSET UNITYSDK_OFFSET(0x153944F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_061E09523E43F031_OFFSET UNITYSDK_OFFSET(0x15393D40)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x15395250)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET UNITYSDK_OFFSET(0x15396440)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x15392B70)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_15286982DF950401_OFFSET UNITYSDK_OFFSET(0x15394F60)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15394460)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x153911A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x153927C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1E231E3A449E8C46_OFFSET UNITYSDK_OFFSET(0x15393370)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2303E3416C24D3F9_OFFSET UNITYSDK_OFFSET(0x153959A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_254E3F47C444DDAE_OFFSET UNITYSDK_OFFSET(0x15395C00)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_255C4E8D50663DEF_OFFSET UNITYSDK_OFFSET(0x15392C70)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_25FD056A8C10B921_OFFSET UNITYSDK_OFFSET(0x153935B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15395850)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2C639A7B266E3F6B_OFFSET UNITYSDK_OFFSET(0x15393480)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x15396540)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x153968B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x153915A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15391440)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x15391600)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x153958B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15392400)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x15392840)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_49DF3329552800C8_OFFSET UNITYSDK_OFFSET(0x15395D90)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x15394400)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET UNITYSDK_OFFSET(0x153969E0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x15395A30)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_53F27F73898F1DBC_OFFSET UNITYSDK_OFFSET(0x153954B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x153963A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x15392300)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5DE2B5657DE4A62B_OFFSET UNITYSDK_OFFSET(0x15394A40)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_626867CFE8995B57_OFFSET UNITYSDK_OFFSET(0x15394ED0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x153962D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x15395900)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_1_OFFSET UNITYSDK_OFFSET(0x153949B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x15394940)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x15395B70)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x15391490)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_708E5A65B84D5E24_OFFSET UNITYSDK_OFFSET(0x153966E0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_726B11789F671EE9_OFFSET UNITYSDK_OFFSET(0x15393FE0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x15395B00)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x15391110)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_78F035AC71B8AE49_OFFSET UNITYSDK_OFFSET(0x15396AA0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x15392AE0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x15390F40)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x153930F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8D099DEEAF2784A3_OFFSET UNITYSDK_OFFSET(0x15395050)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x153924D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_914575F73265A2FE_OFFSET UNITYSDK_OFFSET(0x15396650)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_9D22831EF77D4601_OFFSET UNITYSDK_OFFSET(0x15393200)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_9E79A5511E060783_OFFSET UNITYSDK_OFFSET(0x15393060)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A06359FA5E17A386_OFFSET UNITYSDK_OFFSET(0x153942B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x153952B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x15396C10)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A75D7A9C1392E81B_OFFSET UNITYSDK_OFFSET(0x15395760)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0x15391220)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15394390)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x15392620)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B881B32CDE8EA3C3_OFFSET UNITYSDK_OFFSET(0x15394BE0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x15391270)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15396C70)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x15393CB0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_CBEA6C3CA5E42755_OFFSET UNITYSDK_OFFSET(0x153963F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_D615CB28C5656CC3_OFFSET UNITYSDK_OFFSET(0x15395F50)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15390CF0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x15390EC0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F0E81349E06FF8CF_OFFSET UNITYSDK_OFFSET(0x15392EF0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15396D60)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F74F5C57177D2273_OFFSET UNITYSDK_OFFSET(0x15395360)
#define CLASS_2_59B7D0D376F5D526_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x15396BE0)
#define CLASS_2_59B7D0D376F5D526__CCTOR_OFFSET UNITYSDK_OFFSET(0x15398980)
#define CLASS_2_59B7D0D376F5D526__CTOR_OFFSET UNITYSDK_OFFSET(0x15397080)
#define CLASS_2_59B7D0D376F5D526__ONBIND_OFFSET UNITYSDK_OFFSET(0x15390480)
#define CLASS_2_59B7D0D376F5D526__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x153923B0)
#define CLASS_2_59B7D0D376F5D526__ONTICK_OFFSET UNITYSDK_OFFSET(0x153912F0)

inline static constexpr unsigned int Class_2_59B7D0D376F5D526_TypeDefinitionIndex = 72296;

class Class_2_59B7D0D376F5D526 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Int32* StaticGet__TopPriority_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_59B7D0D376F5D526_TypeDefinitionIndex)->GetStaticField(0xA0B0);
	}
	static ::RPG::Client::UIFloatingTextType* StaticGet_NLJOLBBHFGE()
	{
		return (::RPG::Client::UIFloatingTextType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_59B7D0D376F5D526_TypeDefinitionIndex)->GetStaticField(0xA0B4);
	}
	// static const ::System::String* HLGKMIDBBAE; // 0x0
	// static const ::System::String* GKBPLMIHJEB; // 0x0
	// static const ::System::String* AALPMBONBHL; // 0x0
	// static const ::System::String* LECMFHLPFMB; // 0x0
	// static const ::System::String* KHGCFCONFCE; // 0x0
	// static const ::System::String* BCFBABOOIOP; // 0x0
	// static const ::System::String* FLMHKEPCAJN; // 0x0
	// static const ::System::String* MMPFBOJAGBC; // 0x0
	// static const ::System::String* BALINMINBEH; // 0x0
	// static const ::System::String* COHHKHMIALA; // 0x0
	// static const ::System::String* HJNONKGHIHE; // 0x0
	// static const ::System::String* BODOECOBKEJ; // 0x0
	// static const ::System::String* APIBFLFJKDG; // 0x0
	// static const ::System::String* OGLJPMOEGBJ; // 0x0
	// static const ::System::String* OLOEIOGALGN; // 0x0
	// static const ::System::String* PGPFCHLCIHA; // 0x0
	// static const ::System::String* BEFAAMKANFC; // 0x0
	// static const ::System::String* MDLAPNAJHLJ; // 0x0
	// static const ::System::String* ELMGAJKMLJP; // 0x0
	// static const ::System::Int32 ILBDFAMFIIE = 0x0; // 0x0
	// static const ::System::Int32 DEEELBPNKAE = 0x8; // 0x0
	// static const ::System::Int64 HEMLEDIIGPB = 0xE8D4A50FFF; // 0x0
	// static const ::System::String* KLOHNJIJOAF; // 0x0
	// static const ::System::String* LJIKDLEPPKE; // 0x0
	// static const ::System::String* NGLELEEFOOI; // 0x0
	// static const ::System::String* LKFJNJJEBGF; // 0x0
	// static const ::System::String* EJLLLIKHKMI; // 0x0
	// static const ::System::String* JKBDJHCFKEP; // 0x0
	// static const ::System::String* KKHODKIKGED; // 0x0
	// static const ::System::String* GCJJPMICABD; // 0x0
	// static const ::System::String* GDFKDDLDACB; // 0x0
	// static const ::System::String* DJNCPMIDDJE; // 0x0
	// static const ::System::String* EFGHHFABHAJ; // 0x0
	// static const ::System::String* NEELGIMCPKF; // 0x0
	// static const ::System::String* HHGOEDMPBCB; // 0x0
	// static const ::System::String* EMBNBDLBLDN; // 0x0
	// static const ::System::String* DCOAJMLJIJG; // 0x0
	::UnityEngine::CanvasGroup* LDECKNEDNPI; // 0x60
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x68
	::UnityEngine::Animation* BAFAAEFEBPJ; // 0x70
	::Class_0_16E4307DCC419505_1135* OEDKHBAHFLG; // 0x78
	::System::Collections::Generic::List_1<::Class_1_40540E08ABD916B4*>* BBBAHLJAIGL; // 0x80
	::Il2CppArray<::UnityEngine::Transform*>* KDNFAENPGMO; // 0x88
	::Class_1_C3BEB9A6D7F5D20E* JMOHIINCDJO; // 0x90
	::RPG::Client::UIFollow3DTarget* MCMALLKMDNC; // 0x98
	::System::Collections::Generic::List_1<::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25*>* HJFBEPJBHEA; // 0xA0
	::Class_1_40540E08ABD916B4* GHJINFGDKGA; // 0xA8
	::UnityEngine::UI::Image* NBMGFFBNGEI; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* LGILMMCGOGL; // 0xB8
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* HAGGCOIDLBJ; // 0xC0
	::UnityEngine::Transform* HJMKFAGJIJK; // 0xC8
	::Class_1_40540E08ABD916B4* OFAJEHEKHOJ; // 0xD0
	::UnityEngine::SimpleAnimation* OAGGNBHMKDP; // 0xD8
	::UnityEngine::Transform* LFGMLJCCPCH; // 0xE0
	::Class_1_C3BEB9A6D7F5D20E* GNOKHINJONA; // 0xE8
	::Class_1_C3BEB9A6D7F5D20E* EOAPKKDMOGN; // 0xF0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::System::String*>* INAAGBFBAHM; // 0xF8
	::UnityEngine::Transform* BDGOLLLFLMC; // 0x100
	::Il2CppArray<::System::String*>* BELIHCMGEAP; // 0x108
	::RPG::Client::PrefabLoadMeta* LDGBDIOFKMG; // 0x110
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* KLKONCAMEMD; // 0x118
	::UnityEngine::Transform* FCIHODBGEFL; // 0x120
	::Class_1_F7F129640441419D* PICMKGJOBLH; // 0x128
	::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x130
	::UnityEngine::Transform* DDIBIHFEBNN; // 0x138
	::Class_1_C3BEB9A6D7F5D20E* DBLPPCLEGKG; // 0x140
	::UnityEngine::RectTransform* NEEDDJHCCND; // 0x148
	::System::Collections::Generic::HashSet_1<::System::String*>* GIPEKGCEBKE; // 0x150
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* DHFGJOEDJEK; // 0x158
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::UnityEngine::Font*>* AKNJNJCEFHI; // 0x160
	::Class_1_40540E08ABD916B4* OMBGONFDNKD; // 0x168
	::UnityEngine::UI::Image* EPNEIHOANLA; // 0x170
	::Class_1_40540E08ABD916B4* NNOEDFOPALA; // 0x178
	::UnityEngine::Transform* MEAEKCCGFCN; // 0x180
	::Class_1_C3BEB9A6D7F5D20E* PCFDOMBLHBK; // 0x188
	::Il2CppArray<::Class_1_C3BEB9A6D7F5D20E*>* PCIIKFOIAJA; // 0x190
	::UnityEngine::UI::ContentSizeFitter* PFIOEBPHDFI; // 0x198
	::Class_2_80016B9B50F708B7* DBKMNEAPLDL; // 0x1A0
	::UnityEngine::UI::LayoutGroup* BPPBHGGCBCH; // 0x1A8
	::System::String* AMMFAOBBPCN; // 0x1B0
	::System::Single IONFONLCDPF; // 0x1B8
	::RPG::GameCore::DamateTextFontStyle IJMCKCJJKIO; // 0x1BC
	::UnityEngine::Vector2 IDGKNMLPGDL; // 0x1C0
	::System::Boolean MCAPIAKDMAA; // 0x1C8
	::System::Boolean MKMANBDNKOE; // 0x1C9
	::System::Boolean JFICJNIJEEF; // 0x1CA
	::System::Boolean FMNEEONAMNO; // 0x1CB
	::System::Single NGMPALMFOKL; // 0x1CC
	::RPG::GameCore::TeamType AHJJPBGGOMK; // 0x1D0
	::System::Boolean POGICBHCJIB; // 0x1D4
	::RPG::GameCore::UIDamageTextType DBNPLBHAGAK; // 0x1D8
	::System::Single HBDJCFFDGDD; // 0x1DC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_255C4E8D50663DEF(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_255C4E8D50663DEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9E79A5511E060783(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_9E79A5511E060783_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C639A7B266E3F6B(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2C639A7B266E3F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_061E09523E43F031(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_061E09523E43F031_OFFSET))(this, a1);
	}

	::System::Void Method_2_726B11789F671EE9(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_726B11789F671EE9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4C6A9BAF3D99BA03(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_4C6A9BAF3D99BA03_OFFSET))(a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_A06359FA5E17A386(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A06359FA5E17A386_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_04516DC4047C3A8D(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_04516DC4047C3A8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5DE2B5657DE4A62B(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5DE2B5657DE4A62B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B881B32CDE8EA3C3(::RPG::Client::TextID a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B881B32CDE8EA3C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_626867CFE8995B57(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_626867CFE8995B57_OFFSET))(this, a1);
	}

	::System::Void Method_2_15286982DF950401(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_15286982DF950401_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_2_F74F5C57177D2273(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F74F5C57177D2273_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_53F27F73898F1DBC(::System::String* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_53F27F73898F1DBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A75D7A9C1392E81B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A75D7A9C1392E81B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_8D099DEEAF2784A3(::RPG::Client::UIFloatingTextType a1, ::System::Boolean a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8D099DEEAF2784A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Method_2_2303E3416C24D3F9()
	{
		return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2303E3416C24D3F9_OFFSET))(this);
	}

	::System::Void Method_2_F0E81349E06FF8CF(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F0E81349E06FF8CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49DF3329552800C8(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_49DF3329552800C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_254E3F47C444DDAE(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_254E3F47C444DDAE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D615CB28C5656CC3(::System::Int32 a1, ::System::String* a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_D615CB28C5656CC3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::System::Void Method_2_CBEA6C3CA5E42755(::RPG::GameCore::UIDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UIDamageTextType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_CBEA6C3CA5E42755_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_2_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_914575F73265A2FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_914575F73265A2FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_ABD6C60E1C36A4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_ABD6C60E1C36A4F4_OFFSET))(this);
	}

	::System::Void Method_2_708E5A65B84D5E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_708E5A65B84D5E24_OFFSET))(this);
	}

	::System::Void Method_2_369BB5E7FA6A1768(::Class_1_C3BEB9A6D7F5D20E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3BEB9A6D7F5D20E*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4_1(::Class_1_40540E08ABD916B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40540E08ABD916B4*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_2_1E231E3A449E8C46(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1E231E3A449E8C46_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_9D22831EF77D4601(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_9D22831EF77D4601_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_78F035AC71B8AE49(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_78F035AC71B8AE49_OFFSET))(this, a1);
	}

	static ::System::Int32 get_TopPriority()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_GET_TOPPRIORITY_OFFSET))();
	}

	static ::System::Void set_TopPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_SET_TOPPRIORITY_OFFSET))(a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_25FD056A8C10B921(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_25FD056A8C10B921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
