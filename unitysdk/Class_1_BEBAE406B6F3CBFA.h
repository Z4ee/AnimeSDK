#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_927A87B991F81532.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BEBAE406B6F3CBFA_METHOD_1_CC52C63333FF94E3_OFFSET UNITYSDK_OFFSET(0x178CF4F0)
#define CLASS_1_BEBAE406B6F3CBFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x178CF860)
#define CLASS_1_BEBAE406B6F3CBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x178CF850)

inline static constexpr unsigned int Class_1_BEBAE406B6F3CBFA_TypeDefinitionIndex = 67907;

class Class_1_BEBAE406B6F3CBFA : public ::System::Object
{
public:
	static ::Class_1_BEBAE406B6F3CBFA** StaticGet_Field_1_1()
	{
		return (::Class_1_BEBAE406B6F3CBFA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEBAE406B6F3CBFA_TypeDefinitionIndex)->GetStaticField(0x3C9E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Method_1_CC52C63333FF94E3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA_METHOD_1_CC52C63333FF94E3_OFFSET))(this);
	}
};
