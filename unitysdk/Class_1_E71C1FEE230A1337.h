#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_7F2F768DC85F0AF5;
class Class_1_AAD8E8F0A6693E7E;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_1_E71C1FEE230A1337_GET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x1C149280)
#define CLASS_1_E71C1FEE230A1337_METHOD_1_4F98C307B569EEAA_OFFSET UNITYSDK_OFFSET(0x1C1488B0)
#define CLASS_1_E71C1FEE230A1337_METHOD_1_5135223AB8721624_OFFSET UNITYSDK_OFFSET(0x1C148740)
#define CLASS_1_E71C1FEE230A1337_METHOD_1_87284EAED785A52F_OFFSET UNITYSDK_OFFSET(0x1C148BF0)
#define CLASS_1_E71C1FEE230A1337_METHOD_1_E31E7F888A5DD854_OFFSET UNITYSDK_OFFSET(0x1C148D40)
#define CLASS_1_E71C1FEE230A1337_METHOD_1_F7B797B066E3AB47_OFFSET UNITYSDK_OFFSET(0x1C148800)
#define CLASS_1_E71C1FEE230A1337_SET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x1C149290)
#define CLASS_1_E71C1FEE230A1337__CTOR_OFFSET UNITYSDK_OFFSET(0x1C148600)

inline static constexpr unsigned int Class_1_E71C1FEE230A1337_TypeDefinitionIndex = 36555;

class Class_1_E71C1FEE230A1337 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_AAD8E8F0A6693E7E*>* HPLNPAFFHPM; // 0x10
	::Class_1_AAD8E8F0A6693E7E* _ActiveLocker_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5135223AB8721624(::System::UInt64 a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_METHOD_1_5135223AB8721624_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F7B797B066E3AB47(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_METHOD_1_F7B797B066E3AB47_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F98C307B569EEAA(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Boolean a3, ::RPG::GameCore::CakeRaceTargetLockStatus a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Boolean, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_METHOD_1_4F98C307B569EEAA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_87284EAED785A52F(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::Class_1_7F2F768DC85F0AF5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::Class_1_7F2F768DC85F0AF5*))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_METHOD_1_87284EAED785A52F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E31E7F888A5DD854(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_METHOD_1_E31E7F888A5DD854_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_AAD8E8F0A6693E7E* get_ActiveLocker()
	{
		return ((::Class_1_AAD8E8F0A6693E7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_GET_ACTIVELOCKER_OFFSET))(this);
	}

	::System::Void set_ActiveLocker(::Class_1_AAD8E8F0A6693E7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AAD8E8F0A6693E7E*))((::PBYTE)hIl2Cpp + CLASS_1_E71C1FEE230A1337_SET_ACTIVELOCKER_OFFSET))(this, a1);
	}
};
