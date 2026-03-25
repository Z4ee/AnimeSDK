#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_DDF1B764466C79E6;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }

#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x115EAC80)
#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x115EB3D0)
#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_6478826C4A7693D0_OFFSET UNITYSDK_OFFSET(0x115EACF0)
#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x115EB080)
#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_D2A7308F52EA614E_OFFSET UNITYSDK_OFFSET(0x115EB280)
#define CLASS_2_AD95DD998F7AF291_1__CTOR_OFFSET UNITYSDK_OFFSET(0x115EAC70)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_1_TypeDefinitionIndex = 63687;

class Class_2_AD95DD998F7AF291_1 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_DDF1B764466C79E6* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_DDF1B764466C79E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DDF1B764466C79E6*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_6478826C4A7693D0(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_6478826C4A7693D0_OFFSET))(this, a1);
	}

	::System::String* Method_2_D2A7308F52EA614E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_D2A7308F52EA614E_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
