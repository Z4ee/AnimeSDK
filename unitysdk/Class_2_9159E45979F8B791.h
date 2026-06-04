#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_FD6F62630DBCC357;
class Class_2_24193089A4D2255F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9159E45979F8B791_METHOD_2_05222F63AA319F37_OFFSET UNITYSDK_OFFSET(0x13571700)
#define CLASS_2_9159E45979F8B791_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x13570CF0)
#define CLASS_2_9159E45979F8B791_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13570E10)
#define CLASS_2_9159E45979F8B791_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13571C50)
#define CLASS_2_9159E45979F8B791_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13571BF0)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_1_OFFSET UNITYSDK_OFFSET(0x13571A40)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_2_OFFSET UNITYSDK_OFFSET(0x13571AD0)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_OFFSET UNITYSDK_OFFSET(0x135719B0)
#define CLASS_2_9159E45979F8B791_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x13570ED0)
#define CLASS_2_9159E45979F8B791_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13570D00)
#define CLASS_2_9159E45979F8B791_METHOD_2_ABEF0232650F1FB1_OFFSET UNITYSDK_OFFSET(0x135711D0)
#define CLASS_2_9159E45979F8B791_METHOD_2_FD8E8C912ECA33D9_OFFSET UNITYSDK_OFFSET(0x13571830)
#define CLASS_2_9159E45979F8B791__CTOR_OFFSET UNITYSDK_OFFSET(0x13571B60)

inline static constexpr unsigned int Class_2_9159E45979F8B791_TypeDefinitionIndex = 50201;

class Class_2_9159E45979F8B791 : public ::Class_1_8A0BE42C657CE107
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Action_1<::Class_2_24193089A4D2255F*>* Field_2_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::Class_1_FD6F62630DBCC357*>* Field_2_4; // 0x38
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_5; // 0x40
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_2_6; // 0x48
	::System::UInt32 Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_ABEF0232650F1FB1(::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>*))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_ABEF0232650F1FB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_05222F63AA319F37(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_05222F63AA319F37_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD8E8C912ECA33D9(::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope> a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_FD8E8C912ECA33D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8_1(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D78290CBCA3E0B8_2(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
