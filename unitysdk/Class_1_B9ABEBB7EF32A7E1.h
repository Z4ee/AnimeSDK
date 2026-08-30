#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
class Class_0_16E4307DCC419505_503;

#define CLASS_1_B9ABEBB7EF32A7E1_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0x16FBF0D0)
#define CLASS_1_B9ABEBB7EF32A7E1_CREATE_OFFSET UNITYSDK_OFFSET(0x16FBEFD0)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_3FEBEB2003C0B3FE_OFFSET UNITYSDK_OFFSET(0x16FBEF40)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_AB618B97E9149238_1_OFFSET UNITYSDK_OFFSET(0x16FBF1D0)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_AB618B97E9149238_OFFSET UNITYSDK_OFFSET(0x16FBF170)
#define CLASS_1_B9ABEBB7EF32A7E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBF230)

inline static constexpr unsigned int Class_1_B9ABEBB7EF32A7E1_TypeDefinitionIndex = 54239;

class Class_1_B9ABEBB7EF32A7E1 : public ::System::Object
{
public:
	::System::Int32 GAMGCOGLGNJ; // 0x10
	::System::Int32 BPHFOJPAJDN; // 0x14
	::RPG::GameCore::FixPoint FEMPDMOOPAG; // 0x18
	::RPG::GameCore::FixPoint JIAOEIMMPBB; // 0x20
	::System::Boolean APIAHMNJGIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1__CTOR_OFFSET))(this);
	}

	::Class_1_B9ABEBB7EF32A7E1* Method_1_3FEBEB2003C0B3FE(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
	{
		return ((::Class_1_B9ABEBB7EF32A7E1*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_3FEBEB2003C0B3FE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_503* Create(::Class_0_16E4307DCC419505_502* a1)
	{
		return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_502* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_87C8F594A107C13B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_502*, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_AB618B97E9149238(::Class_0_16E4307DCC419505_502* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_AB618B97E9149238_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_AB618B97E9149238_1(::Class_0_16E4307DCC419505_502* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_AB618B97E9149238_1_OFFSET))(this, a1);
	}
};
