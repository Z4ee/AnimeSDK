#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_875B08BB13E31BEE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_442;
class Class_1_98133438BFCB56ED;

#define CLASS_1_C858310C7395CF29_METHOD_1_B8AE4E7B492535DF_OFFSET UNITYSDK_OFFSET(0x1165F840)
#define CLASS_1_C858310C7395CF29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1165FD60)

inline static constexpr unsigned int Class_1_C858310C7395CF29_TypeDefinitionIndex = 51208;

class Class_1_C858310C7395CF29 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_442*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_442*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C858310C7395CF29_TypeDefinitionIndex)->GetStaticField(0x448E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C858310C7395CF29__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B8AE4E7B492535DF(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_875B08BB13E31BEE& a3)
	{
		return ((::System::Boolean(*)(::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_875B08BB13E31BEE&))((::PBYTE)hIl2Cpp + CLASS_1_C858310C7395CF29_METHOD_1_B8AE4E7B492535DF_OFFSET))(a1, a2, a3);
	}
};
