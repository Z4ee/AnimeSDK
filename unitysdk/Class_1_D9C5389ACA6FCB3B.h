#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_29;
class Class_1_5B567C8A01BAEDFE_126;
class Class_1_9C23C0FD87AA6107;
class Class_2_3616FDE8A71D0590_2;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AF4980)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x18AF4E30)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET UNITYSDK_OFFSET(0x18AF49D0)
#define CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF48E0)

inline static constexpr unsigned int Class_1_D9C5389ACA6FCB3B_TypeDefinitionIndex = 34961;

class Class_1_D9C5389ACA6FCB3B : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_2* Field_1_0; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_2*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_F1AD6B5D260A8C4A(::System::UInt32 a1, ::Class_1_355A2207C3B7A99D_29*& a2, ::Class_1_5B567C8A01BAEDFE_126*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_355A2207C3B7A99D_29*&, ::Class_1_5B567C8A01BAEDFE_126*&))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_32460A23F1A1DEF1(::Class_1_9C23C0FD87AA6107* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C23C0FD87AA6107*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_32460A23F1A1DEF1_OFFSET))(this, a1);
	}
};
