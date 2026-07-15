#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E;
class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x174EB300)
#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_6DA51058A1E24D64_OFFSET UNITYSDK_OFFSET(0x174EB0D0)
#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_78483BA6D836880C_OFFSET UNITYSDK_OFFSET(0x174EB1E0)
#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_C78E1AC2E61C9E98_OFFSET UNITYSDK_OFFSET(0x174EAF50)
#define CLASS_1_B18A907A8E4C5C9C__CTOR_OFFSET UNITYSDK_OFFSET(0x174EB5A0)

inline static constexpr unsigned int Class_1_B18A907A8E4C5C9C_TypeDefinitionIndex = 67973;

class Class_1_B18A907A8E4C5C9C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2392F323E0E8E66E*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2392F323E0E8E66E*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_C78E1AC2E61C9E98(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_C78E1AC2E61C9E98_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DA51058A1E24D64(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_6DA51058A1E24D64_OFFSET))(this, a1);
	}

	::System::Void Method_1_78483BA6D836880C(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_78483BA6D836880C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_674F73509924BD16_OFFSET))(this);
	}
};
