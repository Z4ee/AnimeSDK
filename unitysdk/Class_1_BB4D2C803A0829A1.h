#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_1321;
class Class_0_16E4307DCC419505_635;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB4D2C803A0829A1_METHOD_1_6DCA9A3382B0B6B8_OFFSET UNITYSDK_OFFSET(0x1526C7F0)
#define CLASS_1_BB4D2C803A0829A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1526CA70)

inline static constexpr unsigned int Class_1_BB4D2C803A0829A1_TypeDefinitionIndex = 76734;

class Class_1_BB4D2C803A0829A1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1321*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1321*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4D2C803A0829A1_TypeDefinitionIndex)->GetStaticField(0x537D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4D2C803A0829A1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_635* Method_1_6DCA9A3382B0B6B8(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_635*(*)(::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2C803A0829A1_METHOD_1_6DCA9A3382B0B6B8_OFFSET))(a1);
	}
};
