#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14435090)
#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x14434920)
#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x144345A0)
#define CLASS_4_85A7AC6E1A90E51B__CTOR_OFFSET UNITYSDK_OFFSET(0x14434E00)

inline static constexpr unsigned int Class_4_85A7AC6E1A90E51B_TypeDefinitionIndex = 74856;

class Class_4_85A7AC6E1A90E51B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_4; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_8; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_7; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_6; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x50
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_3; // 0x58
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_5; // 0x60
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
