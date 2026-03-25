#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA9BCCD0)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xA9BCA80)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA9BCC90)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xA9BCA20)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET UNITYSDK_OFFSET(0xA9BC430)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_OFFSET UNITYSDK_OFFSET(0xA9BC400)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_A94298E832E62344_OFFSET UNITYSDK_OFFSET(0xA9BC460)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_E5660A7203F26516_OFFSET UNITYSDK_OFFSET(0xA9BCBD0)
#define CLASS_1_D67A488B0CD3AC8E__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9BCD30)

inline static constexpr unsigned int Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex = 45038;

class Class_1_D67A488B0CD3AC8E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex)->GetStaticField(0x45CE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex)->GetStaticField(0x45CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET))();
	}

	static ::System::Void Method_1_A94298E832E62344(::RPG::GameCore::EReplayTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::EReplayTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_A94298E832E62344_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_62165C025F5C0B19()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_62165C025F5C0B19_OFFSET))();
	}

	static ::System::Void Method_1_E5660A7203F26516(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_E5660A7203F26516_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_078D85152011B919_OFFSET))();
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_0868EF727040C390_OFFSET))();
	}
};
