#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_51EEF82BC62082E0;
class Class_2_24193089A4D2255F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FA8CBF657A97302F_METHOD_2_05222F63AA319F37_OFFSET UNITYSDK_OFFSET(0x95754F0)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x9574950)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_246DE0EA1A837F00_OFFSET UNITYSDK_OFFSET(0x9575620)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9574A60)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_53BAD1DC82A69C88_OFFSET UNITYSDK_OFFSET(0x9574E30)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9575A60)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9575A00)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_1_OFFSET UNITYSDK_OFFSET(0x9575850)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_2_OFFSET UNITYSDK_OFFSET(0x95758E0)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_OFFSET UNITYSDK_OFFSET(0x95757C0)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x9574960)
#define CLASS_2_FA8CBF657A97302F_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x9574B20)
#define CLASS_2_FA8CBF657A97302F__CTOR_OFFSET UNITYSDK_OFFSET(0x9575970)

inline static constexpr unsigned int Class_2_FA8CBF657A97302F_TypeDefinitionIndex = 49534;

class Class_2_FA8CBF657A97302F : public ::Class_1_C411A3DD6A930CFA
{
public:
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_4; // 0x20
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::Class_1_51EEF82BC62082E0*>* Field_2_3; // 0x30
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_5; // 0x38
	::System::Action_1<::Class_2_24193089A4D2255F*>* Field_2_7; // 0x40
	::RPG::GameCore::TaskContext* Field_2_0; // 0x48
	::System::UInt32 Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_53BAD1DC82A69C88(::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>*))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_53BAD1DC82A69C88_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_05222F63AA319F37(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_05222F63AA319F37_OFFSET))(this, a1);
	}

	::System::Void Method_2_246DE0EA1A837F00(::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope> a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_246DE0EA1A837F00_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8_1(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8_2(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_8D78290CBCA3E0B8_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8CBF657A97302F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
