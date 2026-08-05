#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x141CB400)
#define CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x141CB490)
#define CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_INVOKE_OFFSET UNITYSDK_OFFSET(0x141CAFB0)
#define CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4__CTOR_OFFSET UNITYSDK_OFFSET(0x141CAF90)

inline static constexpr unsigned int Class_1_62B8D8061C2741C6_Class_3_67FD6232D05497A4_TypeDefinitionIndex = 54188;

class Class_1_62B8D8061C2741C6_Class_3_67FD6232D05497A4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_B679E4D914A10080_2 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B679E4D914A10080_2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_B679E4D914A10080_2 a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_B679E4D914A10080_2, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_62B8D8061C2741C6_CLASS_3_67FD6232D05497A4_ENDINVOKE_OFFSET))(this, a1);
	}
};
