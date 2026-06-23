#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"

class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIStartFunctionNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8C0664AB8F8C0114_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x153D87A0)
#define CLASS_2_8C0664AB8F8C0114__CTOR_OFFSET UNITYSDK_OFFSET(0x153D8720)

inline static constexpr unsigned int Class_2_8C0664AB8F8C0114_TypeDefinitionIndex = 48106;

class Class_2_8C0664AB8F8C0114 : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	// static const ::System::Int32 Field_2_0 = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_C376DB68B1C74261* a1, ::MoleMole::Config::ConfigUIStartFunctionNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C376DB68B1C74261*, ::MoleMole::Config::ConfigUIStartFunctionNode*))((::PBYTE)hIl2Cpp + CLASS_2_8C0664AB8F8C0114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C0664AB8F8C0114_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}
};
