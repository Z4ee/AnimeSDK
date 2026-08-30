#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43B0AF86156D9901;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_CLEAR_OFFSET UNITYSDK_OFFSET(0xC452C00)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_37F04D5E56F349AD_OFFSET UNITYSDK_OFFSET(0xC452CA0)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_C71ABC222346085C_OFFSET UNITYSDK_OFFSET(0xC451B70)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_DAAC073798B570B5_OFFSET UNITYSDK_OFFSET(0xC4525A0)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_E0E036B99A145590_OFFSET UNITYSDK_OFFSET(0xC452B70)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_EB94507CA7798BFC_OFFSET UNITYSDK_OFFSET(0xC452EE0)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_F1A7FFC3C8AFFA3A_OFFSET UNITYSDK_OFFSET(0xC453660)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xC452E70)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_FB2F21EBB919B56A_OFFSET UNITYSDK_OFFSET(0xC451C40)
#define CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1__CTOR_OFFSET UNITYSDK_OFFSET(0xC452A10)

inline static constexpr unsigned int Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1_TypeDefinitionIndex = 54594;

class Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1 : public ::System::Object
{
public:
	::Class_1_43B0AF86156D9901* NJIPEJMNNKD; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CIKDOOGLNDF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* DAAEFLHHLHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1__CTOR_OFFSET))(this);
	}

	static ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* Method_1_E0E036B99A145590(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_E0E036B99A145590_OFFSET))(a1);
	}

	static ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* Method_1_C71ABC222346085C(::Class_1_AC66714FF5876767* a1)
	{
		return ((::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1*(*)(::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_C71ABC222346085C_OFFSET))(a1);
	}

	::System::Void Method_1_FB2F21EBB919B56A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::Class_1_43B0AF86156D9901* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_FB2F21EBB919B56A_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_37F04D5E56F349AD(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_37F04D5E56F349AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_EB94507CA7798BFC(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_EB94507CA7798BFC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F1A7FFC3C8AFFA3A(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_F1A7FFC3C8AFFA3A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_DAAC073798B570B5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_1_9D2500B7447E67F1_METHOD_1_DAAC073798B570B5_OFFSET))(this, a1, a2);
	}
};
