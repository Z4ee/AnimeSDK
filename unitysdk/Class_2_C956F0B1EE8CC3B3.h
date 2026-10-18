#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C956F0B1EE8CC3B3_METHOD_2_E56F8427A428D42C_OFFSET UNITYSDK_OFFSET(0x1CA13600)
#define CLASS_2_C956F0B1EE8CC3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA134B0)

inline static constexpr unsigned int Class_2_C956F0B1EE8CC3B3_TypeDefinitionIndex = 43164;

class Class_2_C956F0B1EE8CC3B3 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_1*>* IFMDBDJCCCI; // 0x18

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_C956F0B1EE8CC3B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E56F8427A428D42C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C956F0B1EE8CC3B3_METHOD_2_E56F8427A428D42C_OFFSET))(this);
	}
};
