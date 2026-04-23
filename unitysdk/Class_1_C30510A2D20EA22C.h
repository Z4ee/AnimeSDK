#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D6AD1EDD0163866;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C30510A2D20EA22C_METHOD_1_22E19448A3B11D37_OFFSET UNITYSDK_OFFSET(0x9034440)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x9033AD0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_5218F55178695EA2_OFFSET UNITYSDK_OFFSET(0x9033DC0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x9033B20)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x90338B0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_EE28FEDBAE239872_OFFSET UNITYSDK_OFFSET(0x90340C0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_F188D02F3A9A1533_OFFSET UNITYSDK_OFFSET(0x9033EE0)
#define CLASS_1_C30510A2D20EA22C__CTOR_OFFSET UNITYSDK_OFFSET(0x9033A20)

inline static constexpr unsigned int Class_1_C30510A2D20EA22C_TypeDefinitionIndex = 60797;

class Class_1_C30510A2D20EA22C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4D6AD1EDD0163866*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C__CTOR_OFFSET))(this);
	}

	static ::Class_1_C30510A2D20EA22C* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_C30510A2D20EA22C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_1_4D6AD1EDD0163866* Method_1_5218F55178695EA2()
	{
		return ((::Class_1_4D6AD1EDD0163866*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_5218F55178695EA2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_4D6AD1EDD0163866*>* Method_1_F188D02F3A9A1533()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4D6AD1EDD0163866*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_F188D02F3A9A1533_OFFSET))(this);
	}

	static ::Class_1_4D6AD1EDD0163866* Method_1_EE28FEDBAE239872(::System::Collections::Generic::List_1<::Class_1_4D6AD1EDD0163866*>* a1)
	{
		return ((::Class_1_4D6AD1EDD0163866*(*)(::System::Collections::Generic::List_1<::Class_1_4D6AD1EDD0163866*>*))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_EE28FEDBAE239872_OFFSET))(a1);
	}

	::System::Void Method_1_22E19448A3B11D37(::Class_1_4D6AD1EDD0163866* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D6AD1EDD0163866*))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_22E19448A3B11D37_OFFSET))(this, a1);
	}
};
