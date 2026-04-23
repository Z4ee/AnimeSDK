#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDD10A023E74F941_METHOD_2_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x17F942D0)
#define CLASS_2_DDD10A023E74F941_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F94440)
#define CLASS_2_DDD10A023E74F941__CTOR_OFFSET UNITYSDK_OFFSET(0x17F941D0)

inline static constexpr unsigned int Class_2_DDD10A023E74F941_TypeDefinitionIndex = 39009;

class Class_2_DDD10A023E74F941 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_1*>* Field_2_0; // 0x18

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_DDD10A023E74F941__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD10A023E74F941_METHOD_2_B8817F4F77EFC234_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD10A023E74F941_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
