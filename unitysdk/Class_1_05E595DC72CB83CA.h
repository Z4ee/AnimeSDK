#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/RtSkillUseResult.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/Struct_2_F52539D238DC1365.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_444;
class Class_0_16E4307DCC419505_445;
class Class_1_0BB31ECC72CE354E;
class Class_1_11F507CAFD9CD2DF;
class Class_1_5F51D4049EA87B7B;
class Class_1_A58651510BF6ACD7;
class Class_1_E7BD46EB43F1A06F;
class Class_2_0CFF1B97C0373261;
class Class_2_99871FCF90B6E8A6;
class Class_2_F3B643C4D5BD11F2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class RtSkillTargetInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_05E595DC72CB83CA_DISPATCHPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xF93C9A0)
#define CLASS_1_05E595DC72CB83CA_GET_DESCTABLE_OFFSET UNITYSDK_OFFSET(0xF93CF80)
#define CLASS_1_05E595DC72CB83CA_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xF93CF50)
#define CLASS_1_05E595DC72CB83CA_GET_PROPERTYTABLE_OFFSET UNITYSDK_OFFSET(0xF93CF70)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0xF93D5F0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_0C5B01FC5655AF82_OFFSET UNITYSDK_OFFSET(0xF93FC10)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_0C725691179037B1_OFFSET UNITYSDK_OFFSET(0xF93C560)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_0E21809B436D7FAF_OFFSET UNITYSDK_OFFSET(0xF93C0F0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xF93F8E0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xF93DB50)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF9405D0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_3A19991166C56F15_OFFSET UNITYSDK_OFFSET(0xF93C6C0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_3B1DA194839510CA_OFFSET UNITYSDK_OFFSET(0xF940550)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xF93D410)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_56B9555826E06CEF_OFFSET UNITYSDK_OFFSET(0xF93D530)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_591D1D0926CC1684_OFFSET UNITYSDK_OFFSET(0xF93EB10)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_610C497C4D6221B0_OFFSET UNITYSDK_OFFSET(0xF93F970)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_6249445325A6227E_OFFSET UNITYSDK_OFFSET(0xF93E1C0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_65470448A83353CA_OFFSET UNITYSDK_OFFSET(0xF940430)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_67A923E047B8DBC5_OFFSET UNITYSDK_OFFSET(0xF93C430)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_74EB3559221F6DCB_OFFSET UNITYSDK_OFFSET(0xF93F0A0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_75676982F279EAA3_OFFSET UNITYSDK_OFFSET(0xF93C820)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_75FF4EB822577382_OFFSET UNITYSDK_OFFSET(0xF93FA90)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_7AB417CD73CB3735_OFFSET UNITYSDK_OFFSET(0xF9403D0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0xF93EBB0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xF940620)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xF93E2E0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xF93D310)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_A4E0A8C1DDA0F425_OFFSET UNITYSDK_OFFSET(0xF93E3F0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xF93C9F0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_CEE19E05BD6D6BEE_OFFSET UNITYSDK_OFFSET(0xF940630)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_D47D06B2A9235FEB_OFFSET UNITYSDK_OFFSET(0xF93E350)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_DE0F12B756C00FC9_OFFSET UNITYSDK_OFFSET(0xF93CFE0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_E1F3EADF46C38068_OFFSET UNITYSDK_OFFSET(0xF93C070)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_E466BE0A2A01F71A_OFFSET UNITYSDK_OFFSET(0xF93ECF0)
#define CLASS_1_05E595DC72CB83CA_METHOD_1_F661BF3915CFFD3D_OFFSET UNITYSDK_OFFSET(0xF9405C0)
#define CLASS_1_05E595DC72CB83CA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF93FBB0)
#define CLASS_1_05E595DC72CB83CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF93BC00)
#define CLASS_1_05E595DC72CB83CA__CTOR_OFFSET UNITYSDK_OFFSET(0xF9406E0)
#define CLASS_1_05E595DC72CB83CA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF9406F0)

inline static constexpr unsigned int Class_1_05E595DC72CB83CA_TypeDefinitionIndex = 49838;

