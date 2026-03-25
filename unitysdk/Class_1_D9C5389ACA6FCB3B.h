#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_434341DAC51FD4BD_121;
class Class_1_A89D7652B2FCF087;
class Class_1_C03D623E9F32FBCB_30;
class Class_2_099B78418029B3B1_2;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166312A0)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_D58ABA264253B81E_OFFSET UNITYSDK_OFFSET(0x16631980)
#define CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET UNITYSDK_OFFSET(0x16631420)
#define CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x16631210)

inline static constexpr unsigned int Class_1_D9C5389ACA6FCB3B_TypeDefinitionIndex = 28944;

class Class_1_D9C5389ACA6FCB3B : public ::System::Object
{
public:
	::Class_2_099B78418029B3B1_2* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_1_0; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1_2*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_F1AD6B5D260A8C4A(::System::UInt32 a1, ::Class_1_C03D623E9F32FBCB_30*& a2, ::Class_1_434341DAC51FD4BD_121*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_C03D623E9F32FBCB_30*&, ::Class_1_434341DAC51FD4BD_121*&))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_F1AD6B5D260A8C4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D58ABA264253B81E(::Class_1_A89D7652B2FCF087* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A89D7652B2FCF087*))((::PBYTE)hIl2Cpp + CLASS_1_D9C5389ACA6FCB3B_METHOD_1_D58ABA264253B81E_OFFSET))(this, a1);
	}
};
