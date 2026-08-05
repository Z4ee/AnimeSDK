#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C90DFD825B265C7A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8210132EB50C55B4_METHOD_1_E787CFC29A14BB9F_OFFSET UNITYSDK_OFFSET(0x14070370)
#define CLASS_1_8210132EB50C55B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x140702D0)

inline static constexpr unsigned int Class_1_8210132EB50C55B4_TypeDefinitionIndex = 65543;

class Class_1_8210132EB50C55B4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C90DFD825B265C7A*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C90DFD825B265C7A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8210132EB50C55B4_TypeDefinitionIndex)->GetStaticField(0x46730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8210132EB50C55B4__CCTOR_OFFSET))();
	}

	static ::Class_1_C90DFD825B265C7A* Method_1_E787CFC29A14BB9F(::System::String* a1)
	{
		return ((::Class_1_C90DFD825B265C7A*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8210132EB50C55B4_METHOD_1_E787CFC29A14BB9F_OFFSET))(a1);
	}
};
