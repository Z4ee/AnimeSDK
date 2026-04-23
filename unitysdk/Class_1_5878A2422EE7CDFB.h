#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_5878A2422EE7CDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55E7D0)
#define CLASS_1_5878A2422EE7CDFB_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xA55E5F0)
#define CLASS_1_5878A2422EE7CDFB_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA55E460)
#define CLASS_1_5878A2422EE7CDFB__CTOR_OFFSET UNITYSDK_OFFSET(0xA55E280)

inline static constexpr unsigned int Class_1_5878A2422EE7CDFB_TypeDefinitionIndex = 55927;

class Class_1_5878A2422EE7CDFB : public ::System::Object
{
public:
	::RPG::GameCore::LevelNavmapConfig* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5878A2422EE7CDFB_DISPOSE_OFFSET))(this);
	}
};
