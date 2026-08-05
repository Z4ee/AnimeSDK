#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_0D32370858E11364_2_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x18B8E570)
#define CLASS_2_0D32370858E11364_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x18B8E8A0)
#define CLASS_2_0D32370858E11364_2_METHOD_2_6B0412C337DACE00_OFFSET UNITYSDK_OFFSET(0x18B8E6F0)
#define CLASS_2_0D32370858E11364_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B8E930)
#define CLASS_2_0D32370858E11364_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8E920)

inline static constexpr unsigned int Class_2_0D32370858E11364_2_TypeDefinitionIndex = 70958;

class Class_2_0D32370858E11364_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_2_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Method_2_6B0412C337DACE00(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_2_METHOD_2_6B0412C337DACE00_OFFSET))(this, a1, a2);
	}
};
