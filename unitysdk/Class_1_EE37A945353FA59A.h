#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EE37A945353FA59A___c__DisplayClass18_0.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
class Class_1_EE37A945353FA59A_Class_3_FA99B1215EE18004;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ComplexSkillAISourceRetarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EE37A945353FA59A_METHOD_1_076868C5C39A64FA_OFFSET UNITYSDK_OFFSET(0xB9AC550)
#define CLASS_1_EE37A945353FA59A_METHOD_1_081F4CB797D9CDB4_OFFSET UNITYSDK_OFFSET(0xB9AB930)
#define CLASS_1_EE37A945353FA59A_METHOD_1_0CB7940D81334DA4_OFFSET UNITYSDK_OFFSET(0xB9AF070)
#define CLASS_1_EE37A945353FA59A_METHOD_1_0E271F2EE539B9D5_1_OFFSET UNITYSDK_OFFSET(0xB9B1B50)
#define CLASS_1_EE37A945353FA59A_METHOD_1_0E271F2EE539B9D5_OFFSET UNITYSDK_OFFSET(0xB9AD100)
#define CLASS_1_EE37A945353FA59A_METHOD_1_1016FDB0261A9142_OFFSET UNITYSDK_OFFSET(0xB9AFF90)
#define CLASS_1_EE37A945353FA59A_METHOD_1_1F18D2F56857E935_OFFSET UNITYSDK_OFFSET(0xB9AE3A0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_25CC81461A17A9C0_OFFSET UNITYSDK_OFFSET(0xB9AF410)
#define CLASS_1_EE37A945353FA59A_METHOD_1_27D631A1CB240EE9_OFFSET UNITYSDK_OFFSET(0xB9B03B0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_2C2431E9B718A888_1_OFFSET UNITYSDK_OFFSET(0xB9AF810)
#define CLASS_1_EE37A945353FA59A_METHOD_1_2C2431E9B718A888_OFFSET UNITYSDK_OFFSET(0xB9AB150)
#define CLASS_1_EE37A945353FA59A_METHOD_1_388E0C5EE172605F_OFFSET UNITYSDK_OFFSET(0xB9AC650)
#define CLASS_1_EE37A945353FA59A_METHOD_1_4A46ED26AD4452A0_1_OFFSET UNITYSDK_OFFSET(0xB9AFEB0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_4A46ED26AD4452A0_OFFSET UNITYSDK_OFFSET(0xB9ADDD0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_55E6350FF6C2D211_OFFSET UNITYSDK_OFFSET(0xB9ADF40)
#define CLASS_1_EE37A945353FA59A_METHOD_1_5F2FD91BA5A68243_OFFSET UNITYSDK_OFFSET(0xB9ACCE0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_73ADC63C487F8B9F_OFFSET UNITYSDK_OFFSET(0xB9B0260)
#define CLASS_1_EE37A945353FA59A_METHOD_1_780B455FB2B2F604_OFFSET UNITYSDK_OFFSET(0xB9AAC10)
#define CLASS_1_EE37A945353FA59A_METHOD_1_84F6478D8D1CC345_OFFSET UNITYSDK_OFFSET(0xB9AC9C0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_8D94822775E2F697_OFFSET UNITYSDK_OFFSET(0xB9AD770)
#define CLASS_1_EE37A945353FA59A_METHOD_1_8EA4CD6BA322F43A_OFFSET UNITYSDK_OFFSET(0xB9B06D0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_911A5368103B750D_OFFSET UNITYSDK_OFFSET(0xB9B05C0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_9483DF83A031F067_OFFSET UNITYSDK_OFFSET(0xB9ABE60)
#define CLASS_1_EE37A945353FA59A_METHOD_1_9D9A154A798A5E98_OFFSET UNITYSDK_OFFSET(0xB9B0420)
#define CLASS_1_EE37A945353FA59A_METHOD_1_A4BF810FF02996E0_OFFSET UNITYSDK_OFFSET(0xB9AB730)
#define CLASS_1_EE37A945353FA59A_METHOD_1_B2C6D53A4DF7EACD_OFFSET UNITYSDK_OFFSET(0xB9ACB50)
#define CLASS_1_EE37A945353FA59A_METHOD_1_BC62637390FEA8E0_OFFSET UNITYSDK_OFFSET(0xB9AFAD0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_C8976EAE3907FECA_1_OFFSET UNITYSDK_OFFSET(0xB9AEBC0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_C8976EAE3907FECA_OFFSET UNITYSDK_OFFSET(0xB9ABB70)
#define CLASS_1_EE37A945353FA59A_METHOD_1_CB6D71F466EF9402_OFFSET UNITYSDK_OFFSET(0xB9B0910)
#define CLASS_1_EE37A945353FA59A_METHOD_1_DEDCBC7A4A22C64C_OFFSET UNITYSDK_OFFSET(0xB9AEE20)
#define CLASS_1_EE37A945353FA59A_METHOD_1_E1A55080835D11A2_OFFSET UNITYSDK_OFFSET(0xB9AB520)
#define CLASS_1_EE37A945353FA59A_METHOD_1_E24730BAD530C3E1_OFFSET UNITYSDK_OFFSET(0xB9AD5E0)
#define CLASS_1_EE37A945353FA59A_METHOD_1_EEFC736CE31734A7_1_OFFSET UNITYSDK_OFFSET(0xB9AFD10)
#define CLASS_1_EE37A945353FA59A_METHOD_1_EEFC736CE31734A7_OFFSET UNITYSDK_OFFSET(0xB9ABD50)
#define CLASS_1_EE37A945353FA59A_METHOD_1_F11E908E50666FE1_OFFSET UNITYSDK_OFFSET(0xB9ADD00)
#define CLASS_1_EE37A945353FA59A_METHOD_1_FD1F835590CB132A_OFFSET UNITYSDK_OFFSET(0xB9AAE10)
#define CLASS_1_EE37A945353FA59A_METHOD_1_FEE779DC346FCCD1_OFFSET UNITYSDK_OFFSET(0xB9AB380)
#define CLASS_1_EE37A945353FA59A__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B1C30)
#define CLASS_1_EE37A945353FA59A__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET UNITYSDK_OFFSET(0xB9AD070)
#define CLASS_1_EE37A945353FA59A__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET UNITYSDK_OFFSET(0xB9AD410)

