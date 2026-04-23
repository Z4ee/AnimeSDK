#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_1152;
class Class_0_16E4307DCC419505_708;
namespace RPG::GameCore { class TextDynamicParamBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7CA5DCD85B5448B8_METHOD_1_67B8C2BF925AB2D6_OFFSET UNITYSDK_OFFSET(0x1254D300)
#define CLASS_1_7CA5DCD85B5448B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1254D560)

inline static constexpr unsigned int Class_1_7CA5DCD85B5448B8_TypeDefinitionIndex = 72505;

class Class_1_7CA5DCD85B5448B8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1152*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1152*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CA5DCD85B5448B8_TypeDefinitionIndex)->GetStaticField(0x10660);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CA5DCD85B5448B8__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_708* Method_1_67B8C2BF925AB2D6(::RPG::GameCore::TextDynamicParamBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_708*(*)(::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_7CA5DCD85B5448B8_METHOD_1_67B8C2BF925AB2D6_OFFSET))(a1);
	}
};
