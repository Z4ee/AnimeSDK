#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_3A4E69AD540D9124;
class Class_1_E8E63295DCAF8D1A;
class Class_2_3616FDE8A71D0590_2;
class Class_2_F3C45F1FC7349B6E;
class Class_2_F71D85F68E612E5E;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceGameSyncConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24465B04A2FE278F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A96AA0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_0ACFB078D9CC930D_OFFSET UNITYSDK_OFFSET(0x18A96FD0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_0DC3C006BF5E808B_OFFSET UNITYSDK_OFFSET(0x18A972B0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_10E14D02D9EE6898_OFFSET UNITYSDK_OFFSET(0x18A97CB0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_173FAF9882E69573_OFFSET UNITYSDK_OFFSET(0x18A991C0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_191191178459B2D0_OFFSET UNITYSDK_OFFSET(0x18A994B0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_1CEACB3CAD4790BD_OFFSET UNITYSDK_OFFSET(0x18A98C40)
#define CLASS_1_24465B04A2FE278F_METHOD_1_2412D7FDFF89E661_OFFSET UNITYSDK_OFFSET(0x18A97E80)
#define CLASS_1_24465B04A2FE278F_METHOD_1_245F0C539C01CB9B_OFFSET UNITYSDK_OFFSET(0x18A971D0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_25D4784BBE8AAF80_OFFSET UNITYSDK_OFFSET(0x18A97800)
#define CLASS_1_24465B04A2FE278F_METHOD_1_26FFC98208881DCE_OFFSET UNITYSDK_OFFSET(0x18A97720)
#define CLASS_1_24465B04A2FE278F_METHOD_1_275C76C19EE90E74_OFFSET UNITYSDK_OFFSET(0x18A99FB0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_1_OFFSET UNITYSDK_OFFSET(0x18A990D0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_2_OFFSET UNITYSDK_OFFSET(0x18A992A0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_OFFSET UNITYSDK_OFFSET(0x18A98EF0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_3CE906F64B126D57_OFFSET UNITYSDK_OFFSET(0x18A984E0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x18A90F60)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_2_OFFSET UNITYSDK_OFFSET(0x18A99DF0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_3_OFFSET UNITYSDK_OFFSET(0x18A99EB0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_4_OFFSET UNITYSDK_OFFSET(0x18A99FD0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_5_OFFSET UNITYSDK_OFFSET(0x18A9A090)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_6_OFFSET UNITYSDK_OFFSET(0x18A9A150)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_7_OFFSET UNITYSDK_OFFSET(0x18A9A210)
#define CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x18A99D30)
#define CLASS_1_24465B04A2FE278F_METHOD_1_478953ED064B84C3_OFFSET UNITYSDK_OFFSET(0x18A996F0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x18A9A330)
#define CLASS_1_24465B04A2FE278F_METHOD_1_61D11D6A0E7A8B30_OFFSET UNITYSDK_OFFSET(0x18A99390)
#define CLASS_1_24465B04A2FE278F_METHOD_1_6E781753F0BF21F8_OFFSET UNITYSDK_OFFSET(0x18A98E10)
#define CLASS_1_24465B04A2FE278F_METHOD_1_7223531E1AACAD4F_OFFSET UNITYSDK_OFFSET(0x18A995A0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_7CA3ABAF710A321B_OFFSET UNITYSDK_OFFSET(0x18A99600)
#define CLASS_1_24465B04A2FE278F_METHOD_1_90059BED467409D0_1_OFFSET UNITYSDK_OFFSET(0x18A98FE0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_90059BED467409D0_OFFSET UNITYSDK_OFFSET(0x18A97BD0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_98E111A6CAFCF09E_OFFSET UNITYSDK_OFFSET(0x18A98B50)
#define CLASS_1_24465B04A2FE278F_METHOD_1_993F8A51578D348D_OFFSET UNITYSDK_OFFSET(0x18A98CB0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_9F59D2FF9BE4C06C_OFFSET UNITYSDK_OFFSET(0x18A96D00)
#define CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_1_OFFSET UNITYSDK_OFFSET(0x18A99A50)
#define CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_2_OFFSET UNITYSDK_OFFSET(0x18A99BC0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x18A998F0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_A26E2F6737F1AB9F_OFFSET UNITYSDK_OFFSET(0x18A98A70)
#define CLASS_1_24465B04A2FE278F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18A9A2D0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_B7AA7CB3D2842720_OFFSET UNITYSDK_OFFSET(0x18A96B40)
#define CLASS_1_24465B04A2FE278F_METHOD_1_B8C88D133FA9D5E3_OFFSET UNITYSDK_OFFSET(0x18A99420)
#define CLASS_1_24465B04A2FE278F_METHOD_1_BB3A3D4EEF90C18B_OFFSET UNITYSDK_OFFSET(0x18A98010)
#define CLASS_1_24465B04A2FE278F_METHOD_1_BB4CAD530AE3565F_OFFSET UNITYSDK_OFFSET(0x18A98590)
#define CLASS_1_24465B04A2FE278F_METHOD_1_C023895A8B4F9307_OFFSET UNITYSDK_OFFSET(0x18A96C20)
#define CLASS_1_24465B04A2FE278F_METHOD_1_C2382E4A072D3866_OFFSET UNITYSDK_OFFSET(0x18A97D90)
#define CLASS_1_24465B04A2FE278F_METHOD_1_C8347B9B472F86C7_OFFSET UNITYSDK_OFFSET(0x18A96EE0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_CEC2FEE35109CF45_OFFSET UNITYSDK_OFFSET(0x18A97DF0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_D3111B30880258AA_OFFSET UNITYSDK_OFFSET(0x18A99F90)
#define CLASS_1_24465B04A2FE278F_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x18A99F70)
#define CLASS_1_24465B04A2FE278F_METHOD_1_E9BB5907BDBB6800_OFFSET UNITYSDK_OFFSET(0x18A99660)
#define CLASS_1_24465B04A2FE278F_METHOD_1_EF787103E3A25CDA_OFFSET UNITYSDK_OFFSET(0x18A912B0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_F3383126938EBDB2_OFFSET UNITYSDK_OFFSET(0x18A997D0)
#define CLASS_1_24465B04A2FE278F_METHOD_1_FE4C88DDB85C0D8F_OFFSET UNITYSDK_OFFSET(0x18A96DF0)
#define CLASS_1_24465B04A2FE278F__CTOR_OFFSET UNITYSDK_OFFSET(0x18A96A90)

inline static constexpr unsigned int Class_1_24465B04A2FE278F_TypeDefinitionIndex = 34962;

class Class_1_24465B04A2FE278F : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::Class_2_F71D85F68E612E5E* Field_1_1; // 0x18
	::Class_2_3616FDE8A71D0590_2* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_2* a2, ::Class_2_F71D85F68E612E5E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_2*, ::Class_2_F71D85F68E612E5E*))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::ConstValueLittleGameRow* Method_1_EF787103E3A25CDA(::System::String* a1)
	{
		return ((::RPG::GameCore::ConstValueLittleGameRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_EF787103E3A25CDA_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceFieldRow* Method_1_B7AA7CB3D2842720(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceFieldRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_B7AA7CB3D2842720_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceEffectRow* Method_1_C023895A8B4F9307(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_C023895A8B4F9307_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceFieldScoreRow* Method_1_9F59D2FF9BE4C06C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceFieldScoreRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_9F59D2FF9BE4C06C_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceSectionRow* Method_1_FE4C88DDB85C0D8F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceSectionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_FE4C88DDB85C0D8F_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_C8347B9B472F86C7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_C8347B9B472F86C7_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_0ACFB078D9CC930D(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_0ACFB078D9CC930D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_0DC3C006BF5E808B(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_0DC3C006BF5E808B_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::CakeRaceEmojiRow* Method_1_26FFC98208881DCE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_26FFC98208881DCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceEmojiRow* Method_1_25D4784BBE8AAF80(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_25D4784BBE8AAF80_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::CakeRaceNPCRow* Method_1_245F0C539C01CB9B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceNPCRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_245F0C539C01CB9B_OFFSET))(this, a1);
	}

	::RPG::GameCore::AIConfig* Method_1_90059BED467409D0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_90059BED467409D0_OFFSET))(this, a1);
	}

	::Class_1_E8E63295DCAF8D1A* Method_1_10E14D02D9EE6898(::System::UInt32 a1)
	{
		return ((::Class_1_E8E63295DCAF8D1A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_10E14D02D9EE6898_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceRegionConfig* Method_1_C2382E4A072D3866(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_C2382E4A072D3866_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_CEC2FEE35109CF45(::RPG::GameCore::CakeRaceRegionTag a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_CEC2FEE35109CF45_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2412D7FDFF89E661(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_2412D7FDFF89E661_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_BB3A3D4EEF90C18B(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_BB3A3D4EEF90C18B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3CE906F64B126D57(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_3CE906F64B126D57_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_BB4CAD530AE3565F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_BB4CAD530AE3565F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* Method_1_A26E2F6737F1AB9F(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_A26E2F6737F1AB9F_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCellConfig* Method_1_98E111A6CAFCF09E(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_98E111A6CAFCF09E_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCatAIConfig* Method_1_993F8A51578D348D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceCatAIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_993F8A51578D348D_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCatRow* Method_1_6E781753F0BF21F8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceCatRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_6E781753F0BF21F8_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_2A71A058A0E2D6FD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::AIConfig* Method_1_90059BED467409D0_1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_90059BED467409D0_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_2A71A058A0E2D6FD_1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceBattleItemRow* Method_1_173FAF9882E69573(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceBattleItemRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_173FAF9882E69573_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_2A71A058A0E2D6FD_2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_2A71A058A0E2D6FD_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMoveStateConfig* Method_1_61D11D6A0E7A8B30(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_61D11D6A0E7A8B30_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceTrapCellConfig* Method_1_B8C88D133FA9D5E3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceTrapCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_B8C88D133FA9D5E3_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRacePickupItemConfig* Method_1_191191178459B2D0(::RPG::GameCore::CakeRacePickupItemType a1)
	{
		return ((::RPG::GameCore::CakeRacePickupItemConfig*(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_191191178459B2D0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7223531E1AACAD4F(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_7223531E1AACAD4F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7CA3ABAF710A321B(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_7CA3ABAF710A321B_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceHitConfig* Method_1_E9BB5907BDBB6800(::RPG::GameCore::CakeRaceHitType a1)
	{
		return ((::RPG::GameCore::CakeRaceHitConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceHitType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_E9BB5907BDBB6800_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_478953ED064B84C3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_478953ED064B84C3_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceGameConfig* Method_1_1CEACB3CAD4790BD()
	{
		return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_1CEACB3CAD4790BD_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceGameSyncConfig* Method_1_F3383126938EBDB2()
	{
		return ((::RPG::GameCore::CakeRaceGameSyncConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_F3383126938EBDB2_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_1_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_9F86FD0988591376_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_D3111B30880258AA()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_D3111B30880258AA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* Method_1_275C76C19EE90E74()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_275C76C19EE90E74_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_4484591CA1060976_7_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::Class_1_3A4E69AD540D9124* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_3A4E69AD540D9124*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24465B04A2FE278F_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}
};
