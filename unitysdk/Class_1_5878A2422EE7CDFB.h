#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_5878A2422EE7CDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A486600)
#define CLASS_1_5878A2422EE7CDFB_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1A486420)
#define CLASS_1_5878A2422EE7CDFB_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1A486280)
#define CLASS_1_5878A2422EE7CDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4860C0)

inline static constexpr unsigned int Class_1_5878A2422EE7CDFB_TypeDefinitionIndex = 60749;

class Class_1_5878A2422EE7CDFB : public ::System::Object
{
public:
	::RPG::GameCore::LevelNavmapConfig* MJBCOBFDODD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LFNAGEKFDAP; // 0x18
	::System::Int32 KFLLNFLBIFC; // 0x20

	::System::Void _ctor(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_DISPOSE_OFFSET))(this);
	}
};
