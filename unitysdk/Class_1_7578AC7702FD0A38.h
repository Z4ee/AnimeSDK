#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_9;
class Class_2_6D901FCC8D1C685B;
namespace RPG::Client { class ScheduleTask; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7578AC7702FD0A38_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x9509330)
#define CLASS_1_7578AC7702FD0A38_METHOD_1_2F61F9679BAC0084_OFFSET UNITYSDK_OFFSET(0x9509900)
#define CLASS_1_7578AC7702FD0A38_METHOD_1_527CD85BA74A5B82_OFFSET UNITYSDK_OFFSET(0x9508F90)
#define CLASS_1_7578AC7702FD0A38_METHOD_1_8389A972740050D0_OFFSET UNITYSDK_OFFSET(0x95095D0)
#define CLASS_1_7578AC7702FD0A38_METHOD_1_96C4AEF655BFC1C8_OFFSET UNITYSDK_OFFSET(0x9508F50)
#define CLASS_1_7578AC7702FD0A38__CTOR_OFFSET UNITYSDK_OFFSET(0x9509C20)

inline static constexpr unsigned int Class_1_7578AC7702FD0A38_TypeDefinitionIndex = 56629;

class Class_1_7578AC7702FD0A38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleTask*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_2_6D901FCC8D1C685B*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_6D901FCC8D1C685B*>* Method_1_96C4AEF655BFC1C8()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_6D901FCC8D1C685B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38_METHOD_1_96C4AEF655BFC1C8_OFFSET))(this);
	}

	::System::Void Method_1_527CD85BA74A5B82(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38_METHOD_1_527CD85BA74A5B82_OFFSET))(this, a1);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_1_8389A972740050D0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38_METHOD_1_8389A972740050D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F61F9679BAC0084(::Class_1_7FF19F6206AF6DD7_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_9*))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38_METHOD_1_2F61F9679BAC0084_OFFSET))(this, a1);
	}
};
