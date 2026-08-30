#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6EF502A68D7F2109;
class Class_1_6EF502A68D7F2109_Class_1_48A0079AE4188A66;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

#define CLASS_1_6EF502A68D7F2109___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17067280)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109___c__DisplayClass30_0_TypeDefinitionIndex = 69261;

class Class_1_6EF502A68D7F2109___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_1_6EF502A68D7F2109_Class_1_48A0079AE4188A66* candidatePool; // 0x10
	::Collections::Pooled::PooledDictionary_2<::System::Int64, ::UnityEngine::Vector3>* occupiedCandidates; // 0x18
	::Class_1_6EF502A68D7F2109* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}
};
