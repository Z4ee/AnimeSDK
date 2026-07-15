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
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/Struct_2_F52539D238DC1365.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
class Class_0_16E4307DCC419505_488;
class Class_1_11F507CAFD9CD2DF;
class Class_1_5F51D4049EA87B7B;
class Class_1_AEC4D667AA9BE4FB;
class Class_1_DFF28B1BAA582E14;
class Class_1_E7BD46EB43F1A06F;
class Class_2_0299C3274218DF36;
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

#define CLASS_1_D8203AFB32E9259C_DISPATCHPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x15591B50)
#define CLASS_1_D8203AFB32E9259C_GET_DESCTABLE_OFFSET UNITYSDK_OFFSET(0x15592360)
#define CLASS_1_D8203AFB32E9259C_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15592330)
#define CLASS_1_D8203AFB32E9259C_GET_PROPERTYTABLE_OFFSET UNITYSDK_OFFSET(0x15592350)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_025C809DC116AF4A_OFFSET UNITYSDK_OFFSET(0x155935C0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_04412667112B3991_OFFSET UNITYSDK_OFFSET(0x15595930)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_0AC4757773CE644B_OFFSET UNITYSDK_OFFSET(0x155950E0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15595AD0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_5285E499CCD89702_OFFSET UNITYSDK_OFFSET(0x15595B30)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_5546C71AF7082535_OFFSET UNITYSDK_OFFSET(0x155919C0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_56B9555826E06CEF_OFFSET UNITYSDK_OFFSET(0x15592AE0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_5939263D2FF2ED03_OFFSET UNITYSDK_OFFSET(0x15591860)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_59399DAE4B1E150D_OFFSET UNITYSDK_OFFSET(0x15593F60)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_7468C2333FD0284B_OFFSET UNITYSDK_OFFSET(0x15594F20)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_74EB3559221F6DCB_OFFSET UNITYSDK_OFFSET(0x15594490)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_7AB417CD73CB3735_OFFSET UNITYSDK_OFFSET(0x155958D0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_7F687CA13EE0372F_OFFSET UNITYSDK_OFFSET(0x15591700)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x15594020)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_86D2CA735F7A7EB3_OFFSET UNITYSDK_OFFSET(0x155915C0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x15592760)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x15595B20)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_A4E0A8C1DDA0F425_OFFSET UNITYSDK_OFFSET(0x15593830)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x15591BA0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_B3EFF5DBF1A65C79_OFFSET UNITYSDK_OFFSET(0x15594160)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_B68BB63C6CEE57D3_OFFSET UNITYSDK_OFFSET(0x15595A50)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x155928F0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0x15592BA0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_D47D06B2A9235FEB_OFFSET UNITYSDK_OFFSET(0x15593790)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_D6D04DC49729A6DD_OFFSET UNITYSDK_OFFSET(0x15591260)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_DE0F12B756C00FC9_OFFSET UNITYSDK_OFFSET(0x155923C0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_E1F3EADF46C38068_OFFSET UNITYSDK_OFFSET(0x155911E0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_E9A0EBE21D21BA0B_OFFSET UNITYSDK_OFFSET(0x15594DC0)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x15593720)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x15592F80)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x15594C90)
#define CLASS_1_D8203AFB32E9259C_METHOD_1_F661BF3915CFFD3D_OFFSET UNITYSDK_OFFSET(0x15595AC0)
#define CLASS_1_D8203AFB32E9259C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15595080)
#define CLASS_1_D8203AFB32E9259C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15590DC0)
#define CLASS_1_D8203AFB32E9259C__CTOR_OFFSET UNITYSDK_OFFSET(0x15595BB0)

inline static constexpr unsigned int Class_1_D8203AFB32E9259C_TypeDefinitionIndex = 51587;

