#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System { class String; }

#define CLASS_2_4083E72119C2D774_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1603A350)
#define CLASS_2_4083E72119C2D774_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1603A2A0)
#define CLASS_2_4083E72119C2D774_METHOD_2_62743E13914FA259_OFFSET UNITYSDK_OFFSET(0x1603A030)
#define CLASS_2_4083E72119C2D774_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1603A300)
#define CLASS_2_4083E72119C2D774_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1603A0D0)
#define CLASS_2_4083E72119C2D774__CTOR_OFFSET UNITYSDK_OFFSET(0x1603A3B0)

inline static constexpr unsigned int Class_2_4083E72119C2D774_TypeDefinitionIndex = 79523;

class Class_2_4083E72119C2D774 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* ADIGLGPDGGH; // 0x20
	::System::String* LDNLKDCNEBJ; // 0x28
	::System::Boolean BEMMCKLJICI; // 0x30
	::System::Single HBDJCFFDGDD; // 0x34

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
