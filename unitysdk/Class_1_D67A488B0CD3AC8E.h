#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xBF1C150)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xBF1C3E0)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBF1C1B0)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBF1C3A0)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET UNITYSDK_OFFSET(0xBF1BB60)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_9D1D78F50D8E3CB3_OFFSET UNITYSDK_OFFSET(0xBF1BB30)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_A94298E832E62344_OFFSET UNITYSDK_OFFSET(0xBF1BB90)
#define CLASS_1_D67A488B0CD3AC8E_METHOD_1_E5660A7203F26516_OFFSET UNITYSDK_OFFSET(0xBF1C2E0)
#define CLASS_1_D67A488B0CD3AC8E__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF1C440)

inline static constexpr unsigned int Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex = 52461;

class Class_1_D67A488B0CD3AC8E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex)->GetStaticField(0x24170);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D67A488B0CD3AC8E_TypeDefinitionIndex)->GetStaticField(0x24178);
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

	static ::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_06330CD58CB602B6_OFFSET))();
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

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D67A488B0CD3AC8E_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}
};