inline static constexpr unsigned int Class_1_EE37A945353FA59A_TypeDefinitionIndex = 54567;

class Class_1_EE37A945353FA59A : public ::System::Object
{
public:
	static ::RPG::GameCore::TaskContext** StaticGet_BGPFIGKPKEJ()
	{
		return (::RPG::GameCore::TaskContext**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE37A945353FA59A_TypeDefinitionIndex)->GetStaticField(0x366D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_EE37A945353FA59A_Class_3_FA99B1215EE18004*>** StaticGet_LAANOLJPOAM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_EE37A945353FA59A_Class_3_FA99B1215EE18004*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE37A945353FA59A_TypeDefinitionIndex)->GetStaticField(0x366D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_780B455FB2B2F604(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_780B455FB2B2F604_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_FD1F835590CB132A(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_FD1F835590CB132A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2C2431E9B718A888(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_2C2431E9B718A888_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_FEE779DC346FCCD1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_FEE779DC346FCCD1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E1A55080835D11A2(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_E1A55080835D11A2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A4BF810FF02996E0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_A4BF810FF02996E0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_081F4CB797D9CDB4(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_081F4CB797D9CDB4_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_C8976EAE3907FECA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_C8976EAE3907FECA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_EEFC736CE31734A7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9483DF83A031F067(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_9483DF83A031F067_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_076868C5C39A64FA(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_076868C5C39A64FA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_388E0C5EE172605F(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_388E0C5EE172605F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_84F6478D8D1CC345(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_84F6478D8D1CC345_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_B2C6D53A4DF7EACD(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_B2C6D53A4DF7EACD_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5F2FD91BA5A68243(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_5F2FD91BA5A68243_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0E271F2EE539B9D5(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_0E271F2EE539B9D5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E24730BAD530C3E1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_E24730BAD530C3E1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_8D94822775E2F697(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_8D94822775E2F697_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_F11E908E50666FE1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_F11E908E50666FE1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_4A46ED26AD4452A0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_4A46ED26AD4452A0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_55E6350FF6C2D211(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_55E6350FF6C2D211_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_1F18D2F56857E935(::RPG::GameCore::ComplexSkillAISourceRetarget*& a1, ::Class_1_70697F531F566942_1*& a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::ComplexSkillAISourceRetarget*&, ::Class_1_70697F531F566942_1*&))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_1F18D2F56857E935_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_C8976EAE3907FECA_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_C8976EAE3907FECA_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_DEDCBC7A4A22C64C(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_DEDCBC7A4A22C64C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0CB7940D81334DA4(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_0CB7940D81334DA4_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_25CC81461A17A9C0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_25CC81461A17A9C0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2C2431E9B718A888_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_2C2431E9B718A888_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_BC62637390FEA8E0(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_BC62637390FEA8E0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEFC736CE31734A7_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_EEFC736CE31734A7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_4A46ED26AD4452A0_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_4A46ED26AD4452A0_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_1016FDB0261A9142(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_1016FDB0261A9142_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_73ADC63C487F8B9F(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_73ADC63C487F8B9F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_27D631A1CB240EE9(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_27D631A1CB240EE9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_9D9A154A798A5E98(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_9D9A154A798A5E98_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_911A5368103B750D(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_911A5368103B750D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_8EA4CD6BA322F43A(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_8EA4CD6BA322F43A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_CB6D71F466EF9402(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_CB6D71F466EF9402_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0E271F2EE539B9D5_1(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A_METHOD_1_0E271F2EE539B9D5_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAIContainModifierLayer_g__GetLayer_17_0(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAISourceModifierValue_g__GetModifierValue_18_0(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::ModifierValueType a3, ::RPG::GameCore::NumOperationType a4, ::Class_1_EE37A945353FA59A___c__DisplayClass18_0& a5)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ModifierValueType, ::RPG::GameCore::NumOperationType, ::Class_1_EE37A945353FA59A___c__DisplayClass18_0&))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET))(a1, a2, a3, a4, a5);
	}
};
