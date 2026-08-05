#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EF194AC85EC2E8EA_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x16E93FE0)
#define CLASS_2_EF194AC85EC2E8EA_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x16E93E60)
#define CLASS_2_EF194AC85EC2E8EA_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16E941C0)
#define CLASS_2_EF194AC85EC2E8EA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16E94250)
#define CLASS_2_EF194AC85EC2E8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E94240)

inline static constexpr unsigned int Class_2_EF194AC85EC2E8EA_TypeDefinitionIndex = 64064;

class Class_2_EF194AC85EC2E8EA : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_0; // 0x18
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF194AC85EC2E8EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EF194AC85EC2E8EA_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF194AC85EC2E8EA_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EF194AC85EC2E8EA_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EF194AC85EC2E8EA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
