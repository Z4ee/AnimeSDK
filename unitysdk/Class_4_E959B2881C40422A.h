#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x1700C350)
#define CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1700C710)
#define CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1700C1A0)
#define CLASS_4_E959B2881C40422A__CTOR_OFFSET UNITYSDK_OFFSET(0x1700C5B0)

inline static constexpr unsigned int Class_4_E959B2881C40422A_TypeDefinitionIndex = 85826;

class Class_4_E959B2881C40422A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_4_1; // 0x28
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_4_3; // 0x30
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_4_2; // 0x38
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_22EB5E1405A8445C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
