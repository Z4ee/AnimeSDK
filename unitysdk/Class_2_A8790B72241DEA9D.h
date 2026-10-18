#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_A8790B72241DEA9D_Class_1_37CE18D211098D95;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A8790B72241DEA9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD21F50)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xBD228B0)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_87B7F4DF697FF750_OFFSET UNITYSDK_OFFSET(0xBD223D0)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_8C0D3F14EE7D5F69_OFFSET UNITYSDK_OFFSET(0xBD22540)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xBD20C90)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_AB672F6D90BC9094_OFFSET UNITYSDK_OFFSET(0xBD22050)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_B624300613A562A4_OFFSET UNITYSDK_OFFSET(0xBD22460)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_CB8990539979E8D7_OFFSET UNITYSDK_OFFSET(0xBD20B60)
#define CLASS_2_A8790B72241DEA9D_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xBD220D0)
#define CLASS_2_A8790B72241DEA9D__CTOR_OFFSET UNITYSDK_OFFSET(0xBD22950)

inline static constexpr unsigned int Class_2_A8790B72241DEA9D_TypeDefinitionIndex = 60596;

class Class_2_A8790B72241DEA9D : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_A8790B72241DEA9D_Class_1_37CE18D211098D95*>* DMLKMOJLCCI; // 0x18
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_A8790B72241DEA9D_Class_1_37CE18D211098D95*>* INKJCAABJDF; // 0x28
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB8990539979E8D7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_CB8990539979E8D7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AB672F6D90BC9094(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_AB672F6D90BC9094_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_87B7F4DF697FF750(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_87B7F4DF697FF750_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B624300613A562A4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_B624300613A562A4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_8C0D3F14EE7D5F69(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_8C0D3F14EE7D5F69_OFFSET))(this, a1);
	}

	::System::Void Method_2_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8790B72241DEA9D_METHOD_2_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}
};
