#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_727;
class Class_1_3CCCD675D7774146;
class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace RPG::Client { class GridFightGameFormationEditor; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefExpiredSummary; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_2A6530038D51A41A;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA4A82F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_EXPORTSHARECODE_OFFSET UNITYSDK_OFFSET(0xA4A87D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xA4ACA00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETCOPY_OFFSET UNITYSDK_OFFSET(0xA4AB2E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEDITOR_OFFSET UNITYSDK_OFFSET(0xA4AC450)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPIDFROMPALETTE_OFFSET UNITYSDK_OFFSET(0xA4A7E10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPPALETTEINDEX_OFFSET UNITYSDK_OFFSET(0xA4A7D30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4AD680)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xA4AC8D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEIDFROMPALETTE_OFFSET UNITYSDK_OFFSET(0xA4A7C40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEPALETTEINDEX_OFFSET UNITYSDK_OFFSET(0xA4A7B60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETSHARECODETITLE_OFFSET UNITYSDK_OFFSET(0xA4A99D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_COREROLEIDS_OFFSET UNITYSDK_OFFSET(0xA4ABFC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA4ABFB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYROLES_OFFSET UNITYSDK_OFFSET(0xA4ACF50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xA4AD3A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EXPIREDSUMMARY_OFFSET UNITYSDK_OFFSET(0xA4A7460)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALROLES_OFFSET UNITYSDK_OFFSET(0xA4ACF30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xA4AD280)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREFID_OFFSET UNITYSDK_OFFSET(0xA4AD250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREF_OFFSET UNITYSDK_OFFSET(0xA4AD270)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISAPPLIED_OFFSET UNITYSDK_OFFSET(0xA4AD6E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA4ACF80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISPALETTEREADY_OFFSET UNITYSDK_OFFSET(0xA4A7AC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xA4AD430)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDROLES_OFFSET UNITYSDK_OFFSET(0xA4ACF40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xA4AD310)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDBASICEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA4ACF60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA4ACF70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4ACB30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4ACD20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA4AD230)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA4ACF10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA4ABFA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_HASANYEQUIPTOTRACK_OFFSET UNITYSDK_OFFSET(0xA4A9E00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTREF_OFFSET UNITYSDK_OFFSET(0xA4AA0E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTSHARECODE_OFFSET UNITYSDK_OFFSET(0xA4A8C10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_INITSHARECODEPALETTE_OFFSET UNITYSDK_OFFSET(0xA4A74E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0xA4ABFD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xA4AD610)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA4A7F00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_COREROLEIDS_OFFSET UNITYSDK_OFFSET(0xA4AAA30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA4AA9A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_FROMREFID_OFFSET UNITYSDK_OFFSET(0xA4AD260)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA4AD240)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA4ACF20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA4A9940)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION_UPDATETOSERVER_OFFSET UNITYSDK_OFFSET(0xA4AB1F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__ADDROLESTO_OFFSET UNITYSDK_OFFSET(0xA4AAAC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4AD7B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLEAR_OFFSET UNITYSDK_OFFSET(0xA4A9480)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLIPTEXTWITHUNICODELENGTH_OFFSET UNITYSDK_OFFSET(0xA4A9F40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COMPRESS_OFFSET UNITYSDK_OFFSET(0xA4A89A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COPYROLESTO_OFFSET UNITYSDK_OFFSET(0xA4ABAE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A9BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__DECOMPRESS_OFFSET UNITYSDK_OFFSET(0xA4A90D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_0_OFFSET UNITYSDK_OFFSET(0xA4AD830)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_1_OFFSET UNITYSDK_OFFSET(0xA4ADAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation_TypeDefinitionIndex = 59530;

	class GridFightGameFormation : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__EquipPalette()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11170);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet__EquipIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11178);
		}
		static ::Class_0_16E4307DCC419505_727** StaticGet__ShareSerializerV2()
		{
			return (::Class_0_16E4307DCC419505_727**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11180);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__RolePalette()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11188);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet__RoleIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11190);
		}
		static ::Class_0_16E4307DCC419505_727** StaticGet__ShareSerializerV1()
		{
			return (::Class_0_16E4307DCC419505_727**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x11198);
		}
		static ::Class_0_16E4307DCC419505_727** StaticGet__ShareSerializerV3()
		{
			return (::Class_0_16E4307DCC419505_727**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x111A0);
		}
		static ::System::Boolean* StaticGet_UseV3ShareCode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation_TypeDefinitionIndex)->GetStaticField(0x5370);
		}
		// static const ::System::String* ShareCodeDataPrefix; // 0x0
		// static const ::System::String* ShareCodeDataSuffix; // 0x0
		::Class_1_3CCCD675D7774146* _EarlyRoles_k__BackingField; // 0x18
		::Class_1_3CCCD675D7774146* _MidRoles_k__BackingField; // 0x20
		::Class_3_2A6530038D51A41A<::System::UInt32>* _OrderedRecommendBasicEquipIDs_k__BackingField; // 0x28
		::System::String* _Description; // 0x30
		::Il2CppArray<::System::UInt32>* _CoreRoleIDs; // 0x38
		::Class_3_2A6530038D51A41A<::System::UInt32>* _OrderedRecommendEquipIDs_k__BackingField; // 0x40
		::Class_1_3CCCD675D7774146* _FinalRoles_k__BackingField; // 0x48
		::System::String* _Title; // 0x50
		::System::String* _FromRefID_k__BackingField; // 0x58
		::System::UInt32 _SlotIndex_k__BackingField; // 0x60
		::System::UInt32 _SeasonUID_k__BackingField; // 0x64

		::System::Void _ctor(::System::UInt32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CTOR_OFFSET))(this, slotIndex);
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

		static ::System::Int32 GetRolePaletteIndex(::System::UInt32 roleID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEPALETTEINDEX_OFFSET))(roleID);
		}

		static ::System::UInt32 GetRoleIDFromPalette(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETROLEIDFROMPALETTE_OFFSET))(index);
		}

		static ::System::Int32 GetEquipPaletteIndex(::System::UInt32 equipID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPPALETTEINDEX_OFFSET))(equipID);
		}

		static ::System::UInt32 GetEquipIDFromPalette(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEQUIPIDFROMPALETTE_OFFSET))(index);
		}

		::Il2CppArray<::System::Byte>* Serialize()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_DESERIALIZE_OFFSET))(this, data);
		}

		::System::String* ExportShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_EXPORTSHARECODE_OFFSET))(this);
		}

		::System::Boolean ImportShareCode(::System::String* shareCode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTSHARECODE_OFFSET))(this, shareCode);
		}

		static ::System::String* GetShareCodeTitle(::System::String* content)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETSHARECODETITLE_OFFSET))(content);
		}

		static ::Il2CppArray<::System::Byte>* _Compress(::Il2CppArray<::System::Byte>* raw)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COMPRESS_OFFSET))(raw);
		}

		static ::Il2CppArray<::System::Byte>* _Decompress(::Il2CppArray<::System::Byte>* compressed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__DECOMPRESS_OFFSET))(compressed);
		}

		::System::Boolean HasAnyEquipToTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_HASANYEQUIPTOTRACK_OFFSET))(this);
		}

		::System::String* _ClipTextWithUnicodeLength(::System::String* text, ::System::Int32 maxLength)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLIPTEXTWITHUNICODELENGTH_OFFSET))(this, text, maxLength);
		}

		::System::Void ImportRef(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_IMPORTREF_OFFSET))(this, refData);
		}

		::System::Void UpdateToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_UPDATETOSERVER_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormation* GetCopy()
		{
			return ((::RPG::Client::GridFightGameFormation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETCOPY_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_CoreRoleIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_COREROLEIDS_OFFSET))(this);
		}

		::System::Void set_CoreRoleIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_COREROLEIDS_OFFSET))(this, value);
		}

		::System::Void _AddRolesTo(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSeasonRole*>* roles, ::Class_1_3CCCD675D7774146* formation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSeasonRole*>*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__ADDROLESTO_OFFSET))(this, roles, formation);
		}

		::System::Void _CopyRolesTo(::System::Collections::Generic::IEnumerable_1<::Class_2_181F61C600ECA68B*>* roles, ::Class_1_3CCCD675D7774146* formation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_2_181F61C600ECA68B*>*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__COPYROLESTO_OFFSET))(this, roles, formation);
		}

		::System::Boolean IsReferenced(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISREFERENCED_OFFSET))(this, roleID);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__CLEAR_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormationEditor* GetEditor()
		{
			return ((::RPG::Client::GridFightGameFormationEditor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETEDITOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetRecommendEquip(::System::Int32 order)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIP_OFFSET))(this, order);
		}

		::RPG::Client::GridFightEquipItemData* GetBasicRecommendEquip(::System::Int32 order)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETBASICRECOMMENDEQUIP_OFFSET))(this, order);
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

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::Class_1_3CCCD675D7774146* get_FinalRoles()
		{
			return ((::Class_1_3CCCD675D7774146*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FINALROLES_OFFSET))(this);
		}

		::Class_1_3CCCD675D7774146* get_MidRoles()
		{
			return ((::Class_1_3CCCD675D7774146*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_MIDROLES_OFFSET))(this);
		}

		::Class_1_3CCCD675D7774146* get_EarlyRoles()
		{
			return ((::Class_1_3CCCD675D7774146*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_EARLYROLES_OFFSET))(this);
		}

		::Class_3_2A6530038D51A41A<::System::UInt32>* get_OrderedRecommendBasicEquipIDs()
		{
			return ((::Class_3_2A6530038D51A41A<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDBASICEQUIPIDS_OFFSET))(this);
		}

		::Class_3_2A6530038D51A41A<::System::UInt32>* get_OrderedRecommendEquipIDs()
		{
			return ((::Class_3_2A6530038D51A41A<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ORDEREDRECOMMENDEQUIPIDS_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISEMPTY_OFFSET))(this);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_SEASONUID_OFFSET))(this, value);
		}

		::System::String* get_FromRefID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_FROMREFID_OFFSET))(this);
		}

		::System::Void set_FromRefID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_SET_FROMREFID_OFFSET))(this, value);
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

		::System::Boolean IsRoleMain(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_ISROLEMAIN_OFFSET))(this, roleID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRecommendEquips(::System::UInt32 roleID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GETRECOMMENDEQUIPS_OFFSET))(this, roleID);
		}

		::System::Boolean get_IsApplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION_GET_ISAPPLIED_OFFSET))(this);
		}

		::System::Void _ImportRef_b__29_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_0_OFFSET))(this, success);
		}

		::System::Void _ImportRef_b__29_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION__IMPORTREF_B__29_1_OFFSET))(this, success);
		}
	};
}
