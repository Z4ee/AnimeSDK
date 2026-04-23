#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA48F56DCEF4E4D6;
class Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_1_84F4F471A7FDCB9A_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x123C38C0)
#define CLASS_1_84F4F471A7FDCB9A_METHOD_1_6F7510FDC7A6B9ED_OFFSET UNITYSDK_OFFSET(0x123C35F0)
#define CLASS_1_84F4F471A7FDCB9A_METHOD_1_98BEB9260DFF39C3_OFFSET UNITYSDK_OFFSET(0x123C3760)
#define CLASS_1_84F4F471A7FDCB9A__CTOR_OFFSET UNITYSDK_OFFSET(0x123C3B50)

inline static constexpr unsigned int Class_1_84F4F471A7FDCB9A_TypeDefinitionIndex = 60723;

class Class_1_84F4F471A7FDCB9A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CA48F56DCEF4E4D6*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_CA48F56DCEF4E4D6*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84F4F471A7FDCB9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F7510FDC7A6B9ED(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_84F4F471A7FDCB9A_METHOD_1_6F7510FDC7A6B9ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_98BEB9260DFF39C3(::System::String* a1, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831*))((::PBYTE)hIl2Cpp + CLASS_1_84F4F471A7FDCB9A_METHOD_1_98BEB9260DFF39C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84F4F471A7FDCB9A_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}
};
