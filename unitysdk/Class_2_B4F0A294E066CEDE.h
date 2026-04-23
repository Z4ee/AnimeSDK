#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_867B6CE75953535A;
class Class_2_6660DE6E19DC27BF;
namespace UnityEngine { class Transform; }

#define CLASS_2_B4F0A294E066CEDE_METHOD_2_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x11B03060)
#define CLASS_2_B4F0A294E066CEDE_METHOD_2_106A27B044BAA19B_OFFSET UNITYSDK_OFFSET(0x11B030A0)
#define CLASS_2_B4F0A294E066CEDE_METHOD_2_18B783781170954B_OFFSET UNITYSDK_OFFSET(0x11B038E0)
#define CLASS_2_B4F0A294E066CEDE_METHOD_2_1C1A36BBAC990D81_OFFSET UNITYSDK_OFFSET(0x11B03A70)
#define CLASS_2_B4F0A294E066CEDE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11B02FF0)
#define CLASS_2_B4F0A294E066CEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B02E90)

inline static constexpr unsigned int Class_2_B4F0A294E066CEDE_TypeDefinitionIndex = 70307;

class Class_2_B4F0A294E066CEDE : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::Class_1_867B6CE75953535A* Field_2_1; // 0x20
	::Class_1_47EE63CB5C4DC8FC_5* Field_2_2; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_1_47EE63CB5C4DC8FC_5*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE_METHOD_2_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_2_106A27B044BAA19B(::Class_2_6660DE6E19DC27BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6660DE6E19DC27BF*))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE_METHOD_2_106A27B044BAA19B_OFFSET))(this, a1);
	}

	::System::Void Method_2_18B783781170954B(::Class_2_6660DE6E19DC27BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6660DE6E19DC27BF*))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE_METHOD_2_18B783781170954B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C1A36BBAC990D81(::Class_2_6660DE6E19DC27BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6660DE6E19DC27BF*))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE_METHOD_2_1C1A36BBAC990D81_OFFSET))(this, a1);
	}
};
