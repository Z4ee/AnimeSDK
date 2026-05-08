#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_5C70D42F9D3E6365_Class_2_3994FC701DA59D95;
class Class_2_5C70D42F9D3E6365_Class_2_88B4C2AAEAAAED22;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_5C70D42F9D3E6365_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x11204C50)
#define CLASS_2_5C70D42F9D3E6365_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11204DF0)
#define CLASS_2_5C70D42F9D3E6365_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11204EE0)
#define CLASS_2_5C70D42F9D3E6365__CTOR_OFFSET UNITYSDK_OFFSET(0x11204ED0)

inline static constexpr unsigned int Class_2_5C70D42F9D3E6365_TypeDefinitionIndex = 55280;

class Class_2_5C70D42F9D3E6365 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_5C70D42F9D3E6365_Class_2_88B4C2AAEAAAED22*>* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_5C70D42F9D3E6365_Class_2_3994FC701DA59D95*>* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C70D42F9D3E6365__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5C70D42F9D3E6365_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5C70D42F9D3E6365_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C70D42F9D3E6365_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
