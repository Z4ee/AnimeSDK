#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_920;
class Class_0_16E4307DCC419505_923;

#define CLASS_1_D09F4FAB9C64FEFA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9DEF70)
#define CLASS_1_D09F4FAB9C64FEFA_METHOD_1_95EC9293FD439850_OFFSET UNITYSDK_OFFSET(0xA9DED30)
#define CLASS_1_D09F4FAB9C64FEFA_METHOD_1_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0xA9DEE90)
#define CLASS_1_D09F4FAB9C64FEFA__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DF060)

inline static constexpr unsigned int Class_1_D09F4FAB9C64FEFA_TypeDefinitionIndex = 60634;

class Class_1_D09F4FAB9C64FEFA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_923* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_920* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int64 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D09F4FAB9C64FEFA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_95EC9293FD439850(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_D09F4FAB9C64FEFA_METHOD_1_95EC9293FD439850_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D09F4FAB9C64FEFA_METHOD_1_D240830C442C70A4_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D09F4FAB9C64FEFA_CLEAR_OFFSET))(this);
	}
};
