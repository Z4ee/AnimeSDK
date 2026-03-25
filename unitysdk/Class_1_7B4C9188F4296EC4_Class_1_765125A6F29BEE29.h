#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_CLEAR_OFFSET UNITYSDK_OFFSET(0x11543B20)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11543BB0)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_GET_PLACEDAVATARBASEIDS_OFFSET UNITYSDK_OFFSET(0x11543C20)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29__CTOR_OFFSET UNITYSDK_OFFSET(0x11543C30)

inline static constexpr unsigned int Class_1_7B4C9188F4296EC4_Class_1_765125A6F29BEE29_TypeDefinitionIndex = 55058;

class Class_1_7B4C9188F4296EC4_Class_1_765125A6F29BEE29 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _PlacedAvatarBaseIDs_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PlacedAvatarBaseIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_765125A6F29BEE29_GET_PLACEDAVATARBASEIDS_OFFSET))(this);
	}
};
