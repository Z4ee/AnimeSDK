#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_4_425BBC3CBFD638A0_2;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_AFD38822E2F27DEC_METHOD_4_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x15DD96D0)
#define CLASS_4_AFD38822E2F27DEC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15DDADE0)
#define CLASS_4_AFD38822E2F27DEC_METHOD_4_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x15DD9230)
#define CLASS_4_AFD38822E2F27DEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDAA60)

inline static constexpr unsigned int Class_4_AFD38822E2F27DEC_TypeDefinitionIndex = 83814;

class Class_4_AFD38822E2F27DEC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_7; // 0x30
	::Class_3_B537A0AA78803363* Field_4_15; // 0x38
	::Class_4_425BBC3CBFD638A0_2* Field_4_8; // 0x40
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_9; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_4; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_11; // 0x58
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x60
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_5; // 0x68
	::Class_3_B537A0AA78803363* Field_4_14; // 0x70
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_10; // 0x78
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_METHOD_4_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_4_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_METHOD_4_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
