#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_59EC1B57AEE839C2_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x180E50A0)
#define CLASS_2_59EC1B57AEE839C2_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x180E4EB0)
#define CLASS_2_59EC1B57AEE839C2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x180E5280)
#define CLASS_2_59EC1B57AEE839C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x180E5330)
#define CLASS_2_59EC1B57AEE839C2__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5320)

inline static constexpr unsigned int Class_2_59EC1B57AEE839C2_TypeDefinitionIndex = 86755;

class Class_2_59EC1B57AEE839C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59EC1B57AEE839C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59EC1B57AEE839C2_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59EC1B57AEE839C2_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59EC1B57AEE839C2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59EC1B57AEE839C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
