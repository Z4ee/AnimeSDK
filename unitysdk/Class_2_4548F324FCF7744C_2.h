#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_2_4548F324FCF7744C_2_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x1192F190)
#define CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1192F180)
#define CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1192F1E0)
#define CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1192F170)
#define CLASS_2_4548F324FCF7744C_2_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1192F000)
#define CLASS_2_4548F324FCF7744C_2_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1192EE60)
#define CLASS_2_4548F324FCF7744C_2_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1192DC00)
#define CLASS_2_4548F324FCF7744C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1192F160)

inline static constexpr unsigned int Class_2_4548F324FCF7744C_2_TypeDefinitionIndex = 58361;

class Class_2_4548F324FCF7744C_2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_4548F324FCF7744C_2*>
{
public:
	::Class_3_07AAFA6F7F79BEB3* Field_2_1; // 0x20
	::MoleMole::EntityHandle Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
