#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_35BB45B34CEF8225_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x12B9F920)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12B9FC80)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x12B9FAA0)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B9FD10)
#define CLASS_2_35BB45B34CEF8225__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9FD00)

inline static constexpr unsigned int Class_2_35BB45B34CEF8225_TypeDefinitionIndex = 68336;

class Class_2_35BB45B34CEF8225 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_CA67A9CEB871FFD3* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}
};
