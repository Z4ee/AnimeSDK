#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_2_B5C26CAF86EF077B;
class Class_3_301DB96170A54A53;

#define CLASS_1_140C17FD62972BD3_METHOD_1_17F704D3311F84DA_OFFSET UNITYSDK_OFFSET(0x13BEB6B0)
#define CLASS_1_140C17FD62972BD3_METHOD_1_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x13BEB730)
#define CLASS_1_140C17FD62972BD3_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x13BEB600)
#define CLASS_1_140C17FD62972BD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BEB910)

inline static constexpr unsigned int Class_1_140C17FD62972BD3_TypeDefinitionIndex = 46383;

class Class_1_140C17FD62972BD3 : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_140C17FD62972BD3_TypeDefinitionIndex)->GetStaticField(0x64330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_140C17FD62972BD3__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_140C17FD62972BD3_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_17F704D3311F84DA()
	{
		return ((::Class_0_16E4307DCC419505_331*(*)())((::PBYTE)hIl2Cpp + CLASS_1_140C17FD62972BD3_METHOD_1_17F704D3311F84DA_OFFSET))();
	}

	static ::System::Void Method_1_8660C3A27B56FE60(::Class_3_301DB96170A54A53* a1)
	{
		return ((::System::Void(*)(::Class_3_301DB96170A54A53*))((::PBYTE)hIl2Cpp + CLASS_1_140C17FD62972BD3_METHOD_1_8660C3A27B56FE60_OFFSET))(a1);
	}
};
