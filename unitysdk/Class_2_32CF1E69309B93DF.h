#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x10C83D60)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x10C83D70)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10C83CF0)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_87BFEF6DA87B3611_OFFSET UNITYSDK_OFFSET(0x10C83D00)
#define CLASS_2_32CF1E69309B93DF_ONATTACH_OFFSET UNITYSDK_OFFSET(0x10C83830)
#define CLASS_2_32CF1E69309B93DF_ONDETACH_OFFSET UNITYSDK_OFFSET(0x10C83CA0)
#define CLASS_2_32CF1E69309B93DF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10C83A60)
#define CLASS_2_32CF1E69309B93DF__CTOR_OFFSET UNITYSDK_OFFSET(0x10C83CE0)

inline static constexpr unsigned int Class_2_32CF1E69309B93DF_TypeDefinitionIndex = 42833;

class Class_2_32CF1E69309B93DF : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_32CF1E69309B93DF*>
{
public:
	::MoleMole::EntityHandle Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_87BFEF6DA87B3611()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_87BFEF6DA87B3611_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
