#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76F7C4FB2DE7DDC8_METHOD_1_E153B9DF3DE943D1_OFFSET UNITYSDK_OFFSET(0x1601E5F0)
#define CLASS_1_76F7C4FB2DE7DDC8_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1601E580)
#define CLASS_1_76F7C4FB2DE7DDC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1601E510)

inline static constexpr unsigned int Class_1_76F7C4FB2DE7DDC8_TypeDefinitionIndex = 64063;

class Class_1_76F7C4FB2DE7DDC8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_76F7C4FB2DE7DDC8__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7C4FB2DE7DDC8_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_E153B9DF3DE943D1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7C4FB2DE7DDC8_METHOD_1_E153B9DF3DE943D1_OFFSET))(this);
	}
};
