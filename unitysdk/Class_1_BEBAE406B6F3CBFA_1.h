#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_927A87B991F81532.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BEBAE406B6F3CBFA_1_METHOD_1_AB4EB6B25F3E266C_OFFSET UNITYSDK_OFFSET(0x1D644910)
#define CLASS_1_BEBAE406B6F3CBFA_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D644AC0)
#define CLASS_1_BEBAE406B6F3CBFA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D644AB0)

inline static constexpr unsigned int Class_1_BEBAE406B6F3CBFA_1_TypeDefinitionIndex = 91876;

class Class_1_BEBAE406B6F3CBFA_1 : public ::System::Object
{
public:
	static ::Class_1_BEBAE406B6F3CBFA_1** StaticGet_Field_1_1()
	{
		return (::Class_1_BEBAE406B6F3CBFA_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEBAE406B6F3CBFA_1_TypeDefinitionIndex)->GetStaticField(0x51DB0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA_1__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Method_1_AB4EB6B25F3E266C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBAE406B6F3CBFA_1_METHOD_1_AB4EB6B25F3E266C_OFFSET))(this);
	}
};
