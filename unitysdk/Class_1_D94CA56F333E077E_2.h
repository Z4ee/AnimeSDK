#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B18A39CC32B5DD22;
class Class_1_D94CA56F333E077E_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D94CA56F333E077E_2_METHOD_1_1E38DD36811428FC_OFFSET UNITYSDK_OFFSET(0x16F01470)
#define CLASS_1_D94CA56F333E077E_2_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x16F013F0)
#define CLASS_1_D94CA56F333E077E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16F01460)

inline static constexpr unsigned int Class_1_D94CA56F333E077E_2_TypeDefinitionIndex = 68906;

class Class_1_D94CA56F333E077E_2 : public ::System::Object
{
public:
	::Class_1_B18A39CC32B5DD22* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_2__CTOR_OFFSET))(this);
	}

	static ::Class_1_D94CA56F333E077E_2* Method_1_250203490119AF47(::Class_1_B18A39CC32B5DD22* a1)
	{
		return ((::Class_1_D94CA56F333E077E_2*(*)(::Class_1_B18A39CC32B5DD22*))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_2_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D94CA56F333E077E_1*>* Method_1_1E38DD36811428FC()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D94CA56F333E077E_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_2_METHOD_1_1E38DD36811428FC_OFFSET))(this);
	}
};
