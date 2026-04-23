#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3039E593DEE50CCF;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_4CF9AFA361B92221_CLEAR_OFFSET UNITYSDK_OFFSET(0x17FCD410)
#define CLASS_1_4CF9AFA361B92221__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCD4B0)

inline static constexpr unsigned int Class_1_4CF9AFA361B92221_TypeDefinitionIndex = 39225;

class Class_1_4CF9AFA361B92221 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::Class_1_3039E593DEE50CCF*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF9AFA361B92221__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF9AFA361B92221_CLEAR_OFFSET))(this);
	}
};
