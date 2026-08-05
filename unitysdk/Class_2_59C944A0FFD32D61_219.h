#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/PrecompiledTypeDeserializer.h"

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_59C944A0FFD32D61_219_BINARYLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1D14BC00)
#define CLASS_2_59C944A0FFD32D61_219_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D14B240)
#define CLASS_2_59C944A0FFD32D61_219_ISTYPESTRICTLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1D14B300)
#define CLASS_2_59C944A0FFD32D61_219_JSONDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D14B350)
#define CLASS_2_59C944A0FFD32D61_219__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14C2B0)

inline static constexpr unsigned int Class_2_59C944A0FFD32D61_219_TypeDefinitionIndex = 94181;

class Class_2_59C944A0FFD32D61_219 : public ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C944A0FFD32D61_219__CTOR_OFFSET))(this);
	}

	::System::Object* CreateInstance()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C944A0FFD32D61_219_CREATEINSTANCE_OFFSET))(this);
	}

	::System::Boolean IsTypeStrictlyEqual(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59C944A0FFD32D61_219_ISTYPESTRICTLYEQUAL_OFFSET))(this, a1);
	}

	::System::Object* JsonDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* a1, ::System::Object* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a3, ::BehaviorDesigner::Runtime::JsonDeserializeContext* a4)
	{
		return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + CLASS_2_59C944A0FFD32D61_219_JSONDESERIALIZEOBJECT_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* BinaryLoadFields(::System::Object* a1, ::System::Int32 a2, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + CLASS_2_59C944A0FFD32D61_219_BINARYLOADFIELDS_OFFSET))(this, a1, a2, a3);
	}
};
