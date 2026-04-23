#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7003CCDED916330;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_B278F2E496DACE9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11ADF8D0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11ADF5E0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x11ADF810)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11ADF660)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11ADF670)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x11ADF640)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11ADF600)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11ADF620)
#define CLASS_1_B278F2E496DACE9A__CTOR_OFFSET UNITYSDK_OFFSET(0x11ADF680)

inline static constexpr unsigned int Class_1_B278F2E496DACE9A_TypeDefinitionIndex = 52776;

class Class_1_B278F2E496DACE9A : public ::System::Object
{
public:
	::RPG::GameCore::FreeStyleAnimEventConfig* Field_1_0; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x18
	::Class_1_D7003CCDED916330* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor(::Class_1_D7003CCDED916330* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimEventConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimEventConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_DISPOSE_OFFSET))(this);
	}
};
