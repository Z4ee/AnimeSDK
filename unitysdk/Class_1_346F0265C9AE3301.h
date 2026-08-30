#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AD6ED58055B81A2;
class Class_1_811C21B122C8082C;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_346F0265C9AE3301_GET_LEVELENDDATA_OFFSET UNITYSDK_OFFSET(0x1629A2F0)
#define CLASS_1_346F0265C9AE3301_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x1629A2E0)
#define CLASS_1_346F0265C9AE3301_GET_ROUTECONTEXTS_OFFSET UNITYSDK_OFFSET(0x1629A300)
#define CLASS_1_346F0265C9AE3301__CTOR_OFFSET UNITYSDK_OFFSET(0x1629A310)

inline static constexpr unsigned int Class_1_346F0265C9AE3301_TypeDefinitionIndex = 63938;

class Class_1_346F0265C9AE3301 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* _RouteContexts_k__BackingField; // 0x10
	::Class_1_0AD6ED58055B81A2* _LevelEndData_k__BackingField; // 0x18
	::System::UInt32 _LevelIndex_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_0AD6ED58055B81A2* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0AD6ED58055B81A2*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_346F0265C9AE3301__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_LevelIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346F0265C9AE3301_GET_LEVELINDEX_OFFSET))(this);
	}

	::Class_1_0AD6ED58055B81A2* get_LevelEndData()
	{
		return ((::Class_1_0AD6ED58055B81A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346F0265C9AE3301_GET_LEVELENDDATA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* get_RouteContexts()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346F0265C9AE3301_GET_ROUTECONTEXTS_OFFSET))(this);
	}
};
