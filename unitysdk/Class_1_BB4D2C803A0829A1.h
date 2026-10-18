#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_1644;
class Class_0_16E4307DCC419505_763;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB4D2C803A0829A1_METHOD_1_6DCA9A3382B0B6B8_OFFSET UNITYSDK_OFFSET(0xB6487A0)
#define CLASS_1_BB4D2C803A0829A1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB648A20)

inline static constexpr unsigned int Class_1_BB4D2C803A0829A1_TypeDefinitionIndex = 82154;

class Class_1_BB4D2C803A0829A1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1644*>** StaticGet_EBEKFJIIIFJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1644*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4D2C803A0829A1_TypeDefinitionIndex)->GetStaticField(0x5A1E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4D2C803A0829A1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_763* Method_1_6DCA9A3382B0B6B8(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_763*(*)(::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2C803A0829A1_METHOD_1_6DCA9A3382B0B6B8_OFFSET))(a1);
	}
};
