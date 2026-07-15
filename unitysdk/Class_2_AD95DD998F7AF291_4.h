#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_DDF1B764466C79E6;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }

#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16EC64C0)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_5969CC2A0AEB667F_OFFSET UNITYSDK_OFFSET(0x16EC6AC0)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x16EC68B0)
#define CLASS_2_AD95DD998F7AF291_4_METHOD_2_91DD07F090AFD0DF_OFFSET UNITYSDK_OFFSET(0x16EC6530)
#define CLASS_2_AD95DD998F7AF291_4__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC64B0)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_4_TypeDefinitionIndex = 74280;

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

	::System::String* Method_2_5969CC2A0AEB667F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_5969CC2A0AEB667F_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_4_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}
};
