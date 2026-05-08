#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIEndFunctionNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BED496F99A89A7AC_METHOD_2_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x11DC2ED0)
#define CLASS_2_BED496F99A89A7AC_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x11DC2E50)
#define CLASS_2_BED496F99A89A7AC__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC2C60)

inline static constexpr unsigned int Class_2_BED496F99A89A7AC_TypeDefinitionIndex = 45383;

class Class_2_BED496F99A89A7AC : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	// static const ::System::Int32 Field_2_0 = 0xFFFFFFFE; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_C376DB68B1C74261* a1, ::MoleMole::Config::ConfigUIEndFunctionNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C376DB68B1C74261*, ::MoleMole::Config::ConfigUIEndFunctionNode*))((::PBYTE)hIl2Cpp + CLASS_2_BED496F99A89A7AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BED496F99A89A7AC_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED496F99A89A7AC_METHOD_2_42C5BADE1C9EFC80_OFFSET))(this);
	}
};
