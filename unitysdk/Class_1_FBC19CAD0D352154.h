#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_FBC19CAD0D352154_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8777B0)
#define CLASS_1_FBC19CAD0D352154_METHOD_1_D438043CA01F60F6_OFFSET UNITYSDK_OFFSET(0x1C877600)
#define CLASS_1_FBC19CAD0D352154__CTOR_OFFSET UNITYSDK_OFFSET(0x1C877810)

inline static constexpr unsigned int Class_1_FBC19CAD0D352154_TypeDefinitionIndex = 43294;

class Class_1_FBC19CAD0D352154 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* BGDHPALMHEL; // 0x10
	::System::UInt32 ALHKDENIFKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBC19CAD0D352154__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D438043CA01F60F6(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBC19CAD0D352154_METHOD_1_D438043CA01F60F6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBC19CAD0D352154_CLEAR_OFFSET))(this);
	}
};
