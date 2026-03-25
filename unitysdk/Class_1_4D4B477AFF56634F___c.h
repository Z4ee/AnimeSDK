#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_4D4B477AFF56634F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA461050)
#define CLASS_1_4D4B477AFF56634F___C__CREATERECOMMENDITEMS_B__2_0_OFFSET UNITYSDK_OFFSET(0xA4610A0)
#define CLASS_1_4D4B477AFF56634F___C__CREATERECOMMENDITEMS_B__2_1_OFFSET UNITYSDK_OFFSET(0xA461140)
#define CLASS_1_4D4B477AFF56634F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA461090)

inline static constexpr unsigned int Class_1_4D4B477AFF56634F___c_TypeDefinitionIndex = 53240;

class Class_1_4D4B477AFF56634F___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D4B477AFF56634F___c_TypeDefinitionIndex)->GetStaticField(0x48510);
	}
	static ::Class_1_4D4B477AFF56634F___c** StaticGet___9()
	{
		return (::Class_1_4D4B477AFF56634F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D4B477AFF56634F___c_TypeDefinitionIndex)->GetStaticField(0x48518);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D4B477AFF56634F___c_TypeDefinitionIndex)->GetStaticField(0x48520);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateRecommendItems_b__2_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F___C__CREATERECOMMENDITEMS_B__2_0_OFFSET))(this);
	}

	::System::String* _CreateRecommendItems_b__2_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F___C__CREATERECOMMENDITEMS_B__2_1_OFFSET))(this);
	}
};
