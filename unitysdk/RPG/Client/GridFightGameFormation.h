#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_778;
class Class_1_554535650EEC6F9F;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace RPG::Client { class GridFightGameFormationEditor; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefExpiredSummary; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xBB49BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_EXPORTSHARECODE_OFFSET UNITYSDK_OFFSET(0xBB4A0B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB4F2B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETCOPY_OFFSET UNITYSDK_OFFSET(0xBB4D660)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEDITOR_OFFSET UNITYSDK_OFFSET(0xBB4EC90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPIDFROMPALETTE_OFFSET UNITYSDK_OFFSET(0xBB496B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPPALETTEINDEX_OFFSET UNITYSDK_OFFSET(0xBB495E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB500C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB4F0F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEIDFROMPALETTE_OFFSET UNITYSDK_OFFSET(0xBB494B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEPALETTEINDEX_OFFSET UNITYSDK_OFFSET(0xBB493E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETSHARECODETITLE_OFFSET UNITYSDK_OFFSET(0xBB4B310)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_COREROLEIDS_OFFSET UNITYSDK_OFFSET(0xBB4E630)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xBB4E620)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYROLES_OFFSET UNITYSDK_OFFSET(0xBB4F930)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xBB4FDC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EXPIREDSUMMARY_OFFSET UNITYSDK_OFFSET(0xBB48430)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALROLES_OFFSET UNITYSDK_OFFSET(0xBB4F910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xBB4FCA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREFID_OFFSET UNITYSDK_OFFSET(0xBB4FC70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREF_OFFSET UNITYSDK_OFFSET(0xBB4FC90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISAPPLIED_OFFSET UNITYSDK_OFFSET(0xBB50120)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xBB4F960)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISPALETTEREADY_OFFSET UNITYSDK_OFFSET(0xBB49340)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xBB4FE50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDROLES_OFFSET UNITYSDK_OFFSET(0xBB4F920)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xBB4FD30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDBASICEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBB4F940)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBB4F950)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB4F470)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB4F6B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xBB4FC50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xBB4F8F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBB4E610)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_HASANYEQUIPTOTRACK_OFFSET UNITYSDK_OFFSET(0xBB4B840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTREF_OFFSET UNITYSDK_OFFSET(0xBB4BBE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTSHARECODE_OFFSET UNITYSDK_OFFSET(0xBB4A520)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_INITSHARECODEPALETTE_OFFSET UNITYSDK_OFFSET(0xBB48C20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0xBB4E640)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xBB50050)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xBB497E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_COREROLEIDS_OFFSET UNITYSDK_OFFSET(0xBB4C5E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xBB4C530)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_FROMREFID_OFFSET UNITYSDK_OFFSET(0xBB4FC80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xBB4FC60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xBB4F900)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xBB4B280)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_UPDATETOSERVER_OFFSET UNITYSDK_OFFSET(0xBB4D570)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__ADDROLESTO_OFFSET UNITYSDK_OFFSET(0xBB4CD60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB501F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLEAR_OFFSET UNITYSDK_OFFSET(0xBB4ADC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLIPTEXTWITHUNICODELENGTH_OFFSET UNITYSDK_OFFSET(0xBB4BA40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COMPRESS_OFFSET UNITYSDK_OFFSET(0xBB4A280)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COPYROLESTO_OFFSET UNITYSDK_OFFSET(0xBB4E100)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4B4D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__DECOMPRESS_OFFSET UNITYSDK_OFFSET(0xBB4A9D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_0_OFFSET UNITYSDK_OFFSET(0xBB50250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_1_OFFSET UNITYSDK_OFFSET(0xBB504F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation_TypeDefinitionIndex = 60465;

	class GridFightGameFormation : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__RolePalette()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D440);
		}
		static ::Class_0_16E4307DCC419505_778** StaticGet__ShareSerializerV2()
		{
			return (::Class_0_16E4307DCC419505_778**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D448);
		}
		static ::Class_0_16E4307DCC419505_778** StaticGet__ShareSerializerV1()
		{
			return (::Class_0_16E4307DCC419505_778**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D450);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__EquipPalette()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D458);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet__RoleIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D460);
		}
		static ::Class_0_16E4307DCC419505_778** StaticGet__ShareSerializerV3()
		{
			return (::Class_0_16E4307DCC419505_778**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D468);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet__EquipIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x2D470);
		}
		static ::System::Boolean* StaticGet_UseV3ShareCode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x9D30);
		}
		// static const ::System::String* ShareCodeDataPrefix; // 0x0
		// static const ::System::String* ShareCodeDataSuffix; // 0x0
		::System::String* _Description; // 0x18
		::Class_1_554535650EEC6F9F* _FinalRoles_k__BackingField; // 0x20
		::Sofa::Core::ObservableList_1<::System::UInt32>* _OrderedRecommendBasicEquipIDs_k__BackingField; // 0x28
		::Sofa::Core::ObservableList_1<::System::UInt32>* _OrderedRecommendEquipIDs_k__BackingField; // 0x30
		::System::String* _FromRefID_k__BackingField; // 0x38
		::Class_1_554535650EEC6F9F* _MidRoles_k__BackingField; // 0x40
		::Class_1_554535650EEC6F9F* _EarlyRoles_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _CoreRoleIDs; // 0x50
		::System::String* _Title; // 0x58
		::System::UInt32 _SeasonUID_k__BackingField; // 0x60
		::System::UInt32 _SlotIndex_k__BackingField; // 0x64

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGameRefExpiredSummary* get_ExpiredSummary()
		{
			return ((::RPG::Client::GridFightGameRefExpiredSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EXPIREDSUMMARY_OFFSET))(this);
		}

		static ::System::Void InitShareCodePalette()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_INITSHARECODEPALETTE_OFFSET))();
		}

		static ::System::Boolean get_IsPaletteReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISPALETTEREADY_OFFSET))();
		}

		static ::System::Int32 GetRolePaletteIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEPALETTEINDEX_OFFSET))(a1);
		}

		static ::System::UInt32 GetRoleIDFromPalette(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEIDFROMPALETTE_OFFSET))(a1);
		}

		static ::System::Int32 GetEquipPaletteIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPPALETTEINDEX_OFFSET))(a1);
		}

		static ::System::UInt32 GetEquipIDFromPalette(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPIDFROMPALETTE_OFFSET))(a1);
		}

		::Il2CppArray<::System::Byte>* Serialize()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::String* ExportShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_EXPORTSHARECODE_OFFSET))(this);
		}

		::System::Boolean ImportShareCode(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTSHARECODE_OFFSET))(this, a1);
		}

		static ::System::String* GetShareCodeTitle(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETSHARECODETITLE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* _Compress(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COMPRESS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* _Decompress(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__DECOMPRESS_OFFSET))(a1);
		}

		::System::Boolean HasAnyEquipToTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_HASANYEQUIPTOTRACK_OFFSET))(this);
		}

		::System::String* _ClipTextWithUnicodeLength(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLIPTEXTWITHUNICODELENGTH_OFFSET))(this, a1, a2);
		}

		::System::Void ImportRef(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTREF_OFFSET))(this, a1);
		}

		::System::Void UpdateToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_UPDATETOSERVER_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormation* GetCopy()
		{
			return ((::RPG::Client::GridFightGameFormation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETCOPY_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_CoreRoleIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_COREROLEIDS_OFFSET))(this);
		}

		::System::Void set_CoreRoleIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_COREROLEIDS_OFFSET))(this, a1);
		}

		::System::Void _AddRolesTo(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSeasonRole*>* a1, ::Class_1_554535650EEC6F9F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSeasonRole*>*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__ADDROLESTO_OFFSET))(this, a1, a2);
		}

		::System::Void _CopyRolesTo(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>* a1, ::Class_1_554535650EEC6F9F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COPYROLESTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsReferenced(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISREFERENCED_OFFSET))(this, a1);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLEAR_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormationEditor* GetEditor()
		{
			return ((::RPG::Client::GridFightGameFormationEditor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEDITOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetRecommendEquip(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetBasicRecommendEquip(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETBASICRECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendBasicEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDBASICEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDEQUIPS_OFFSET))(this);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::Class_1_554535650EEC6F9F* get_FinalRoles()
		{
			return ((::Class_1_554535650EEC6F9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALROLES_OFFSET))(this);
		}

		::Class_1_554535650EEC6F9F* get_MidRoles()
		{
			return ((::Class_1_554535650EEC6F9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDROLES_OFFSET))(this);
		}

		::Class_1_554535650EEC6F9F* get_EarlyRoles()
		{
			return ((::Class_1_554535650EEC6F9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYROLES_OFFSET))(this);
		}

		::Sofa::Core::ObservableList_1<::System::UInt32>* get_OrderedRecommendBasicEquipIDs()
		{
			return ((::Sofa::Core::ObservableList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDBASICEQUIPIDS_OFFSET))(this);
		}

		::Sofa::Core::ObservableList_1<::System::UInt32>* get_OrderedRecommendEquipIDs()
		{
			return ((::Sofa::Core::ObservableList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDEQUIPIDS_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISEMPTY_OFFSET))(this);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SEASONUID_OFFSET))(this, a1);
		}

		::System::String* get_FromRefID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREFID_OFFSET))(this);
		}

		::System::Void set_FromRefID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_FROMREFID_OFFSET))(this, a1);
		}

		::System::Boolean get_FromRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREF_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_FinalTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALTEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_MidTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDTEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_EarlyTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MAINROLES_OFFSET))(this);
		}

		::System::Boolean IsRoleMain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISROLEMAIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRecommendEquips(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIPS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsApplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISAPPLIED_OFFSET))(this);
		}

		::System::Void _ImportRef_b__29_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _ImportRef_b__29_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_1_OFFSET))(this, a1);
		}
	};
}
