#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBXDECALUVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x191B98E0)

inline static constexpr unsigned int FBXDecalUVConfig_TypeDefinitionIndex = 9496;

class FBXDecalUVConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::System::String*>* meshNames; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* uvIndexes; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBXDECALUVCONFIG__CTOR_OFFSET))(this);
	}
};
