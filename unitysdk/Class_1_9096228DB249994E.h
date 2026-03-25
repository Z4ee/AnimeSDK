#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9096228DB249994E_METHOD_1_EDD85CC36365D792_OFFSET UNITYSDK_OFFSET(0x11444420)
#define CLASS_1_9096228DB249994E__CTOR_OFFSET UNITYSDK_OFFSET(0x114447C0)

inline static constexpr unsigned int Class_1_9096228DB249994E_TypeDefinitionIndex = 55407;

class Class_1_9096228DB249994E : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9096228DB249994E_TypeDefinitionIndex)->GetStaticField(0x34B50);
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
