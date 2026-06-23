#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigTurnback; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC33B6615579E69F_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x12775900)
#define CLASS_1_DC33B6615579E69F_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x127757D0)
#define CLASS_1_DC33B6615579E69F_METHOD_1_A95EA68172A65F7A_OFFSET UNITYSDK_OFFSET(0x12775890)
#define CLASS_1_DC33B6615579E69F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x127758F0)
#define CLASS_1_DC33B6615579E69F_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x12775830)
#define CLASS_1_DC33B6615579E69F__CTOR_OFFSET UNITYSDK_OFFSET(0x12775610)

inline static constexpr unsigned int Class_1_DC33B6615579E69F_TypeDefinitionIndex = 58044;

class Class_1_DC33B6615579E69F : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::MoleMole::Config::ConfigTurnback* Field_1_0; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_3; // 0x2C
	::System::Int32 Field_1_2; // 0x30

	::System::Void _ctor(::MoleMole::Config::ConfigTurnback* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnback*))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_DC33B6615579E69F* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_DC33B6615579E69F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A95EA68172A65F7A(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_A95EA68172A65F7A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
