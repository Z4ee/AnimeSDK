#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_0108C6F38468FEE5_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0xE1FD990)
#define CLASS_2_0108C6F38468FEE5_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xE1FDAE0)
#define CLASS_2_0108C6F38468FEE5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE1FDB90)
#define CLASS_2_0108C6F38468FEE5_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0xE1FD7C0)
#define CLASS_2_0108C6F38468FEE5__CTOR_OFFSET UNITYSDK_OFFSET(0xE1FDB80)

inline static constexpr unsigned int Class_2_0108C6F38468FEE5_TypeDefinitionIndex = 49410;

class Class_2_0108C6F38468FEE5 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0108C6F38468FEE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0108C6F38468FEE5_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0108C6F38468FEE5_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0108C6F38468FEE5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0108C6F38468FEE5_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}
};
