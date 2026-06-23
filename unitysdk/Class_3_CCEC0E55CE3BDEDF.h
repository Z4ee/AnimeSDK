#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x131793A0)
#define CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x131793B0)
#define CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13179390)
#define CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_87BFEF6DA87B3611_OFFSET UNITYSDK_OFFSET(0x13179330)
#define CLASS_3_CCEC0E55CE3BDEDF_ONATTACH_OFFSET UNITYSDK_OFFSET(0x13178E50)
#define CLASS_3_CCEC0E55CE3BDEDF_ONDETACH_OFFSET UNITYSDK_OFFSET(0x13179260)
#define CLASS_3_CCEC0E55CE3BDEDF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13179080)
#define CLASS_3_CCEC0E55CE3BDEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x131792A0)

inline static constexpr unsigned int Class_3_CCEC0E55CE3BDEDF_TypeDefinitionIndex = 81234;

class Class_3_CCEC0E55CE3BDEDF : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_CCEC0E55CE3BDEDF*>
{
public:
	::MoleMole::EntityHandle Field_3_1; // 0x20
	::System::Int32 Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_ONDETACH_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_87BFEF6DA87B3611()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_87BFEF6DA87B3611_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC0E55CE3BDEDF_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
