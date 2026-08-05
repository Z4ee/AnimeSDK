#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F828EC47457678F9_Enum_3_D4F1F8C87AFCCF9B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_F828EC47457678F9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1584FE30)
#define CLASS_1_F828EC47457678F9_METHOD_1_309BDCE517A2E20E_OFFSET UNITYSDK_OFFSET(0x158500F0)
#define CLASS_1_F828EC47457678F9_METHOD_1_336DFDB5749719BB_OFFSET UNITYSDK_OFFSET(0x15850600)
#define CLASS_1_F828EC47457678F9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x158504D0)
#define CLASS_1_F828EC47457678F9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15850470)
#define CLASS_1_F828EC47457678F9_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x15850590)
#define CLASS_1_F828EC47457678F9_METHOD_1_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0x1584FE90)
#define CLASS_1_F828EC47457678F9__CTOR_OFFSET UNITYSDK_OFFSET(0x15850510)

inline static constexpr unsigned int Class_1_F828EC47457678F9_TypeDefinitionIndex = 72601;

class Class_1_F828EC47457678F9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_5 = 0x168; // 0x0
	::MoleMole::EntityHandle Field_1_3; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x28
	::System::Single Field_1_7; // 0x34
	::Class_1_F828EC47457678F9_Enum_3_D4F1F8C87AFCCF9B Field_1_1; // 0x38
	::System::Boolean Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_E32BCC2C6A959814()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_E32BCC2C6A959814_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_309BDCE517A2E20E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_F828EC47457678F9_Enum_3_D4F1F8C87AFCCF9B a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_F828EC47457678F9_Enum_3_D4F1F8C87AFCCF9B, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_309BDCE517A2E20E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_336DFDB5749719BB(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F828EC47457678F9_METHOD_1_336DFDB5749719BB_OFFSET))(a1, a2, a3);
	}
};
