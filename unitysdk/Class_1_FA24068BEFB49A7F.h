#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_777F7252E2501367.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FA24068BEFB49A7F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B3D2200)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_1_OFFSET UNITYSDK_OFFSET(0x1B3D2190)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x1B3D20A0)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1B3D2240)
#define CLASS_1_FA24068BEFB49A7F_METHOD_1_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x1B3D2120)
#define CLASS_1_FA24068BEFB49A7F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3D1C80)
#define CLASS_1_FA24068BEFB49A7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3D1FE0)

inline static constexpr unsigned int Class_1_FA24068BEFB49A7F_TypeDefinitionIndex = 83569;

class Class_1_FA24068BEFB49A7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_01B4CC30216C9ABE_3*>* Field_1_4; // 0x18
	::Struct_2_777F7252E2501367 Field_1_1; // 0x20
	::System::Int32 Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_TOSTRING_OFFSET))(this);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::Struct_2_777F7252E2501367 Method_1_BA80D36BDA3B5115()
	{
		return ((::Struct_2_777F7252E2501367(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_BA80D36BDA3B5115_OFFSET))(this);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_71E25A039EF7FB83_1()
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_71E25A039EF7FB83_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA24068BEFB49A7F_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}
};
