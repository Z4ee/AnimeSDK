#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F860E7886216F6B7;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_AAF20D110ED85545_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE110)

inline static constexpr unsigned int Class_1_AAF20D110ED85545_1_TypeDefinitionIndex = 42391;

class Class_1_AAF20D110ED85545_1 : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_3_F860E7886216F6B7*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_3_F860E7886216F6B7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAF20D110ED85545_1_TypeDefinitionIndex)->GetStaticField(0x1250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAF20D110ED85545_1__CCTOR_OFFSET))();
	}
};
