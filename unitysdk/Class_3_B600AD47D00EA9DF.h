#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FFB447330BDBA334.h"

class Class_1_B71B870103B6CD36;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_3_B600AD47D00EA9DF_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13D8EBD0)
#define CLASS_3_B600AD47D00EA9DF_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13D8EBC0)
#define CLASS_3_B600AD47D00EA9DF_METHOD_3_888EAF38C5DF027B_OFFSET UNITYSDK_OFFSET(0x13D8EBF0)
#define CLASS_3_B600AD47D00EA9DF_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x13D8EC00)
#define CLASS_3_B600AD47D00EA9DF_METHOD_3_BAC621C4B92C6604_OFFSET UNITYSDK_OFFSET(0x13D8EBE0)
#define CLASS_3_B600AD47D00EA9DF_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x13D8EBB0)
#define CLASS_3_B600AD47D00EA9DF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8EB20)

inline static constexpr unsigned int Class_3_B600AD47D00EA9DF_TypeDefinitionIndex = 65023;

class Class_3_B600AD47D00EA9DF : public ::Class_2_FFB447330BDBA334
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_3_0; // 0x18
	::Class_1_B71B870103B6CD36* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_1_B71B870103B6CD36* Method_3_24748FC20F375725()
	{
		return ((::Class_1_B71B870103B6CD36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_3_BAC621C4B92C6604()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_BAC621C4B92C6604_OFFSET))(this);
	}

	::System::Void Method_3_888EAF38C5DF027B(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_888EAF38C5DF027B_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B71B870103B6CD36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B71B870103B6CD36*))((::PBYTE)hIl2Cpp + CLASS_3_B600AD47D00EA9DF_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