class Class_1_05E595DC72CB83CA : public ::System::Object
{
public:
	static ::RPG::GameCore::RtSkillTargetInfo** StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::RtSkillTargetInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05E595DC72CB83CA_TypeDefinitionIndex)->GetStaticField(0xC9C0);
	}
	static ::Class_1_0BB31ECC72CE354E** StaticGet_Field_1_0()
	{
		return (::Class_1_0BB31ECC72CE354E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05E595DC72CB83CA_TypeDefinitionIndex)->GetStaticField(0xC9C8);
	}
	::System::String* Field_1_2; // 0x10
	::Class_2_99871FCF90B6E8A6* Field_1_13; // 0x18
	::Class_0_16E4307DCC419505_444* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_21; // 0x28
	::Class_2_F3B643C4D5BD11F2* Field_1_14; // 0x30
	::Class_2_0CFF1B97C0373261* Field_1_7; // 0x38
	::RPG::GameCore::GameEntity* Field_1_22; // 0x40
	::Il2CppArray<::System::String*>* Field_1_16; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_20; // 0x50
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_1_15; // 0x58
	::Class_1_5F51D4049EA87B7B* Field_1_17; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_1_18; // 0x68
	::RPG::GameCore::GameEntity* Field_1_6; // 0x70
	::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* Field_1_1; // 0x78
	::RPG::GameCore::RtSkillConfig* Field_1_8; // 0x80
	::RPG::GameCore::FixVec3 Field_1_19; // 0x88
	::RPG::GameCore::FixPoint Field_1_12; // 0xA0
	::RPG::GameCore::AttackType Field_1_4; // 0xA8
	::System::Int32 Field_1_3; // 0xAC
	::RPG::GameCore::RtSkillState Field_1_11; // 0xB0
	::RPG::GameCore::SkillEffect Field_1_5; // 0xB4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E1F3EADF46C38068(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_E1F3EADF46C38068_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E21809B436D7FAF(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_310B46602BEB4586 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_0E21809B436D7FAF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_67A923E047B8DBC5(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_310B46602BEB4586 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_67A923E047B8DBC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_0C725691179037B1(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_310B46602BEB4586 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_0C725691179037B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3A19991166C56F15(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::Struct_2_310B46602BEB4586 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_3A19991166C56F15_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_75676982F279EAA3(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_310B46602BEB4586 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::RPG::GameCore::FixPoint, ::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_75676982F279EAA3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void DispatchPropertyChange(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_DISPATCHPROPERTYCHANGE_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_GET_OWNERENTITY_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* get_PropertyTable()
	{
		return ((::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_GET_PROPERTYTABLE_OFFSET))(this);
	}

	::Class_1_0BB31ECC72CE354E* get_DescTable()
	{
		return ((::Class_1_0BB31ECC72CE354E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_GET_DESCTABLE_OFFSET))(this);
	}

	::System::Void Method_1_DE0F12B756C00FC9(::System::Int32 a1, ::Class_2_0CFF1B97C0373261* a2, ::Class_0_16E4307DCC419505_444* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_0CFF1B97C0373261*, ::Class_0_16E4307DCC419505_444*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_DE0F12B756C00FC9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6249445325A6227E(::Struct_2_F52539D238DC1365 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F52539D238DC1365))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_6249445325A6227E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_D47D06B2A9235FEB(::Struct_2_F52539D238DC1365 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F52539D238DC1365))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_D47D06B2A9235FEB_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtSkillUseResult Method_1_A4E0A8C1DDA0F425(::Struct_2_F52539D238DC1365 a1, ::Class_0_16E4307DCC419505_445* a2)
	{
		return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::Struct_2_F52539D238DC1365, ::Class_0_16E4307DCC419505_445*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_A4E0A8C1DDA0F425_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Void Method_1_74EB3559221F6DCB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_74EB3559221F6DCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_1_591D1D0926CC1684(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_591D1D0926CC1684_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_610C497C4D6221B0(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_610C497C4D6221B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_75FF4EB822577382(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_75FF4EB822577382_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_TOSTRING_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_0C5B01FC5655AF82()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_0C5B01FC5655AF82_OFFSET))(this);
	}

	::System::Boolean Method_1_E466BE0A2A01F71A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_E466BE0A2A01F71A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B1DA194839510CA(::Class_2_F3B643C4D5BD11F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_3B1DA194839510CA_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtSkillState Method_1_F661BF3915CFFD3D()
	{
		return ((::RPG::GameCore::RtSkillState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_F661BF3915CFFD3D_OFFSET))(this);
	}

	::System::Void Method_1_56B9555826E06CEF(::RPG::GameCore::RtSkillState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_56B9555826E06CEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_CEE19E05BD6D6BEE()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_CEE19E05BD6D6BEE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_7AB417CD73CB3735()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_7AB417CD73CB3735_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_1_65470448A83353CA()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_65470448A83353CA_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E595DC72CB83CA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
