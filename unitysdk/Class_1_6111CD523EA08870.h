#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
class Class_1_182F3730ED813C53;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_6111CD523EA08870_METHOD_1_E1D1E5B744471174_OFFSET UNITYSDK_OFFSET(0x1E5B2330)
#define CLASS_1_6111CD523EA08870__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7470)

inline static constexpr unsigned int Class_1_6111CD523EA08870_TypeDefinitionIndex = 42515;

class Class_1_6111CD523EA08870 : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Type*>** StaticGet_CLLNNHHPCHI()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6111CD523EA08870_TypeDefinitionIndex)->GetStaticField(0x54AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6111CD523EA08870__CCTOR_OFFSET))();
	}

	static ::Class_1_182F3730ED813C53* Method_1_E1D1E5B744471174(::Class_0_16E4307DCC419505_348* a1)
	{
		return ((::Class_1_182F3730ED813C53*(*)(::Class_0_16E4307DCC419505_348*))((::PBYTE)hIl2Cpp + CLASS_1_6111CD523EA08870_METHOD_1_E1D1E5B744471174_OFFSET))(a1);
	}
};
