#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_399;
class Class_1_98133438BFCB56ED;

#define CLASS_1_F39C291791BAC684_METHOD_1_B8AE4E7B492535DF_OFFSET UNITYSDK_OFFSET(0xD369130)
#define CLASS_1_F39C291791BAC684__CCTOR_OFFSET UNITYSDK_OFFSET(0xD369560)

inline static constexpr unsigned int Class_1_F39C291791BAC684_TypeDefinitionIndex = 49459;

class Class_1_F39C291791BAC684 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_399*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_399*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F39C291791BAC684_TypeDefinitionIndex)->GetStaticField(0x65C60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F39C291791BAC684__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B8AE4E7B492535DF(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_F39C291791BAC684_METHOD_1_B8AE4E7B492535DF_OFFSET))(a1, a2, a3);
	}
};
