#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9096228DB249994E_METHOD_1_EDD85CC36365D792_OFFSET UNITYSDK_OFFSET(0x12917720)
#define CLASS_1_9096228DB249994E__CTOR_OFFSET UNITYSDK_OFFSET(0x12917AC0)

inline static constexpr unsigned int Class_1_9096228DB249994E_TypeDefinitionIndex = 62598;

class Class_1_9096228DB249994E : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9096228DB249994E_TypeDefinitionIndex)->GetStaticField(0x27170);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9096228DB249994E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDD85CC36365D792(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_9096228DB249994E_METHOD_1_EDD85CC36365D792_OFFSET))(this, a1);
	}
};
