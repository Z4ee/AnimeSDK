#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_49BE1EE062C3D53A;
class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_08D5FDE603E4EBE6_OFFSET UNITYSDK_OFFSET(0x13F20280)
#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET UNITYSDK_OFFSET(0x13F20100)
#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926__CTOR_OFFSET UNITYSDK_OFFSET(0x13F20EF0)

inline static constexpr unsigned int Class_1_49BE1EE062C3D53A_Class_1_952841CFEACE5926_TypeDefinitionIndex = 49879;

class Class_1_49BE1EE062C3D53A_Class_1_952841CFEACE5926 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_49BE1EE062C3D53A*>* PLPNIKALEBA; // 0x10
	::System::Int32 GLLLIKDBLCL; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926__CTOR_OFFSET))(this, a1);
	}

	::Class_1_49BE1EE062C3D53A* Method_1_4DD2714896566E81(::RPG::GameCore::EnviromentControlPriority a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::Class_1_49BE1EE062C3D53A*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08D5FDE603E4EBE6(::Class_1_49BE1EE062C3D53A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49BE1EE062C3D53A*))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_08D5FDE603E4EBE6_OFFSET))(this, a1);
	}
};
