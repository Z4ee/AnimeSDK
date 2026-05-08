#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"

class Class_1_50459AA2C7E65196;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x131A9F50)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_2AF61B2DFEB051F7_OFFSET UNITYSDK_OFFSET(0x131A9F00)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x131AA020)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_68759781448B9EED_OFFSET UNITYSDK_OFFSET(0x131A8DC0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_7576DADD8072923F_OFFSET UNITYSDK_OFFSET(0x131A94A0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_8AC9D17077652E69_OFFSET UNITYSDK_OFFSET(0x131A92B0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_A5220E733DA1B6FA_OFFSET UNITYSDK_OFFSET(0x131A8CF0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x131A8CE0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_E3D2751300FA8C88_OFFSET UNITYSDK_OFFSET(0x131A9B20)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x131AA0B0)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x131AA160)
#define CLASS_2_6FFCCE3874ACB2DA_METHOD_2_F4229A06261C6F3B_OFFSET UNITYSDK_OFFSET(0x131A9800)
#define CLASS_2_6FFCCE3874ACB2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x131A9FC0)

inline static constexpr unsigned int Class_2_6FFCCE3874ACB2DA_TypeDefinitionIndex = 70044;

class Class_2_6FFCCE3874ACB2DA : public ::Class_1_2A3859B4230FECE9
{
public:
	::Class_1_50459AA2C7E65196* Field_2_0; // 0x38
	::Class_1_50459AA2C7E65196* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x48
	::System::Single Field_2_4; // 0x50
	::System::Single Field_2_3; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_A5220E733DA1B6FA(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_A5220E733DA1B6FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68759781448B9EED(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_68759781448B9EED_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E3D2751300FA8C88(::System::Single a1, ::Cinemachine::CameraState& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_E3D2751300FA8C88_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_2AF61B2DFEB051F7(::Class_1_50459AA2C7E65196* a1, ::Class_1_50459AA2C7E65196* a2)
	{
		return ((::System::Void(*)(::Class_1_50459AA2C7E65196*, ::Class_1_50459AA2C7E65196*))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_2AF61B2DFEB051F7_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F4229A06261C6F3B(::Class_1_50459AA2C7E65196* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_50459AA2C7E65196*))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_F4229A06261C6F3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AC9D17077652E69(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_8AC9D17077652E69_OFFSET))(this, a1);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7576DADD8072923F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6FFCCE3874ACB2DA_METHOD_2_7576DADD8072923F_OFFSET))(this, a1);
	}
};
