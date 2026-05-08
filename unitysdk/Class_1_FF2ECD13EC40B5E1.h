#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F.h"
#include "unitysdk/Class_1_FF2ECD13EC40B5E1_Struct_2_2673E6B37CEF07BF.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/Struct_2_89669EF743AD9ACD.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_15FFA3F8C5B2DD4F_OFFSET UNITYSDK_OFFSET(0xDEB6740)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xDEB46B0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_61B2A1B49E1DAEBB_OFFSET UNITYSDK_OFFSET(0xDEB5C70)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_630803E44574EC60_OFFSET UNITYSDK_OFFSET(0xDEB5C00)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_68887892A9E0289B_OFFSET UNITYSDK_OFFSET(0xDEB64C0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_72F506570A14E43C_OFFSET UNITYSDK_OFFSET(0xDEB5E00)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_8A5370F4070DF55A_OFFSET UNITYSDK_OFFSET(0xDEB6920)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0xDEB4710)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_90E49A1F2F0734FB_OFFSET UNITYSDK_OFFSET(0xDEB5EF0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_9580FA6D91135FAE_OFFSET UNITYSDK_OFFSET(0xDEB5B30)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_97F653A15EA46B53_OFFSET UNITYSDK_OFFSET(0xDEB5750)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_A6E4C5DEE1077AA6_OFFSET UNITYSDK_OFFSET(0xDEB47F0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDEB68D0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEB5B80)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xDEB4A70)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xDEB5740)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDEB46A0)
#define CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F240EFA7A704696B_OFFSET UNITYSDK_OFFSET(0xDEB4960)
#define CLASS_1_FF2ECD13EC40B5E1__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB4440)

inline static constexpr unsigned int Class_1_FF2ECD13EC40B5E1_TypeDefinitionIndex = 59071;

class Class_1_FF2ECD13EC40B5E1 : public ::System::Object
{
public:
	::System::Nullable_1<::Struct_2_455336A079B58DD3> Field_1_8; // 0x10
	::MoleMole::Cameras::CameraTrackSetting* Field_1_0; // 0x38
	::Foundation::PriorityQueue_2<::MoleMole::Cameras::CameraTrackSetting*, ::System::UInt64>* Field_1_3; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_1_4; // 0x48
	::MoleMole::Cameras::CameraTrackSetting* Field_1_1; // 0x50
	::MoleMole::Cameras::CameraTrackSetting* Field_1_6; // 0x58
	::System::Nullable_1<::Struct_2_89669EF743AD9ACD> Field_1_7; // 0x60
	::Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F Field_1_2; // 0x90
	::System::Double Field_1_9; // 0x1A0
	::System::UInt32 Field_1_5; // 0x1A8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_1_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Single Method_1_F240EFA7A704696B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F240EFA7A704696B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_97F653A15EA46B53(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_97F653A15EA46B53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_630803E44574EC60(::MoleMole::Cameras::CameraTrackSetting* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_630803E44574EC60_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_61B2A1B49E1DAEBB(::System::Int32 a1, ::MoleMole::Cameras::CameraTrackSetting* a2, ::Class_1_FF2ECD13EC40B5E1_Struct_2_2673E6B37CEF07BF& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Cameras::CameraTrackSetting*, ::Class_1_FF2ECD13EC40B5E1_Struct_2_2673E6B37CEF07BF&))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_61B2A1B49E1DAEBB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_72F506570A14E43C(::Class_1_FF2ECD13EC40B5E1_Struct_2_2673E6B37CEF07BF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FF2ECD13EC40B5E1_Struct_2_2673E6B37CEF07BF))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_72F506570A14E43C_OFFSET))(this, a1);
	}

	static ::Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F Method_1_90E49A1F2F0734FB(::MoleMole::Cameras::CameraTrackSetting* a1)
	{
		return ((::Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F(*)(::MoleMole::Cameras::CameraTrackSetting*))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_90E49A1F2F0734FB_OFFSET))(a1);
	}

	::System::Single Method_1_68887892A9E0289B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_68887892A9E0289B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_15FFA3F8C5B2DD4F(::System::Single a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_15FFA3F8C5B2DD4F_OFFSET))(this, a1);
	}

	::Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F& Method_1_9580FA6D91135FAE()
	{
		return ((::Class_1_FF2ECD13EC40B5E1_Struct_2_0F33D881FDB3218F&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_9580FA6D91135FAE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackSetting* Method_1_A6E4C5DEE1077AA6()
	{
		return ((::MoleMole::Cameras::CameraTrackSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_A6E4C5DEE1077AA6_OFFSET))(this);
	}

	::System::Void Method_1_8A5370F4070DF55A(::Struct_2_455336A079B58DD3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_455336A079B58DD3&))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1_METHOD_1_8A5370F4070DF55A_OFFSET))(this, a1);
	}
};