class Class_1_D8203AFB32E9259C : public ::System::Object
{
public:
	static ::RPG::GameCore::RtSkillTargetInfo** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::RtSkillTargetInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8203AFB32E9259C_TypeDefinitionIndex)->GetStaticField(0x55480);
	}
	static ::Class_1_AEC4D667AA9BE4FB** StaticGet_Field_1_1()
	{
		return (::Class_1_AEC4D667AA9BE4FB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8203AFB32E9259C_TypeDefinitionIndex)->GetStaticField(0x55488);
	}
	::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* Field_1_2; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_4; // 0x20
	::Class_2_99871FCF90B6E8A6* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x30
	::Class_0_16E4307DCC419505_487* Field_1_7; // 0x38
	::Il2CppArray<::System::String*>* Field_1_8; // 0x40
	::Class_2_F3B643C4D5BD11F2* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_10; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_1_11; // 0x58
	::System::String* Field_1_12; // 0x60
	::RPG::GameCore::GameEntity* Field_1_13; // 0x68
	::Class_2_0299C3274218DF36* Field_1_14; // 0x70
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_1_15; // 0x78
	::RPG::GameCore::RtSkillConfig* Field_1_16; // 0x80
	::RPG::GameCore::FixPoint Field_1_17; // 0x88
	::RPG::GameCore::AttackType Field_1_18; // 0x90
	::RPG::GameCore::SkillEffect Field_1_19; // 0x94
	::RPG::GameCore::FixVec3 Field_1_20; // 0x98
	::RPG::GameCore::RtSkillState Field_1_21; // 0xB0
	::System::Int32 Field_1_22; // 0xB4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E1F3EADF46C38068(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_E1F3EADF46C38068_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6D04DC49729A6DD(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_87C8F594A107C13B a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_D6D04DC49729A6DD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_86D2CA735F7A7EB3(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_86D2CA735F7A7EB3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_7F687CA13EE0372F(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_7F687CA13EE0372F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5939263D2FF2ED03(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_5939263D2FF2ED03_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5546C71AF7082535(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_87C8F594A107C13B a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_5546C71AF7082535_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void DispatchPropertyChange(::Class_1_DFF28B1BAA582E14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_DISPATCHPROPERTYCHANGE_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_GET_OWNERENTITY_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* get_PropertyTable()
	{
		return ((::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_GET_PROPERTYTABLE_OFFSET))(this);
	}

	::Class_1_AEC4D667AA9BE4FB* get_DescTable()
	{
		return ((::Class_1_AEC4D667AA9BE4FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_GET_DESCTABLE_OFFSET))(this);
	}

	::System::Void Method_1_DE0F12B756C00FC9(::System::Int32 a1, ::Class_2_0299C3274218DF36* a2, ::Class_0_16E4307DCC419505_487* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_0299C3274218DF36*, ::Class_0_16E4307DCC419505_487*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_DE0F12B756C00FC9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_025C809DC116AF4A(::Struct_2_F52539D238DC1365 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F52539D238DC1365))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_025C809DC116AF4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_D47D06B2A9235FEB(::Struct_2_F52539D238DC1365 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F52539D238DC1365))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_D47D06B2A9235FEB_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtSkillUseResult Method_1_A4E0A8C1DDA0F425(::Struct_2_F52539D238DC1365 a1, ::Class_0_16E4307DCC419505_488* a2)
	{
		return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::Struct_2_F52539D238DC1365, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_A4E0A8C1DDA0F425_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_1_74EB3559221F6DCB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_74EB3559221F6DCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Boolean Method_1_59399DAE4B1E150D(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_59399DAE4B1E150D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E9A0EBE21D21BA0B(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_E9A0EBE21D21BA0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7468C2333FD0284B(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_7468C2333FD0284B_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_TOSTRING_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_0AC4757773CE644B()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_0AC4757773CE644B_OFFSET))(this);
	}

	::System::Boolean Method_1_B3EFF5DBF1A65C79(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_B3EFF5DBF1A65C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_B68BB63C6CEE57D3(::Class_2_F3B643C4D5BD11F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_B68BB63C6CEE57D3_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtSkillState Method_1_F661BF3915CFFD3D()
	{
		return ((::RPG::GameCore::RtSkillState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_F661BF3915CFFD3D_OFFSET))(this);
	}

	::System::Void Method_1_56B9555826E06CEF(::RPG::GameCore::RtSkillState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_56B9555826E06CEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5285E499CCD89702()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_5285E499CCD89702_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_7AB417CD73CB3735()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_7AB417CD73CB3735_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_1_04412667112B3991()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_04412667112B3991_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8203AFB32E9259C_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}
};
