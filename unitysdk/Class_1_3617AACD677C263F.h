#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_7F2F768DC85F0AF5;
class Class_1_CF741C7505FDF9F1;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_1_3617AACD677C263F_GET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x165CD2E0)
#define CLASS_1_3617AACD677C263F_METHOD_1_61FFB5AA0E2AE93F_OFFSET UNITYSDK_OFFSET(0x165CCA00)
#define CLASS_1_3617AACD677C263F_METHOD_1_75F867D01B8EB1AC_OFFSET UNITYSDK_OFFSET(0x165CCB70)
#define CLASS_1_3617AACD677C263F_METHOD_1_D58D769767909996_OFFSET UNITYSDK_OFFSET(0x165CCAC0)
#define CLASS_1_3617AACD677C263F_METHOD_1_D930D32A9ADF6C41_OFFSET UNITYSDK_OFFSET(0x165CCCE0)
#define CLASS_1_3617AACD677C263F_METHOD_1_DF08D25056734EBE_OFFSET UNITYSDK_OFFSET(0x165CCE30)
#define CLASS_1_3617AACD677C263F_SET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x165CD2F0)
#define CLASS_1_3617AACD677C263F__CTOR_OFFSET UNITYSDK_OFFSET(0x165CC8C0)

inline static constexpr unsigned int Class_1_3617AACD677C263F_TypeDefinitionIndex = 28895;

class Class_1_3617AACD677C263F : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_CF741C7505FDF9F1*>* Field_1_0; // 0x10
	::Class_1_CF741C7505FDF9F1* _ActiveLocker_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_61FFB5AA0E2AE93F(::System::UInt64 a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_METHOD_1_61FFB5AA0E2AE93F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D58D769767909996(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_METHOD_1_D58D769767909996_OFFSET))(this, a1);
	}

	::System::Void Method_1_75F867D01B8EB1AC(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Boolean a3, ::RPG::GameCore::CakeRaceTargetLockStatus a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Boolean, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_METHOD_1_75F867D01B8EB1AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D930D32A9ADF6C41(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::Class_1_7F2F768DC85F0AF5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::Class_1_7F2F768DC85F0AF5*))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_METHOD_1_D930D32A9ADF6C41_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF08D25056734EBE(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_METHOD_1_DF08D25056734EBE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_CF741C7505FDF9F1* get_ActiveLocker()
	{
		return ((::Class_1_CF741C7505FDF9F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_GET_ACTIVELOCKER_OFFSET))(this);
	}

	::System::Void set_ActiveLocker(::Class_1_CF741C7505FDF9F1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF741C7505FDF9F1*))((::PBYTE)hIl2Cpp + CLASS_1_3617AACD677C263F_SET_ACTIVELOCKER_OFFSET))(this, value);
	}
};
