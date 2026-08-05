#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_82A4C9D74CF6CFAC_Class_2_6450A859FFC1DAAC;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_82A4C9D74CF6CFAC_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x11E59CD0)
#define CLASS_2_82A4C9D74CF6CFAC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x11E59E80)
#define CLASS_2_82A4C9D74CF6CFAC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11E59F90)
#define CLASS_2_82A4C9D74CF6CFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x11E59F80)

inline static constexpr unsigned int Class_2_82A4C9D74CF6CFAC_TypeDefinitionIndex = 44926;

class Class_2_82A4C9D74CF6CFAC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_82A4C9D74CF6CFAC_Class_2_6450A859FFC1DAAC*>* Field_2_7; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_82A4C9D74CF6CFAC_Class_2_6450A859FFC1DAAC*>* Field_2_6; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_82A4C9D74CF6CFAC_Class_2_6450A859FFC1DAAC*>* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A4C9D74CF6CFAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_82A4C9D74CF6CFAC_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A4C9D74CF6CFAC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_82A4C9D74CF6CFAC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
