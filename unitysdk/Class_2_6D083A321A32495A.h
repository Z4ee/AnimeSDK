#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24_1.h"
#include "unitysdk/Struct_2_C62A9157F813660C.h"

class Class_1_3F28033F34305C46;
class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D083A321A32495A_COLLECT_OFFSET UNITYSDK_OFFSET(0x16D7A7C0)
#define CLASS_2_6D083A321A32495A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D7A770)
#define CLASS_2_6D083A321A32495A_FLUSH_OFFSET UNITYSDK_OFFSET(0x16D7AB40)
#define CLASS_2_6D083A321A32495A_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16D7AC80)
#define CLASS_2_6D083A321A32495A_METHOD_2_14D2C78DFD079E63_OFFSET UNITYSDK_OFFSET(0x16D7A560)
#define CLASS_2_6D083A321A32495A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16D7A2B0)
#define CLASS_2_6D083A321A32495A_METHOD_2_92F493A0D4B9ABBD_OFFSET UNITYSDK_OFFSET(0x16D7A310)
#define CLASS_2_6D083A321A32495A_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x16D7A720)
#define CLASS_2_6D083A321A32495A_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0x16D7A420)
#define CLASS_2_6D083A321A32495A_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16D7AC40)
#define CLASS_2_6D083A321A32495A_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16D7AC00)
#define CLASS_2_6D083A321A32495A_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16D7AC90)
#define CLASS_2_6D083A321A32495A__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7A230)

inline static constexpr unsigned int Class_2_6D083A321A32495A_TypeDefinitionIndex = 67889;

class Class_2_6D083A321A32495A : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24_1>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_C62A9157F813660C>* Field_2_0; // 0x40
	::System::Collections::Generic::HashSet_1<::Struct_2_C62A9157F813660C>* Field_2_1; // 0x48
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x50
	::Class_1_D70A30D666F20D90* Field_2_3; // 0x58
	::RPG::GameCore::ThreadTaskType Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_92F493A0D4B9ABBD(::Class_1_D70A30D666F20D90* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_METHOD_2_92F493A0D4B9ABBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_C62A9157F813660C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C62A9157F813660C))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_2_14D2C78DFD079E63(::Class_1_3F28033F34305C46* a1, ::Struct_2_C62A9157F813660C& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Struct_2_C62A9157F813660C&))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_METHOD_2_14D2C78DFD079E63_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_6D083A321A32495A_SET_CONFIG_OFFSET))(this, a1);
	}
};
