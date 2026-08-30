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
class Class_2_291F7DA21A504FC4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9159E45979F8B791_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x1A6E0C10)
#define CLASS_2_9159E45979F8B791_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1A6E0DA0)
#define CLASS_2_9159E45979F8B791_METHOD_2_602564279411879E_OFFSET UNITYSDK_OFFSET(0x1A6E17E0)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_1_OFFSET UNITYSDK_OFFSET(0x1A6E1BE0)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_2_OFFSET UNITYSDK_OFFSET(0x1A6E1C70)
#define CLASS_2_9159E45979F8B791_METHOD_2_8D78290CBCA3E0B8_OFFSET UNITYSDK_OFFSET(0x1A6E1B50)
#define CLASS_2_9159E45979F8B791_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1A6E0C20)
#define CLASS_2_9159E45979F8B791_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x1A6E0E60)
#define CLASS_2_9159E45979F8B791_METHOD_2_ABEF0232650F1FB1_OFFSET UNITYSDK_OFFSET(0x1A6E1160)
#define CLASS_2_9159E45979F8B791_METHOD_2_FD8E8C912ECA33D9_OFFSET UNITYSDK_OFFSET(0x1A6E19D0)
#define CLASS_2_9159E45979F8B791__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E1D00)

inline static constexpr unsigned int Class_2_9159E45979F8B791_TypeDefinitionIndex = 53967;

class Class_2_9159E45979F8B791 : public ::Class_1_8A0BE42C657CE107
{
public:
	::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::Class_1_FD6F62630DBCC357*>* MAJIBJBAIHG; // 0x20
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* HPKBJIDDHKH; // 0x28
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* HNOLNCCAEEB; // 0x30
	::System::Action_1<::Class_2_291F7DA21A504FC4*>* MIJEEJDKJEO; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* NNDONLIHELA; // 0x48
	::System::UInt32 CBPPMDNFIMG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
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

	::System::Void Method_2_602564279411879E(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_9159E45979F8B791_METHOD_2_602564279411879E_OFFSET))(this, a1);
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
};
