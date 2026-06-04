#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8736DBF4B6B1291B_Class_1_81C8BEDA2610C225;
class Class_2_106309501E4FCB6B;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_8736DBF4B6B1291B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB784F70)
#define CLASS_1_8736DBF4B6B1291B_METHOD_1_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xB785230)
#define CLASS_1_8736DBF4B6B1291B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB785530)
#define CLASS_1_8736DBF4B6B1291B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB7851B0)
#define CLASS_1_8736DBF4B6B1291B_METHOD_1_E5C2ABE8622B659A_OFFSET UNITYSDK_OFFSET(0xB785000)
#define CLASS_1_8736DBF4B6B1291B__CTOR_OFFSET UNITYSDK_OFFSET(0xB784F10)

inline static constexpr unsigned int Class_1_8736DBF4B6B1291B_TypeDefinitionIndex = 52315;

class Class_1_8736DBF4B6B1291B : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_8736DBF4B6B1291B_Class_1_81C8BEDA2610C225*>* Field_1_0; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E5C2ABE8622B659A(::Class_2_106309501E4FCB6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_106309501E4FCB6B*))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_METHOD_1_E5C2ABE8622B659A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_METHOD_1_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
