#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_777F7252E2501367.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FA24068BEFB49A7F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1C476E10)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_1_OFFSET UNITYSDK_OFFSET(0x1C477240)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x1C476E50)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1C476F40)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x1C476ED0)
#define CLASS_1_FA24068BEFB49A7F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4769F0)
#define CLASS_1_FA24068BEFB49A7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C476D50)

inline static constexpr unsigned int Class_1_FA24068BEFB49A7F_TypeDefinitionIndex = 89250;

class Class_1_FA24068BEFB49A7F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_01B4CC30216C9ABE_5*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::Struct_2_777F7252E2501367 Field_1_1; // 0x28
	::System::Int32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::Struct_2_777F7252E2501367 Method_1_BA80D36BDA3B5115()
	{
		return ((::Struct_2_777F7252E2501367(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_71E25A039EF7FB83_1()
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_1_OFFSET))(this);
	}
};
