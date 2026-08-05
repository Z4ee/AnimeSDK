#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/PrecompiledTypeDeserializer.h"

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0A5B4B6F7B61E007_9_BINARYLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1D154FD0)
#define CLASS_2_0A5B4B6F7B61E007_9_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1546D0)
#define CLASS_2_0A5B4B6F7B61E007_9_ISTYPESTRICTLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1D154790)
#define CLASS_2_0A5B4B6F7B61E007_9_JSONDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D1547E0)
#define CLASS_2_0A5B4B6F7B61E007_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D155710)

inline static constexpr unsigned int Class_2_0A5B4B6F7B61E007_9_TypeDefinitionIndex = 94330;

class Class_2_0A5B4B6F7B61E007_9 : public ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A5B4B6F7B61E007_9__CTOR_OFFSET))(this);
	}

	::System::Object* CreateInstance()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A5B4B6F7B61E007_9_CREATEINSTANCE_OFFSET))(this);
	}

	::System::Boolean IsTypeStrictlyEqual(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A5B4B6F7B61E007_9_ISTYPESTRICTLYEQUAL_OFFSET))(this, a1);
	}

	::System::Object* JsonDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* a1, ::System::Object* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a3, ::BehaviorDesigner::Runtime::JsonDeserializeContext* a4)
	{
		return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + CLASS_2_0A5B4B6F7B61E007_9_JSONDESERIALIZEOBJECT_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* BinaryLoadFields(::System::Object* a1, ::System::Int32 a2, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + CLASS_2_0A5B4B6F7B61E007_9_BINARYLOADFIELDS_OFFSET))(this, a1, a2, a3);
	}
};
