#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_165;
class Class_2_71ECD705C8627A9D;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_E2997D206E4218FC_CLEAR_OFFSET UNITYSDK_OFFSET(0xAB03270)
#define CLASS_1_E2997D206E4218FC_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAB04430)
#define CLASS_1_E2997D206E4218FC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB04450)
#define CLASS_1_E2997D206E4218FC_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAB04490)
#define CLASS_1_E2997D206E4218FC_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAB04470)
#define CLASS_1_E2997D206E4218FC_METHOD_1_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0xAB03320)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1432F166180B54CA_OFFSET UNITYSDK_OFFSET(0xAB041E0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xAB04350)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAB042D0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1D0A4C83E6604AAD_OFFSET UNITYSDK_OFFSET(0xAB03C00)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAB043D0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_266FE4035ADE5833_OFFSET UNITYSDK_OFFSET(0xAB03370)
#define CLASS_1_E2997D206E4218FC_METHOD_1_2820E4F92E5E2CF7_OFFSET UNITYSDK_OFFSET(0xAB02FA0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_28938589EBCF7FF2_OFFSET UNITYSDK_OFFSET(0xAB03680)
#define CLASS_1_E2997D206E4218FC_METHOD_1_A1AD6AA1D84454E0_OFFSET UNITYSDK_OFFSET(0xAB033E0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_CD1AE2DB330BAD04_OFFSET UNITYSDK_OFFSET(0xAB03920)
#define CLASS_1_E2997D206E4218FC_METHOD_1_EA8500DAA10F51B8_OFFSET UNITYSDK_OFFSET(0xAB037E0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_EF0B05E8544105FB_OFFSET UNITYSDK_OFFSET(0xAB03F90)
#define CLASS_1_E2997D206E4218FC_METHOD_1_FE71B4E6AA99788E_OFFSET UNITYSDK_OFFSET(0xAB03560)
#define CLASS_1_E2997D206E4218FC_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAB04440)
#define CLASS_1_E2997D206E4218FC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB04460)
#define CLASS_1_E2997D206E4218FC_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAB044A0)
#define CLASS_1_E2997D206E4218FC_SET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAB04480)
#define CLASS_1_E2997D206E4218FC__CTOR_OFFSET UNITYSDK_OFFSET(0xAB044B0)

inline static constexpr unsigned int Class_1_E2997D206E4218FC_TypeDefinitionIndex = 71070;

class Class_1_E2997D206E4218FC : public ::System::Object
{
public:
	::RPG::GameCore::LevelGraphConfig* _Config_k__BackingField; // 0x10
	::System::String* _ConfigPath_k__BackingField; // 0x18
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_1_2; // 0x20
	::RPG::GameCore::LevelGraph* _LevelGraph_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_165* Field_1_4; // 0x30
	::Class_2_71ECD705C8627A9D* _CustomData_k__BackingField; // 0x38
	::RPG::GameCore::GameEntity* Field_1_6; // 0x40
	::RPG::GameCore::TaskContext* Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2820E4F92E5E2CF7(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_165* a2, ::System::String* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_165*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_2820E4F92E5E2CF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_1_266FE4035ADE5833(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_266FE4035ADE5833_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1AD6AA1D84454E0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_A1AD6AA1D84454E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE71B4E6AA99788E(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_FE71B4E6AA99788E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_28938589EBCF7FF2(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_28938589EBCF7FF2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EA8500DAA10F51B8(::System::String* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_EA8500DAA10F51B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD1AE2DB330BAD04(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_CD1AE2DB330BAD04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF0B05E8544105FB(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_EF0B05E8544105FB_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_1D0A4C83E6604AAD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_1D0A4C83E6604AAD_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1432F166180B54CA(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_1432F166180B54CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* get_ConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_CONFIGPATH_OFFSET))(this);
	}

	::System::Void set_ConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CONFIGPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphConfig* get_Config()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LevelGraphConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraph* get_LevelGraph()
	{
		return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_LEVELGRAPH_OFFSET))(this);
	}

	::System::Void set_LevelGraph(::RPG::GameCore::LevelGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_LEVELGRAPH_OFFSET))(this, a1);
	}

	::Class_2_71ECD705C8627A9D* get_CustomData()
	{
		return ((::Class_2_71ECD705C8627A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_CUSTOMDATA_OFFSET))(this);
	}

	::System::Void set_CustomData(::Class_2_71ECD705C8627A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_71ECD705C8627A9D*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CUSTOMDATA_OFFSET))(this, a1);
	}
};
