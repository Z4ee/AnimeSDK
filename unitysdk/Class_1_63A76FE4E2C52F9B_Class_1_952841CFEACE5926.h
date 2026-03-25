#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_63A76FE4E2C52F9B;
class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET UNITYSDK_OFFSET(0x8729B40)
#define CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x8729CC0)
#define CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926__CTOR_OFFSET UNITYSDK_OFFSET(0x872A5B0)

inline static constexpr unsigned int Class_1_63A76FE4E2C52F9B_Class_1_952841CFEACE5926_TypeDefinitionIndex = 40141;

class Class_1_63A76FE4E2C52F9B_Class_1_952841CFEACE5926 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_63A76FE4E2C52F9B*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926__CTOR_OFFSET))(this, a1);
	}

	::Class_1_63A76FE4E2C52F9B* Method_1_4DD2714896566E81(::RPG::GameCore::EnviromentControlPriority a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::Class_1_63A76FE4E2C52F9B*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_63A76FE4E2C52F9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63A76FE4E2C52F9B*))((::PBYTE)hIl2Cpp + CLASS_1_63A76FE4E2C52F9B_CLASS_1_952841CFEACE5926_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}
};
