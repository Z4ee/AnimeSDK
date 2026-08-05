#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Enum_3_4B9B4F34A010B552.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CF43FA1E89397A1C;
namespace System { class Action; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_C545BDC193383D28_METHOD_4_1D1FBAC6E5ACFF89_OFFSET UNITYSDK_OFFSET(0x12892B20)
#define CLASS_4_C545BDC193383D28_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12893320)
#define CLASS_4_C545BDC193383D28_METHOD_4_3C092CF69374C63B_OFFSET UNITYSDK_OFFSET(0x12892840)
#define CLASS_4_C545BDC193383D28_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x12892570)
#define CLASS_4_C545BDC193383D28__CTOR_OFFSET UNITYSDK_OFFSET(0x128930A0)

inline static constexpr unsigned int Class_4_C545BDC193383D28_TypeDefinitionIndex = 90959;

class Class_4_C545BDC193383D28 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_6; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x50
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C545BDC193383D28__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C545BDC193383D28_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_3C092CF69374C63B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C545BDC193383D28_METHOD_4_3C092CF69374C63B_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_1D1FBAC6E5ACFF89(::System::Int32 a1, ::Enum_3_4B9B4F34A010B552 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::System::Int32, ::Enum_3_4B9B4F34A010B552, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_C545BDC193383D28_METHOD_4_1D1FBAC6E5ACFF89_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C545BDC193383D28_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
