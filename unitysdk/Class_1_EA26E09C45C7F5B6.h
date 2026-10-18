#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class String; }

#define CLASS_1_EA26E09C45C7F5B6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA54F90)
#define CLASS_1_EA26E09C45C7F5B6_METHOD_1_281B950638FB72F0_OFFSET UNITYSDK_OFFSET(0x1CA552E0)
#define CLASS_1_EA26E09C45C7F5B6_METHOD_1_988D9685187B478F_OFFSET UNITYSDK_OFFSET(0x1CA55230)
#define CLASS_1_EA26E09C45C7F5B6_METHOD_1_E45B34A527E043B0_OFFSET UNITYSDK_OFFSET(0x1CA550B0)
#define CLASS_1_EA26E09C45C7F5B6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA54ED0)
#define CLASS_1_EA26E09C45C7F5B6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA54F50)
#define CLASS_1_EA26E09C45C7F5B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA553D0)

inline static constexpr unsigned int Class_1_EA26E09C45C7F5B6_TypeDefinitionIndex = 43309;

class Class_1_EA26E09C45C7F5B6 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* BPGGBFKMEGC; // 0x10
	::RPG::PoolHashSet_1<::System::String*>* KBJJMGMOFDL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E45B34A527E043B0(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_METHOD_1_E45B34A527E043B0_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_988D9685187B478F(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_METHOD_1_988D9685187B478F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_281B950638FB72F0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA26E09C45C7F5B6_METHOD_1_281B950638FB72F0_OFFSET))(this, a1);
	}
};
