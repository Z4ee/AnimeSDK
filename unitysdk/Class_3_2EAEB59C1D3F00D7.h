#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2EAEB59C1D3F00D7_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1ACBCD90)
#define CLASS_3_2EAEB59C1D3F00D7_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x1ACBCD50)
#define CLASS_3_2EAEB59C1D3F00D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBCD80)

inline static constexpr unsigned int Class_3_2EAEB59C1D3F00D7_TypeDefinitionIndex = 20746;

class Class_3_2EAEB59C1D3F00D7 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EAEB59C1D3F00D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2EAEB59C1D3F00D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2EAEB59C1D3F00D7*&))((::PBYTE)hIl2Cpp + CLASS_3_2EAEB59C1D3F00D7_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0EA31FDFD4AC3DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2EAEB59C1D3F00D7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2EAEB59C1D3F00D7*))((::PBYTE)hIl2Cpp + CLASS_3_2EAEB59C1D3F00D7_METHOD_3_0EA31FDFD4AC3DFF_OFFSET))(a1, a2);
	}
};
