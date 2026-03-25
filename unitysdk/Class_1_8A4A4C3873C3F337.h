#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8A4A4C3873C3F337_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0x117AF090)
#define CLASS_1_8A4A4C3873C3F337_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x117AEEE0)
#define CLASS_1_8A4A4C3873C3F337_METHOD_1_558C32A1B130B607_OFFSET UNITYSDK_OFFSET(0x117AEFA0)
#define CLASS_1_8A4A4C3873C3F337_METHOD_1_AFF42269B55377F5_OFFSET UNITYSDK_OFFSET(0x117AECE0)
#define CLASS_1_8A4A4C3873C3F337_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x117AEE50)
#define CLASS_1_8A4A4C3873C3F337_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0x117AF0A0)
#define CLASS_1_8A4A4C3873C3F337__CTOR_OFFSET UNITYSDK_OFFSET(0x117AF0B0)

inline static constexpr unsigned int Class_1_8A4A4C3873C3F337_TypeDefinitionIndex = 49179;

class Class_1_8A4A4C3873C3F337 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_1; // 0x10
	::System::Boolean _BlockNew_k__BackingField; // 0x18
	::System::Boolean Field_1_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AFF42269B55377F5(::RPG::GameCore::LevelPerformanceInitialize* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_METHOD_1_AFF42269B55377F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_558C32A1B130B607(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_METHOD_1_558C32A1B130B607_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockNew()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_GET_BLOCKNEW_OFFSET))(this);
	}

	::System::Void set_BlockNew(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4A4C3873C3F337_SET_BLOCKNEW_OFFSET))(this, value);
	}
};
