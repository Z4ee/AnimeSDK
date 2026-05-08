#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_82DB4DCE7147BB58;

#define CLASS_1_06B7B80623C641D0_METHOD_1_4998F1100BD2735C_OFFSET UNITYSDK_OFFSET(0x11357330)
#define CLASS_1_06B7B80623C641D0_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x11357210)
#define CLASS_1_06B7B80623C641D0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x11357280)
#define CLASS_1_06B7B80623C641D0_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x11357310)
#define CLASS_1_06B7B80623C641D0_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x113572F0)
#define CLASS_1_06B7B80623C641D0__CTOR_OFFSET UNITYSDK_OFFSET(0x11357130)

inline static constexpr unsigned int Class_1_06B7B80623C641D0_TypeDefinitionIndex = 60589;

class Class_1_06B7B80623C641D0 : public ::System::Object
{
public:
	::Class_1_82DB4DCE7147BB58* Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Void Method_1_4998F1100BD2735C(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_1_06B7B80623C641D0_METHOD_1_4998F1100BD2735C_OFFSET))(this, a1);
	}
};
