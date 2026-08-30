#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2EAEB59C1D3F00D7_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1C71DE70)
#define CLASS_3_2EAEB59C1D3F00D7_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x1C71DE30)
#define CLASS_3_2EAEB59C1D3F00D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71DE60)

inline static constexpr unsigned int Class_3_2EAEB59C1D3F00D7_TypeDefinitionIndex = 21302;

class Class_3_2EAEB59C1D3F00D7 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KKGNDNGNIDI; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* HINABLHELDI; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFCDELJJMNP; // 0x30

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
