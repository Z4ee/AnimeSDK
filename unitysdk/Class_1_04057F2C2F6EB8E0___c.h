#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_04057F2C2F6EB8E0___C_METHOD_1_9B9236F5BF7E5223_OFFSET UNITYSDK_OFFSET(0x1E432F20)
#define CLASS_1_04057F2C2F6EB8E0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E432ED0)
#define CLASS_1_04057F2C2F6EB8E0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E432F10)

inline static constexpr unsigned int Class_1_04057F2C2F6EB8E0___c_TypeDefinitionIndex = 29078;

class Class_1_04057F2C2F6EB8E0___c : public ::System::Object
{
public:
	static ::Class_1_04057F2C2F6EB8E0___c** StaticGet___9()
	{
		return (::Class_1_04057F2C2F6EB8E0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04057F2C2F6EB8E0___c_TypeDefinitionIndex)->GetStaticField(0x234B0);
	}
	static ::System::Func_2<::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04057F2C2F6EB8E0___c_TypeDefinitionIndex)->GetStaticField(0x234B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0___C__CTOR_OFFSET))(this);
	}

	::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Method_1_9B9236F5BF7E5223(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0___C_METHOD_1_9B9236F5BF7E5223_OFFSET))(this, a1);
	}
};
