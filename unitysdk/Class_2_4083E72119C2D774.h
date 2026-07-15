#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System { class String; }

#define CLASS_2_4083E72119C2D774_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14B93D20)
#define CLASS_2_4083E72119C2D774_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x14B93C70)
#define CLASS_2_4083E72119C2D774_METHOD_2_62743E13914FA259_OFFSET UNITYSDK_OFFSET(0x14B93A00)
#define CLASS_2_4083E72119C2D774_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x14B93CD0)
#define CLASS_2_4083E72119C2D774_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14B93AA0)
#define CLASS_2_4083E72119C2D774__CTOR_OFFSET UNITYSDK_OFFSET(0x14B93D80)

inline static constexpr unsigned int Class_2_4083E72119C2D774_TypeDefinitionIndex = 75890;

class Class_2_4083E72119C2D774 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774__CTOR_OFFSET))(this);
	}

	static ::Class_2_4083E72119C2D774* Method_2_62743E13914FA259(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::Class_2_4083E72119C2D774*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774_METHOD_2_62743E13914FA259_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4083E72119C2D774_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
