#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC79B10)
#define CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC79B70)
#define CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC79BD0)
#define CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC79BC0)

inline static constexpr unsigned int Class_1_9747C838F50B576B_Class_1_B57E794E5D2373CB_TypeDefinitionIndex = 44113;

class Class_1_9747C838F50B576B_Class_1_B57E794E5D2373CB : public ::System::Object
{
public:
	static ::Class_1_9747C838F50B576B_Class_1_B57E794E5D2373CB** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_9747C838F50B576B_Class_1_B57E794E5D2373CB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9747C838F50B576B_Class_1_B57E794E5D2373CB_TypeDefinitionIndex)->GetStaticField(0x4CA40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::UnityEngine::Object* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_CLASS_1_B57E794E5D2373CB_GETHASHCODE_OFFSET))(this, a1);
	}
};
