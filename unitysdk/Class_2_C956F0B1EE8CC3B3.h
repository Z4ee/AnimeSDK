#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C956F0B1EE8CC3B3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8EC5F0)
#define CLASS_2_C956F0B1EE8CC3B3_METHOD_2_E56F8427A428D42C_OFFSET UNITYSDK_OFFSET(0x1A8EC3A0)
#define CLASS_2_C956F0B1EE8CC3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EC250)

inline static constexpr unsigned int Class_2_C956F0B1EE8CC3B3_TypeDefinitionIndex = 40586;

class Class_2_C956F0B1EE8CC3B3 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_1*>* Field_2_0; // 0x18

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_C956F0B1EE8CC3B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E56F8427A428D42C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C956F0B1EE8CC3B3_METHOD_2_E56F8427A428D42C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C956F0B1EE8CC3B3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
