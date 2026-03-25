#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9118D233A02D9925_METHOD_1_247C15FF5EDC5F21_OFFSET UNITYSDK_OFFSET(0x8808940)
#define CLASS_1_9118D233A02D9925__CTOR_OFFSET UNITYSDK_OFFSET(0x8808B10)

inline static constexpr unsigned int Class_1_9118D233A02D9925_TypeDefinitionIndex = 38071;

class Class_1_9118D233A02D9925 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9118D233A02D9925__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_247C15FF5EDC5F21(::Class_1_9118D233A02D9925* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9118D233A02D9925*))((::PBYTE)hIl2Cpp + CLASS_1_9118D233A02D9925_METHOD_1_247C15FF5EDC5F21_OFFSET))(this, a1);
	}
};
