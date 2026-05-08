#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_186;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }

#define CLASS_2_903002BB24D47FE1_METHOD_2_1167B82216E9F065_OFFSET UNITYSDK_OFFSET(0x12C21D50)
#define CLASS_2_903002BB24D47FE1_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x12C21D30)
#define CLASS_2_903002BB24D47FE1_METHOD_2_3302777B3F94C762_OFFSET UNITYSDK_OFFSET(0x12C222B0)
#define CLASS_2_903002BB24D47FE1_METHOD_2_3DAA9F3C44AC9A56_OFFSET UNITYSDK_OFFSET(0x12C22020)
#define CLASS_2_903002BB24D47FE1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12C21F80)
#define CLASS_2_903002BB24D47FE1_METHOD_2_84E8CF7FD515FC1A_OFFSET UNITYSDK_OFFSET(0x12C21DC0)
#define CLASS_2_903002BB24D47FE1_METHOD_2_9051208F35CEDF9F_OFFSET UNITYSDK_OFFSET(0x12C22310)
#define CLASS_2_903002BB24D47FE1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12C21D40)
#define CLASS_2_903002BB24D47FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C222A0)

inline static constexpr unsigned int Class_2_903002BB24D47FE1_TypeDefinitionIndex = 60127;

class Class_2_903002BB24D47FE1 : public ::Class_1_C36D127C88299910
{
public:
	::MoleMole::Config::ConfigHollowCameraDrag* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1167B82216E9F065(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_1167B82216E9F065_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_186* Method_2_84E8CF7FD515FC1A(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_186*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_84E8CF7FD515FC1A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DAA9F3C44AC9A56(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_3DAA9F3C44AC9A56_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_3302777B3F94C762(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_3302777B3F94C762_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_2_9051208F35CEDF9F(::Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5 a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_9051208F35CEDF9F_OFFSET))(a1);
	}
};
