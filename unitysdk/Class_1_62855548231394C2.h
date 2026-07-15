#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_71ECD705C8627A9D;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_62855548231394C2_CLEAR_OFFSET UNITYSDK_OFFSET(0x183AD940)
#define CLASS_1_62855548231394C2_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x183AEC30)
#define CLASS_1_62855548231394C2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x183AEC50)
#define CLASS_1_62855548231394C2_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x183AEC90)
#define CLASS_1_62855548231394C2_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x183AEC70)
#define CLASS_1_62855548231394C2_METHOD_1_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x183ADA50)
#define CLASS_1_62855548231394C2_METHOD_1_1432F166180B54CA_OFFSET UNITYSDK_OFFSET(0x183AE9E0)
#define CLASS_1_62855548231394C2_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x183AEB50)
#define CLASS_1_62855548231394C2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x183AEAD0)
#define CLASS_1_62855548231394C2_METHOD_1_1D0A4C83E6604AAD_OFFSET UNITYSDK_OFFSET(0x183AE390)
#define CLASS_1_62855548231394C2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x183AEBD0)
#define CLASS_1_62855548231394C2_METHOD_1_266FE4035ADE5833_OFFSET UNITYSDK_OFFSET(0x183ADAA0)
#define CLASS_1_62855548231394C2_METHOD_1_28938589EBCF7FF2_OFFSET UNITYSDK_OFFSET(0x183ADDB0)
#define CLASS_1_62855548231394C2_METHOD_1_A03206D1FB67C23B_OFFSET UNITYSDK_OFFSET(0x183ADF10)
#define CLASS_1_62855548231394C2_METHOD_1_A1AD6AA1D84454E0_OFFSET UNITYSDK_OFFSET(0x183ADB10)
#define CLASS_1_62855548231394C2_METHOD_1_AD8218231B6C0735_OFFSET UNITYSDK_OFFSET(0x183AD6F0)
#define CLASS_1_62855548231394C2_METHOD_1_CD1AE2DB330BAD04_OFFSET UNITYSDK_OFFSET(0x183AE0B0)
#define CLASS_1_62855548231394C2_METHOD_1_EF0B05E8544105FB_OFFSET UNITYSDK_OFFSET(0x183AE790)
#define CLASS_1_62855548231394C2_METHOD_1_FE71B4E6AA99788E_OFFSET UNITYSDK_OFFSET(0x183ADC90)
#define CLASS_1_62855548231394C2_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x183AEC40)
#define CLASS_1_62855548231394C2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x183AEC60)
#define CLASS_1_62855548231394C2_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x183AECA0)
#define CLASS_1_62855548231394C2_SET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x183AEC80)
#define CLASS_1_62855548231394C2__CTOR_OFFSET UNITYSDK_OFFSET(0x183AECB0)

inline static constexpr unsigned int Class_1_62855548231394C2_TypeDefinitionIndex = 72583;

class Class_1_62855548231394C2 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_1_0; // 0x10
	::Entitas::IEntity* Field_1_1; // 0x18
	::Class_2_71ECD705C8627A9D* _CustomData_k__BackingField; // 0x20
	::RPG::GameCore::LevelGraphConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::LevelGraph* _LevelGraph_k__BackingField; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::RPG::GameCore::TaskContext* Field_1_6; // 0x40
	::System::String* _ConfigPath_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD8218231B6C0735(::RPG::GameCore::GameEntity* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_AD8218231B6C0735_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_1_266FE4035ADE5833(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_266FE4035ADE5833_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1AD6AA1D84454E0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_A1AD6AA1D84454E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE71B4E6AA99788E(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_FE71B4E6AA99788E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_28938589EBCF7FF2(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_28938589EBCF7FF2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A03206D1FB67C23B(::System::String* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_A03206D1FB67C23B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD1AE2DB330BAD04(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_CD1AE2DB330BAD04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF0B05E8544105FB(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_EF0B05E8544105FB_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_1D0A4C83E6604AAD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_1D0A4C83E6604AAD_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1432F166180B54CA(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_1432F166180B54CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* get_ConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_GET_CONFIGPATH_OFFSET))(this);
	}

	::System::Void set_ConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_SET_CONFIGPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphConfig* get_Config()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LevelGraphConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraph* get_LevelGraph()
	{
		return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_GET_LEVELGRAPH_OFFSET))(this);
	}

	::System::Void set_LevelGraph(::RPG::GameCore::LevelGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_SET_LEVELGRAPH_OFFSET))(this, a1);
	}

	::Class_2_71ECD705C8627A9D* get_CustomData()
	{
		return ((::Class_2_71ECD705C8627A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_GET_CUSTOMDATA_OFFSET))(this);
	}

	::System::Void set_CustomData(::Class_2_71ECD705C8627A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_71ECD705C8627A9D*))((::PBYTE)hIl2Cpp + CLASS_1_62855548231394C2_SET_CUSTOMDATA_OFFSET))(this, a1);
	}
};
