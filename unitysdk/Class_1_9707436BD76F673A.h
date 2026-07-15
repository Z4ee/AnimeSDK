#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9707436BD76F673A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1730C8E0)
#define CLASS_1_9707436BD76F673A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1730C500)
#define CLASS_1_9707436BD76F673A_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1730C450)
#define CLASS_1_9707436BD76F673A_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1730C540)
#define CLASS_1_9707436BD76F673A__CTOR_OFFSET UNITYSDK_OFFSET(0x1730C1B0)

inline static constexpr unsigned int Class_1_9707436BD76F673A_TypeDefinitionIndex = 72877;

class Class_1_9707436BD76F673A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x20
	::Class_1_2CDF619C23140440* Field_1_3; // 0x28
	::Class_3_001D9EA49F6215B6* Field_1_4; // 0x30
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_9707436BD76F673A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9707436BD76F673A_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9707436BD76F673A_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9707436BD76F673A_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9707436BD76F673A_EXECUTE_OFFSET))(this);
	}
};
