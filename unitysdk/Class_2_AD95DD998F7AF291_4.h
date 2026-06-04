#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_DDF1B764466C79E6;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }

#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136EE950)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136EF0A0)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x136EED40)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_91DD07F090AFD0DF_OFFSET UNITYSDK_OFFSET(0x136EE9C0)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_D2A7308F52EA614E_OFFSET UNITYSDK_OFFSET(0x136EEF50)
#define CLASS_2_AD95DD998F7AF291_4__CTOR_OFFSET UNITYSDK_OFFSET(0x136EE940)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_4_TypeDefinitionIndex = 72755;

class Class_2_AD95DD998F7AF291_4 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_DDF1B764466C79E6* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_DDF1B764466C79E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DDF1B764466C79E6*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_91DD07F090AFD0DF(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_91DD07F090AFD0DF_OFFSET))(this, a1);
	}

	::System::String* Method_2_D2A7308F52EA614E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_D2A7308F52EA614E_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
