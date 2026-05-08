#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_EBB10EC01CCC4716_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x10F9BA50)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x10F9B860)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x10F9BCB0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0x10F9B8B0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10F9BD40)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F9BC50)
#define CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET UNITYSDK_OFFSET(0x10F9B850)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_TypeDefinitionIndex = 47220;

class Class_1_EBB10EC01CCC4716 : public ::System::Object
{
public:
	::Class_3_D6DA183EF60F02C8* Field_1_2; // 0x10
	::Class_3_4875884AB352B34E* Field_1_3; // 0x18
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Field_1_1; // 0x20
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_1_5; // 0x30
	::MoleMole::Battle::Entity* Field_1_14; // 0x38
	::System::Boolean Field_1_11; // 0x40
	::System::Boolean Field_1_12; // 0x41
	::System::UInt32 Field_1_0; // 0x44
	::System::Single Field_1_6; // 0x48
	::System::Single Field_1_10; // 0x4C
	::System::Boolean Field_1_15; // 0x50
	::System::Boolean Field_1_13; // 0x51
	::System::Boolean Field_1_7; // 0x52
	::System::Boolean Field_1_9; // 0x53
	::System::Single Field_1_8; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C4121B64D1B4C8A(::Class_1_EBB10EC01CCC4716*& a1)
	{
		return ((::System::Void(*)(::Class_1_EBB10EC01CCC4716*&))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_8C4121B64D1B4C8A_OFFSET))(a1);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_EBB10EC01CCC4716* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
