#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_154;
class Class_2_90C3FAB661E5C263;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_E2997D206E4218FC_CLEAR_OFFSET UNITYSDK_OFFSET(0x117AA6A0)
#define CLASS_1_E2997D206E4218FC_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x117AB910)
#define CLASS_1_E2997D206E4218FC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x117AB930)
#define CLASS_1_E2997D206E4218FC_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x117AB970)
#define CLASS_1_E2997D206E4218FC_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x117AB950)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x117AB830)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x117AB7B0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x117AB8B0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x117AA740)
#define CLASS_1_E2997D206E4218FC_METHOD_1_27B90A5A2C715B7B_OFFSET UNITYSDK_OFFSET(0x117AAAA0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_2820E4F92E5E2CF7_OFFSET UNITYSDK_OFFSET(0x117AA3D0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_486F591EDB0C27D5_OFFSET UNITYSDK_OFFSET(0x117AAC30)
#define CLASS_1_E2997D206E4218FC_METHOD_1_63F341BA12464569_OFFSET UNITYSDK_OFFSET(0x117AB490)
#define CLASS_1_E2997D206E4218FC_METHOD_1_9726AF7F5E8C01FD_OFFSET UNITYSDK_OFFSET(0x117AB020)
#define CLASS_1_E2997D206E4218FC_METHOD_1_A1AD6AA1D84454E0_OFFSET UNITYSDK_OFFSET(0x117AA800)
#define CLASS_1_E2997D206E4218FC_METHOD_1_BB72760A03A56F69_OFFSET UNITYSDK_OFFSET(0x117AA790)
#define CLASS_1_E2997D206E4218FC_METHOD_1_CB5E1F6E12F16D60_OFFSET UNITYSDK_OFFSET(0x117AB6C0)
#define CLASS_1_E2997D206E4218FC_METHOD_1_EFE58118139F2A72_OFFSET UNITYSDK_OFFSET(0x117AAD60)
#define CLASS_1_E2997D206E4218FC_METHOD_1_FE71B4E6AA99788E_OFFSET UNITYSDK_OFFSET(0x117AA980)
#define CLASS_1_E2997D206E4218FC_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x117AB920)
#define CLASS_1_E2997D206E4218FC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x117AB940)
#define CLASS_1_E2997D206E4218FC_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x117AB980)
#define CLASS_1_E2997D206E4218FC_SET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x117AB960)
#define CLASS_1_E2997D206E4218FC__CTOR_OFFSET UNITYSDK_OFFSET(0x117AB990)

inline static constexpr unsigned int Class_1_E2997D206E4218FC_TypeDefinitionIndex = 62259;

class Class_1_E2997D206E4218FC : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_1_7; // 0x10
	::Class_2_90C3FAB661E5C263* _CustomData_k__BackingField; // 0x18
	::RPG::GameCore::LevelGraphConfig* _Config_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* Field_1_4; // 0x28
	::Class_0_16E4307DCC419505_154* Field_1_5; // 0x30
	::System::String* _ConfigPath_k__BackingField; // 0x38
	::RPG::GameCore::TaskContext* Field_1_6; // 0x40
	::RPG::GameCore::LevelGraph* _LevelGraph_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2820E4F92E5E2CF7(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_154* a2, ::System::String* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_154*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_2820E4F92E5E2CF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_BB72760A03A56F69(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_BB72760A03A56F69_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1AD6AA1D84454E0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_A1AD6AA1D84454E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE71B4E6AA99788E(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_FE71B4E6AA99788E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_27B90A5A2C715B7B(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_27B90A5A2C715B7B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_486F591EDB0C27D5(::System::String* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_486F591EDB0C27D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EFE58118139F2A72(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_EFE58118139F2A72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_63F341BA12464569(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_63F341BA12464569_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_9726AF7F5E8C01FD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_9726AF7F5E8C01FD_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CB5E1F6E12F16D60(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_METHOD_1_CB5E1F6E12F16D60_OFFSET))(this, a1, a2, a3);
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

	::System::Void set_ConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CONFIGPATH_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelGraphConfig* get_Config()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LevelGraphConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelGraph* get_LevelGraph()
	{
		return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_LEVELGRAPH_OFFSET))(this);
	}

	::System::Void set_LevelGraph(::RPG::GameCore::LevelGraph* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_LEVELGRAPH_OFFSET))(this, value);
	}

	::Class_2_90C3FAB661E5C263* get_CustomData()
	{
		return ((::Class_2_90C3FAB661E5C263*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_GET_CUSTOMDATA_OFFSET))(this);
	}

	::System::Void set_CustomData(::Class_2_90C3FAB661E5C263* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_90C3FAB661E5C263*))((::PBYTE)hIl2Cpp + CLASS_1_E2997D206E4218FC_SET_CUSTOMDATA_OFFSET))(this, value);
	}
};
