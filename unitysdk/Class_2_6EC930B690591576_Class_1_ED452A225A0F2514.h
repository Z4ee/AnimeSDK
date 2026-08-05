#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6EC930B690591576;
class Class_2_6EC930B690591576_Class_1_EA06DA1092863621;
class Class_3_BF9CEECF5CE3FEA3;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x1289DE20)
#define CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514_METHOD_1_BE023510DCC08AC8_OFFSET UNITYSDK_OFFSET(0x1289DA40)
#define CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514__CTOR_OFFSET UNITYSDK_OFFSET(0x1289DA30)

inline static constexpr unsigned int Class_2_6EC930B690591576_Class_1_ED452A225A0F2514_TypeDefinitionIndex = 71498;

class Class_2_6EC930B690591576_Class_1_ED452A225A0F2514 : public ::System::Object
{
public:
	::Class_2_6EC930B690591576* Field_1_1; // 0x10
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE023510DCC08AC8(::Class_3_BF9CEECF5CE3FEA3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BF9CEECF5CE3FEA3*))((::PBYTE)hIl2Cpp + CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514_METHOD_1_BE023510DCC08AC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC930B690591576_CLASS_1_ED452A225A0F2514_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}
};
