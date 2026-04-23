#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E;
class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x97A5140)
#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_6F7510FDC7A6B9ED_OFFSET UNITYSDK_OFFSET(0x97A4EB0)
#define CLASS_1_B18A907A8E4C5C9C_METHOD_1_78483BA6D836880C_OFFSET UNITYSDK_OFFSET(0x97A5020)
#define CLASS_1_B18A907A8E4C5C9C__CTOR_OFFSET UNITYSDK_OFFSET(0x97A53A0)

inline static constexpr unsigned int Class_1_B18A907A8E4C5C9C_TypeDefinitionIndex = 65603;

class Class_1_B18A907A8E4C5C9C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2392F323E0E8E66E*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2392F323E0E8E66E*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F7510FDC7A6B9ED(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_6F7510FDC7A6B9ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_78483BA6D836880C(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_78483BA6D836880C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A907A8E4C5C9C_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}
};
