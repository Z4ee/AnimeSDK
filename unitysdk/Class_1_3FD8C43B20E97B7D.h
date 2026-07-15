#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_3FD8C43B20E97B7D_METHOD_1_47A586EC7DE271D5_OFFSET UNITYSDK_OFFSET(0x16097410)
#define CLASS_1_3FD8C43B20E97B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x16097870)

inline static constexpr unsigned int Class_1_3FD8C43B20E97B7D_TypeDefinitionIndex = 64897;

class Class_1_3FD8C43B20E97B7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FD8C43B20E97B7D_TypeDefinitionIndex)->GetStaticField(0x2A2D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FD8C43B20E97B7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47A586EC7DE271D5(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_3FD8C43B20E97B7D_METHOD_1_47A586EC7DE271D5_OFFSET))(this, a1);
	}
};
