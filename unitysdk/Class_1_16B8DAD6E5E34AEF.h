#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16B8DAD6E5E34AEF___c__DisplayClass18_0.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_16B8DAD6E5E34AEF_Class_3_FA99B1215EE18004;
class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ComplexSkillAISourceRetarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_0433FB3BD97FA0FC_OFFSET UNITYSDK_OFFSET(0x124E5470)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_076868C5C39A64FA_OFFSET UNITYSDK_OFFSET(0x124E21F0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_12385953E00A3E0C_OFFSET UNITYSDK_OFFSET(0x124E2CA0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_16697784A3F24DF8_OFFSET UNITYSDK_OFFSET(0x124E19A0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_18FEDB1C48661AB6_OFFSET UNITYSDK_OFFSET(0x124E5710)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_1F18D2F56857E935_OFFSET UNITYSDK_OFFSET(0x124E3D00)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_1F50B24A44291BB3_OFFSET UNITYSDK_OFFSET(0x124E4AE0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2691C854BACF06B2_OFFSET UNITYSDK_OFFSET(0x124E2750)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_27D631A1CB240EE9_OFFSET UNITYSDK_OFFSET(0x124E5860)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2907E76B7405DD4C_OFFSET UNITYSDK_OFFSET(0x124E33B0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2C2431E9B718A888_OFFSET UNITYSDK_OFFSET(0x124E0ED0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_350E45782B7E8194_OFFSET UNITYSDK_OFFSET(0x124E17D0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_605F2D67102A25C7_OFFSET UNITYSDK_OFFSET(0x124E13E0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_622EB3C2F3D5A974_OFFSET UNITYSDK_OFFSET(0x124E1120)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_79C46D7642A1553D_OFFSET UNITYSDK_OFFSET(0x124E4E20)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_7D7972E27E18992A_OFFSET UNITYSDK_OFFSET(0x124E25C0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_86711CB89910EA9E_OFFSET UNITYSDK_OFFSET(0x124E31A0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_911A5368103B750D_OFFSET UNITYSDK_OFFSET(0x124E5A60)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_96421819B09BF268_OFFSET UNITYSDK_OFFSET(0x124E04C0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_97F93B5D3891217F_OFFSET UNITYSDK_OFFSET(0x124E0C10)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_9D9A154A798A5E98_OFFSET UNITYSDK_OFFSET(0x124E58D0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_9E11BF8D1FC0F2E4_OFFSET UNITYSDK_OFFSET(0x124E45A0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A4BF810FF02996E0_OFFSET UNITYSDK_OFFSET(0x124E1E10)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A69E42F2C75D9C82_OFFSET UNITYSDK_OFFSET(0x124E3690)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A7FD88E2BCAAD6E8_OFFSET UNITYSDK_OFFSET(0x124E3890)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_AF27B82013E3A0D3_OFFSET UNITYSDK_OFFSET(0x124E5530)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_C73507FB5EEDA332_OFFSET UNITYSDK_OFFSET(0x124E3760)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_D58354B1F3DA979B_OFFSET UNITYSDK_OFFSET(0x124E4790)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_DBF42E07C17F9C5A_OFFSET UNITYSDK_OFFSET(0x124E1F10)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E1A55080835D11A2_OFFSET UNITYSDK_OFFSET(0x124E1BE0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E58DB2E3240988A9_OFFSET UNITYSDK_OFFSET(0x124E50A0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E89B436113081676_OFFSET UNITYSDK_OFFSET(0x124E22E0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_EEFC736CE31734A7_1_OFFSET UNITYSDK_OFFSET(0x124E5B70)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_EEFC736CE31734A7_OFFSET UNITYSDK_OFFSET(0x124E52D0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_F8AA370C1D634EAA_OFFSET UNITYSDK_OFFSET(0x124E43B0)
#define CLASS_1_16B8DAD6E5E34AEF_METHOD_1_FF647BF441A81772_OFFSET UNITYSDK_OFFSET(0x124E28E0)
#define CLASS_1_16B8DAD6E5E34AEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x124E5CC0)
#define CLASS_1_16B8DAD6E5E34AEF__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET UNITYSDK_OFFSET(0x124E2C30)
#define CLASS_1_16B8DAD6E5E34AEF__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET UNITYSDK_OFFSET(0x124E2FC0)

inline static constexpr unsigned int Class_1_16B8DAD6E5E34AEF_TypeDefinitionIndex = 50133;

class Class_1_16B8DAD6E5E34AEF : public ::System::Object
{
public:
	static ::RPG::GameCore::TaskContext** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TaskContext**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B8DAD6E5E34AEF_TypeDefinitionIndex)->GetStaticField(0x10AB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_16B8DAD6E5E34AEF_Class_3_FA99B1215EE18004*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_16B8DAD6E5E34AEF_Class_3_FA99B1215EE18004*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B8DAD6E5E34AEF_TypeDefinitionIndex)->GetStaticField(0x10AB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_96421819B09BF268(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_96421819B09BF268_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_97F93B5D3891217F(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_97F93B5D3891217F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2C2431E9B718A888(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2C2431E9B718A888_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_622EB3C2F3D5A974(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_622EB3C2F3D5A974_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_605F2D67102A25C7(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_605F2D67102A25C7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_350E45782B7E8194(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_350E45782B7E8194_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_16697784A3F24DF8(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_16697784A3F24DF8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E1A55080835D11A2(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E1A55080835D11A2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A4BF810FF02996E0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A4BF810FF02996E0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_DBF42E07C17F9C5A(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_DBF42E07C17F9C5A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_076868C5C39A64FA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_076868C5C39A64FA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E89B436113081676(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E89B436113081676_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_7D7972E27E18992A(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_7D7972E27E18992A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2691C854BACF06B2(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2691C854BACF06B2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_FF647BF441A81772(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_FF647BF441A81772_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_12385953E00A3E0C(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_12385953E00A3E0C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_86711CB89910EA9E(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_86711CB89910EA9E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2907E76B7405DD4C(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_2907E76B7405DD4C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A69E42F2C75D9C82(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A69E42F2C75D9C82_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_C73507FB5EEDA332(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_C73507FB5EEDA332_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A7FD88E2BCAAD6E8(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_A7FD88E2BCAAD6E8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_1F18D2F56857E935(::RPG::GameCore::ComplexSkillAISourceRetarget*& a1, ::Class_1_70697F531F566942_1*& a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::ComplexSkillAISourceRetarget*&, ::Class_1_70697F531F566942_1*&))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_1F18D2F56857E935_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_F8AA370C1D634EAA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_F8AA370C1D634EAA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9E11BF8D1FC0F2E4(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_9E11BF8D1FC0F2E4_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_D58354B1F3DA979B(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_D58354B1F3DA979B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_1F50B24A44291BB3(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_1F50B24A44291BB3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_79C46D7642A1553D(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_79C46D7642A1553D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E58DB2E3240988A9(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_E58DB2E3240988A9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_EEFC736CE31734A7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0433FB3BD97FA0FC(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_0433FB3BD97FA0FC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_AF27B82013E3A0D3(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_AF27B82013E3A0D3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_18FEDB1C48661AB6(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_18FEDB1C48661AB6_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_27D631A1CB240EE9(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_27D631A1CB240EE9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9D9A154A798A5E98(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_9D9A154A798A5E98_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_911A5368103B750D(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_911A5368103B750D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF_METHOD_1_EEFC736CE31734A7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAIContainModifierLayer_g__GetLayer_17_0(::RPG::GameCore::GameEntity* pEntity, ::System::String* sModName)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET))(pEntity, sModName);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAISourceModifierValue_g__GetModifierValue_18_0(::RPG::GameCore::GameEntity* pEntity, ::System::String* sModName, ::RPG::GameCore::ModifierValueType eValueType, ::RPG::GameCore::NumOperationType eCombineType, ::Class_1_16B8DAD6E5E34AEF___c__DisplayClass18_0& a5)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ModifierValueType, ::RPG::GameCore::NumOperationType, ::Class_1_16B8DAD6E5E34AEF___c__DisplayClass18_0&))((::PBYTE)hIl2Cpp + CLASS_1_16B8DAD6E5E34AEF__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET))(pEntity, sModName, eValueType, eCombineType, a5);
	}
};
