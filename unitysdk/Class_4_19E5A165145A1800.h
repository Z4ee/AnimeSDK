#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_19E5A165145A1800_METHOD_4_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x18841D40)
#define CLASS_4_19E5A165145A1800_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x188427B0)
#define CLASS_4_19E5A165145A1800_METHOD_4_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x18841960)
#define CLASS_4_19E5A165145A1800__CTOR_OFFSET UNITYSDK_OFFSET(0x18842480)

inline static constexpr unsigned int Class_4_19E5A165145A1800_TypeDefinitionIndex = 48210;

class Class_4_19E5A165145A1800 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_5; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_6; // 0x30
	::Class_3_B537A0AA78803363* Field_4_9; // 0x38
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_4; // 0x40
	::Class_3_B537A0AA78803363* Field_4_8; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x50
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_1; // 0x58
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x60
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_7; // 0x68
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_19E5A165145A1800__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_19E5A165145A1800_METHOD_4_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_4_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_19E5A165145A1800_METHOD_4_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_19E5A165145A1800_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
