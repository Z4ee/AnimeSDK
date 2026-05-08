#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6602603644EF4355_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x11ED0620)
#define CLASS_2_6602603644EF4355_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x11ED09F0)
#define CLASS_2_6602603644EF4355_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x11ED0810)
#define CLASS_2_6602603644EF4355_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11ED0AA0)
#define CLASS_2_6602603644EF4355__CTOR_OFFSET UNITYSDK_OFFSET(0x11ED0A90)

inline static constexpr unsigned int Class_2_6602603644EF4355_TypeDefinitionIndex = 48702;

class Class_2_6602603644EF4355 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6602603644EF4355__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6602603644EF4355_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6602603644EF4355_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6602603644EF4355_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6602603644EF4355_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
