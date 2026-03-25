#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59F853DDC1BD9782___c__DisplayClass16_0.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_59F853DDC1BD9782_Class_3_FA99B1215EE18004;
class Class_1_70697F531F566942;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ComplexSkillAISourceRetarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_59F853DDC1BD9782_METHOD_1_0433FB3BD97FA0FC_OFFSET UNITYSDK_OFFSET(0x1102AC10)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_076868C5C39A64FA_OFFSET UNITYSDK_OFFSET(0x10C0C9F0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_12385953E00A3E0C_OFFSET UNITYSDK_OFFSET(0x10C0D3F0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_16697784A3F24DF8_OFFSET UNITYSDK_OFFSET(0x10C0C1E0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_18FEDB1C48661AB6_OFFSET UNITYSDK_OFFSET(0x1102AEC0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_1F18D2F56857E935_OFFSET UNITYSDK_OFFSET(0x10C0E250)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_1F50B24A44291BB3_OFFSET UNITYSDK_OFFSET(0x10C0F020)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_2691C854BACF06B2_OFFSET UNITYSDK_OFFSET(0x10C0CF10)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_27D631A1CB240EE9_OFFSET UNITYSDK_OFFSET(0x1102B010)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_2907E76B7405DD4C_OFFSET UNITYSDK_OFFSET(0x10C0D920)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_2C2431E9B718A888_1_OFFSET UNITYSDK_OFFSET(0x1102A5B0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_2C2431E9B718A888_OFFSET UNITYSDK_OFFSET(0x10C0B720)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_350E45782B7E8194_OFFSET UNITYSDK_OFFSET(0x10C0C010)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_5B62C403109A01CD_OFFSET UNITYSDK_OFFSET(0x10C0CAE0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_605F2D67102A25C7_OFFSET UNITYSDK_OFFSET(0x10C0BC20)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_622EB3C2F3D5A974_OFFSET UNITYSDK_OFFSET(0x10C0B970)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_7D7972E27E18992A_OFFSET UNITYSDK_OFFSET(0x10C0CD80)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_841C228B30F7C3A3_OFFSET UNITYSDK_OFFSET(0x10C0C740)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_86711CB89910EA9E_OFFSET UNITYSDK_OFFSET(0x10C0D710)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_911A5368103B750D_OFFSET UNITYSDK_OFFSET(0x1102B210)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_96421819B09BF268_OFFSET UNITYSDK_OFFSET(0x10C0B590)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_9D9A154A798A5E98_OFFSET UNITYSDK_OFFSET(0x1102B080)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_9E11BF8D1FC0F2E4_OFFSET UNITYSDK_OFFSET(0x10C0EAE0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_A4BF810FF02996E0_OFFSET UNITYSDK_OFFSET(0x10C0C640)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_A69E42F2C75D9C82_OFFSET UNITYSDK_OFFSET(0x10C0DC00)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_A7FD88E2BCAAD6E8_OFFSET UNITYSDK_OFFSET(0x10C0DE00)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_AF27B82013E3A0D3_OFFSET UNITYSDK_OFFSET(0x1102ACD0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_C73507FB5EEDA332_OFFSET UNITYSDK_OFFSET(0x10C0DCD0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_D58354B1F3DA979B_OFFSET UNITYSDK_OFFSET(0x10C0ECD0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_E1A55080835D11A2_OFFSET UNITYSDK_OFFSET(0x10C0C410)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_E58DB2E3240988A9_OFFSET UNITYSDK_OFFSET(0x1102A830)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_EEFC736CE31734A7_1_OFFSET UNITYSDK_OFFSET(0x1102B320)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_EEFC736CE31734A7_OFFSET UNITYSDK_OFFSET(0x1102AA70)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_F8AA370C1D634EAA_OFFSET UNITYSDK_OFFSET(0x10C0E8F0)
#define CLASS_1_59F853DDC1BD9782_METHOD_1_FF647BF441A81772_OFFSET UNITYSDK_OFFSET(0x10C0D0A0)
#define CLASS_1_59F853DDC1BD9782__CCTOR_OFFSET UNITYSDK_OFFSET(0x1102B470)
#define CLASS_1_59F853DDC1BD9782__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_15_0_OFFSET UNITYSDK_OFFSET(0x1102C8E0)
#define CLASS_1_59F853DDC1BD9782__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_16_0_OFFSET UNITYSDK_OFFSET(0x1102C950)

inline static constexpr unsigned int Class_1_59F853DDC1BD9782_TypeDefinitionIndex = 43436;

class Class_1_59F853DDC1BD9782 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_59F853DDC1BD9782_Class_3_FA99B1215EE18004*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_59F853DDC1BD9782_Class_3_FA99B1215EE18004*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F853DDC1BD9782_TypeDefinitionIndex)->GetStaticField(0x2CC00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_96421819B09BF268(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_96421819B09BF268_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2C2431E9B718A888(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_2C2431E9B718A888_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_622EB3C2F3D5A974(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_622EB3C2F3D5A974_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_605F2D67102A25C7(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_605F2D67102A25C7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_350E45782B7E8194(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_350E45782B7E8194_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_16697784A3F24DF8(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_16697784A3F24DF8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E1A55080835D11A2(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_E1A55080835D11A2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A4BF810FF02996E0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_A4BF810FF02996E0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_841C228B30F7C3A3(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_841C228B30F7C3A3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_076868C5C39A64FA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_076868C5C39A64FA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5B62C403109A01CD(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_5B62C403109A01CD_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_7D7972E27E18992A(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_7D7972E27E18992A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2691C854BACF06B2(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_2691C854BACF06B2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_FF647BF441A81772(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_FF647BF441A81772_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_12385953E00A3E0C(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_12385953E00A3E0C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_86711CB89910EA9E(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_86711CB89910EA9E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2907E76B7405DD4C(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_2907E76B7405DD4C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A69E42F2C75D9C82(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_A69E42F2C75D9C82_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_C73507FB5EEDA332(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_C73507FB5EEDA332_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A7FD88E2BCAAD6E8(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_A7FD88E2BCAAD6E8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_1F18D2F56857E935(::RPG::GameCore::ComplexSkillAISourceRetarget*& a1, ::Class_1_70697F531F566942*& a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::ComplexSkillAISourceRetarget*&, ::Class_1_70697F531F566942*&))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_1F18D2F56857E935_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_F8AA370C1D634EAA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_F8AA370C1D634EAA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9E11BF8D1FC0F2E4(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_9E11BF8D1FC0F2E4_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_D58354B1F3DA979B(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_D58354B1F3DA979B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_1F50B24A44291BB3(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_1F50B24A44291BB3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2C2431E9B718A888_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_2C2431E9B718A888_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E58DB2E3240988A9(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_E58DB2E3240988A9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_EEFC736CE31734A7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0433FB3BD97FA0FC(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_0433FB3BD97FA0FC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_AF27B82013E3A0D3(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_AF27B82013E3A0D3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_18FEDB1C48661AB6(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_18FEDB1C48661AB6_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_27D631A1CB240EE9(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_27D631A1CB240EE9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9D9A154A798A5E98(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_9D9A154A798A5E98_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_911A5368103B750D(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_911A5368103B750D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_METHOD_1_EEFC736CE31734A7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAIContainModifierLayer_g__GetLayer_15_0(::RPG::GameCore::GameEntity* pEntity, ::System::String* sModName)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_15_0_OFFSET))(pEntity, sModName);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAISourceModifierValue_g__GetModifierValue_16_0(::RPG::GameCore::GameEntity* pEntity, ::System::String* sModName, ::RPG::GameCore::ModifierValueType eValueType, ::RPG::GameCore::NumOperationType eCombineType, ::Class_1_59F853DDC1BD9782___c__DisplayClass16_0& a5)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ModifierValueType, ::RPG::GameCore::NumOperationType, ::Class_1_59F853DDC1BD9782___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_16_0_OFFSET))(pEntity, sModName, eValueType, eCombineType, a5);
	}
};
