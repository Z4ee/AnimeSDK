#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7AA0663B46C8586F_15;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159F73A0)
#define CLASS_2_71206B21D0A90B92_11_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x159F7620)
#define CLASS_2_71206B21D0A90B92_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F74B0)
#define CLASS_2_71206B21D0A90B92_11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159F73F0)
#define CLASS_2_71206B21D0A90B92_11_TICK_OFFSET UNITYSDK_OFFSET(0x159F76B0)
#define CLASS_2_71206B21D0A90B92_11__CTOR_OFFSET UNITYSDK_OFFSET(0x159F7390)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_11_TypeDefinitionIndex = 52929;

class Class_2_71206B21D0A90B92_11 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_3_7AA0663B46C8586F_15* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_15*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_TICK_OFFSET))(this, a1);
	}
};
