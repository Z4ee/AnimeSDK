#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53F09AE147361E96;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_3B6867F43581C2F2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBDDACD0)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xBDDAC80)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_8BDE9AA6B337DB42_OFFSET UNITYSDK_OFFSET(0xBDDAA70)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xBDDAAC0)
#define CLASS_1_3B6867F43581C2F2__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDAA10)

inline static constexpr unsigned int Class_1_3B6867F43581C2F2_TypeDefinitionIndex = 81883;

class Class_1_3B6867F43581C2F2 : public ::System::Object
{
public:
	::Class_1_53F09AE147361E96* IJLEOHJJHCM; // 0x10
	::System::Func_1<::System::Boolean>* GBDHHOILHNM; // 0x18
	::System::Action_1<::System::Boolean>* EPHKMPOGBBL; // 0x20
	::System::Boolean DHPHCCCHLJF; // 0x28
	::System::Boolean NFOCONIIKIF; // 0x29

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8BDE9AA6B337DB42(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_8BDE9AA6B337DB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
