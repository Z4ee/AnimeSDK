#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_C1C247C0A2EB5F34_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x167EFF10)
#define CLASS_4_C1C247C0A2EB5F34_METHOD_4_286D0F6CBE978F4F_OFFSET UNITYSDK_OFFSET(0x167EF7A0)
#define CLASS_4_C1C247C0A2EB5F34_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x167EF480)
#define CLASS_4_C1C247C0A2EB5F34__CTOR_OFFSET UNITYSDK_OFFSET(0x167EFCC0)

inline static constexpr unsigned int Class_4_C1C247C0A2EB5F34_TypeDefinitionIndex = 86728;

class Class_4_C1C247C0A2EB5F34 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_7; // 0x28
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_6; // 0x40
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_2; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_5; // 0x50
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x58
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1C247C0A2EB5F34__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1C247C0A2EB5F34_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_286D0F6CBE978F4F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C1C247C0A2EB5F34_METHOD_4_286D0F6CBE978F4F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1C247C0A2EB5F34_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
