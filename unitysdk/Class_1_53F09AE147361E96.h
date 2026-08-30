#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/UIShowPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_53F09AE147361E96_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x165B3490)
#define CLASS_1_53F09AE147361E96_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x165B33E0)
#define CLASS_1_53F09AE147361E96_METHOD_1_9472DA3EDE46B805_OFFSET UNITYSDK_OFFSET(0x165B3370)
#define CLASS_1_53F09AE147361E96_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165B3440)
#define CLASS_1_53F09AE147361E96_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x165B34A0)
#define CLASS_1_53F09AE147361E96__CTOR_OFFSET UNITYSDK_OFFSET(0x165B34B0)

inline static constexpr unsigned int Class_1_53F09AE147361E96_TypeDefinitionIndex = 80588;

class Class_1_53F09AE147361E96 : public ::System::Object
{
public:
	::RPG::Client::B51Racing::UIShowPhase _Phase_k__BackingField; // 0x10
	::System::Boolean NANPDBPFLHM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_9472DA3EDE46B805(::System::Boolean a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96_METHOD_1_9472DA3EDE46B805_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::B51Racing::UIShowPhase get_Phase()
	{
		return ((::RPG::Client::B51Racing::UIShowPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::RPG::Client::B51Racing::UIShowPhase a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::UIShowPhase))((::PBYTE)hIl2Cpp + CLASS_1_53F09AE147361E96_SET_PHASE_OFFSET))(this, a1);
	}
};
