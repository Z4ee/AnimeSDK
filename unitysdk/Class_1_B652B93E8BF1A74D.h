#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_2_636B2F59931721BC;
class Class_2_B5C26CAF86EF077B;

#define CLASS_1_B652B93E8BF1A74D_METHOD_1_327D31C7D87ADABA_OFFSET UNITYSDK_OFFSET(0x13851040)
#define CLASS_1_B652B93E8BF1A74D_METHOD_1_9FFE56EEA525E6B5_OFFSET UNITYSDK_OFFSET(0x13850FA0)
#define CLASS_1_B652B93E8BF1A74D_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x13850EF0)
#define CLASS_1_B652B93E8BF1A74D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13851230)

inline static constexpr unsigned int Class_1_B652B93E8BF1A74D_TypeDefinitionIndex = 46384;

class Class_1_B652B93E8BF1A74D : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B652B93E8BF1A74D_TypeDefinitionIndex)->GetStaticField(0x607A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B652B93E8BF1A74D__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B652B93E8BF1A74D_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_9FFE56EEA525E6B5()
	{
		return ((::Class_0_16E4307DCC419505_331*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B652B93E8BF1A74D_METHOD_1_9FFE56EEA525E6B5_OFFSET))();
	}

	static ::System::Void Method_1_327D31C7D87ADABA(::Class_2_636B2F59931721BC* a1)
	{
		return ((::System::Void(*)(::Class_2_636B2F59931721BC*))((::PBYTE)hIl2Cpp + CLASS_1_B652B93E8BF1A74D_METHOD_1_327D31C7D87ADABA_OFFSET))(a1);
	}
};
