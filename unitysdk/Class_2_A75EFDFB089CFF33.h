#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_A75EFDFB089CFF33_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x937CBB0)
#define CLASS_2_A75EFDFB089CFF33__CTOR_OFFSET UNITYSDK_OFFSET(0x937CC20)
#define CLASS_2_A75EFDFB089CFF33__ONBIND_OFFSET UNITYSDK_OFFSET(0x937CAC0)
#define CLASS_2_A75EFDFB089CFF33___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x937CC50)

inline static constexpr unsigned int Class_2_A75EFDFB089CFF33_TypeDefinitionIndex = 65710;

class Class_2_A75EFDFB089CFF33 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
