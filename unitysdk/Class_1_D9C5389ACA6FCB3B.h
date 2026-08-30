#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766_25;
class Class_1_5B567C8A01BAEDFE_124;
class Class_1_FC4473755268CF82_1;
class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1F7DE0)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x1C1F8290)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET UNITYSDK_OFFSET(0x1C1F7E30)
#define CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F7D10)

inline static constexpr unsigned int Class_1_D9C5389ACA6FCB3B_TypeDefinitionIndex = 36604;

class Class_1_D9C5389ACA6FCB3B : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* JLMHOPJLPMM; // 0x18
	::Class_2_3616FDE8A71D0590_1* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_F1AD6B5D260A8C4A(::System::UInt32 a1, ::Class_1_242BFB9DE152D766_25*& a2, ::Class_1_5B567C8A01BAEDFE_124*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_242BFB9DE152D766_25*&, ::Class_1_5B567C8A01BAEDFE_124*&))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_32460A23F1A1DEF1(::Class_1_FC4473755268CF82_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FC4473755268CF82_1*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_32460A23F1A1DEF1_OFFSET))(this, a1);
	}
};
