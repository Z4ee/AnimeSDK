#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_6E947ADB30888E8D_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1CC3EA80)
#define CLASS_3_6E947ADB30888E8D_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1CC3EAC0)
#define CLASS_3_6E947ADB30888E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3EAB0)

inline static constexpr unsigned int Class_3_6E947ADB30888E8D_TypeDefinitionIndex = 10298;

class Class_3_6E947ADB30888E8D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean PIFAKJFLGFH; // 0x18
	::RPG::GameCore::FixPoint IEHPFADHJFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E947ADB30888E8D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6E947ADB30888E8D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6E947ADB30888E8D*&))((::PBYTE)hIl2Cpp + CLASS_3_6E947ADB30888E8D_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6E947ADB30888E8D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6E947ADB30888E8D*))((::PBYTE)hIl2Cpp + CLASS_3_6E947ADB30888E8D_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
