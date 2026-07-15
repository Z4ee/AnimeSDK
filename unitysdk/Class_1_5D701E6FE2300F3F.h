#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D701E6FE2300F3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157EDB60)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x157EDD20)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x157EDE40)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_5543817C5A5F79C6_OFFSET UNITYSDK_OFFSET(0x157EE350)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_716BA667B58090A4_OFFSET UNITYSDK_OFFSET(0x157EE170)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x157EDA00)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x157EE540)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_A794AA5B92939598_OFFSET UNITYSDK_OFFSET(0x157EE040)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x157EDF60)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_BFCBCC58B41174A0_OFFSET UNITYSDK_OFFSET(0x157EDBC0)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_C38DE0E34C398638_OFFSET UNITYSDK_OFFSET(0x157EE5D0)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x157EE6E0)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x157ED980)
#define CLASS_1_5D701E6FE2300F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x157ED990)

inline static constexpr unsigned int Class_1_5D701E6FE2300F3F_TypeDefinitionIndex = 58163;

class Class_1_5D701E6FE2300F3F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::UInt32 Field_1_2 = 0x3E4BA9; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x10
	::RPG::Client::AdventurePhase* Field_1_4; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_6; // 0x24
	::System::Boolean Field_1_7; // 0x28
	::System::Boolean Field_1_8; // 0x29
	::System::Boolean Field_1_9; // 0x2A
	::System::Boolean Field_1_10; // 0x2B

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_BFCBCC58B41174A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_BFCBCC58B41174A0_OFFSET))(this);
	}

	::System::Void Method_1_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A794AA5B92939598(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_A794AA5B92939598_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_716BA667B58090A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_716BA667B58090A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5543817C5A5F79C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_5543817C5A5F79C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_C38DE0E34C398638(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_C38DE0E34C398638_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
