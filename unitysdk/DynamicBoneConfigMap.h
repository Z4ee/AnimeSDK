#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class DynamicBoneConfigV2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DYNAMICBONECONFIGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6FE10)

inline static constexpr unsigned int DynamicBoneConfigMap_TypeDefinitionIndex = 33065;

class DynamicBoneConfigMap : public ::Foundation::MihoyoSerializedScriptableObject
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::DynamicBoneConfigV2*>* configs; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGMAP__CTOR_OFFSET))(this);
	}
};
