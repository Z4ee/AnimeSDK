#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_2_22B3B6D2E353EAD3;
class Class_2_B5C26CAF86EF077B;

#define CLASS_1_93894E8CB7E0FBBA_METHOD_1_909A62D32D5DCEBB_OFFSET UNITYSDK_OFFSET(0x1786A730)
#define CLASS_1_93894E8CB7E0FBBA_METHOD_1_AD9D9812B0D507B3_OFFSET UNITYSDK_OFFSET(0x1786A6B0)
#define CLASS_1_93894E8CB7E0FBBA_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x1786A600)
#define CLASS_1_93894E8CB7E0FBBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1786A8E0)

inline static constexpr unsigned int Class_1_93894E8CB7E0FBBA_TypeDefinitionIndex = 47352;

class Class_1_93894E8CB7E0FBBA : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93894E8CB7E0FBBA_TypeDefinitionIndex)->GetStaticField(0x4B690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93894E8CB7E0FBBA__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_93894E8CB7E0FBBA_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_355* Method_1_AD9D9812B0D507B3()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93894E8CB7E0FBBA_METHOD_1_AD9D9812B0D507B3_OFFSET))();
	}

	static ::System::Void Method_1_909A62D32D5DCEBB(::Class_2_22B3B6D2E353EAD3* a1)
	{
		return ((::System::Void(*)(::Class_2_22B3B6D2E353EAD3*))((::PBYTE)hIl2Cpp + CLASS_1_93894E8CB7E0FBBA_METHOD_1_909A62D32D5DCEBB_OFFSET))(a1);
	}
};
