#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C4E182242E3E9AF6.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_7CB76C200934F0E3.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/Struct_2_F641FF8CBDE96A09.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D50782ACCA129D06;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80427665F2E2AFD0_METHOD_1_0ABD873703441DA3_OFFSET UNITYSDK_OFFSET(0x130C9AE0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_1125A08AE683AE0F_OFFSET UNITYSDK_OFFSET(0x130CAE90)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_1575D52452E722BC_OFFSET UNITYSDK_OFFSET(0x130CB4B0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_25D73DC023DD8024_OFFSET UNITYSDK_OFFSET(0x130C9440)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_539F62B8C39C297F_OFFSET UNITYSDK_OFFSET(0x130CA820)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_92B899C479DAC368_OFFSET UNITYSDK_OFFSET(0x130CA8F0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_959CFB5F13295B23_OFFSET UNITYSDK_OFFSET(0x130CA440)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_9EE86727A80FA270_OFFSET UNITYSDK_OFFSET(0x130CA2B0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_B7CFB6C39206B4C5_1_OFFSET UNITYSDK_OFFSET(0x130CA160)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_B7CFB6C39206B4C5_OFFSET UNITYSDK_OFFSET(0x130C93C0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_C1E224DB82BCF338_OFFSET UNITYSDK_OFFSET(0x130C93D0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_DF325174E6384D03_OFFSET UNITYSDK_OFFSET(0x130C99B0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_DFB2CD212B3E024C_OFFSET UNITYSDK_OFFSET(0x130CAA00)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_E36539046E8A13CC_1_OFFSET UNITYSDK_OFFSET(0x130CDB00)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_E36539046E8A13CC_OFFSET UNITYSDK_OFFSET(0x130CA170)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_F1AA92594DE0F1C1_OFFSET UNITYSDK_OFFSET(0x130CD6C0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_F9D7EC28C3CD48AF_OFFSET UNITYSDK_OFFSET(0x130C9FD0)
#define CLASS_1_80427665F2E2AFD0_METHOD_1_FDB23C4B28F2B654_OFFSET UNITYSDK_OFFSET(0x130C9EA0)
#define CLASS_1_80427665F2E2AFD0__CTOR_OFFSET UNITYSDK_OFFSET(0x130C92B0)

inline static constexpr unsigned int Class_1_80427665F2E2AFD0_TypeDefinitionIndex = 40201;

class Class_1_80427665F2E2AFD0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_CECEDD33F79E5905>* Field_1_6; // 0x10
	::System::Func_1<::UnityEngine::Vector3>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_7CB76C200934F0E3<::Enum_3_C4E182242E3E9AF6>>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_CECEDD33F79E5905>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_3; // 0x30
	::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_F641FF8CBDE96A09>* Field_1_1; // 0x38
	::System::Single Field_1_2; // 0x40
	::System::Single Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>* Method_1_B7CFB6C39206B4C5()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_B7CFB6C39206B4C5_OFFSET))(this);
	}

	::System::Void Method_1_C1E224DB82BCF338(::System::Func_1<::UnityEngine::Vector3>* a1, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_F641FF8CBDE96A09>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_F641FF8CBDE96A09>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_C1E224DB82BCF338_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25D73DC023DD8024(::Struct_2_F641FF8CBDE96A09 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F641FF8CBDE96A09))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_25D73DC023DD8024_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF325174E6384D03(::System::Nullable_1<::Struct_2_CECEDD33F79E5905>& a1, ::Struct_2_52A902145F5BE513& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>&, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_DF325174E6384D03_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FDB23C4B28F2B654(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a1, ::Struct_2_52A902145F5BE513& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_FDB23C4B28F2B654_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_F9D7EC28C3CD48AF(::UnityEngine::Vector3 a1, ::Struct_2_52A902145F5BE51F& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::Struct_2_52A902145F5BE51F&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_F9D7EC28C3CD48AF_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>* Method_1_B7CFB6C39206B4C5_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_B7CFB6C39206B4C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_E36539046E8A13CC(::Class_2_D50782ACCA129D06* a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::Struct_2_52A902145F5BE513& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D50782ACCA129D06*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_E36539046E8A13CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_9EE86727A80FA270(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_9EE86727A80FA270_OFFSET))(this, a1);
	}

	::System::Void Method_1_0ABD873703441DA3(::Struct_2_CECEDD33F79E5905& a1, ::Struct_2_52A902145F5BE513& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CECEDD33F79E5905&, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_0ABD873703441DA3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_539F62B8C39C297F(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_539F62B8C39C297F_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_959CFB5F13295B23(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_959CFB5F13295B23_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_92B899C479DAC368(::UnityEngine::Bounds& a1, ::UnityEngine::Plane& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_92B899C479DAC368_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DFB2CD212B3E024C(::Struct_2_52A902145F5BE51F& a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::Struct_2_52A902145F5BE51F&, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_DFB2CD212B3E024C_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1125A08AE683AE0F(::Struct_2_F641FF8CBDE96A09 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F641FF8CBDE96A09))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_1125A08AE683AE0F_OFFSET))(this, a1);
	}

	::System::Void Method_1_1575D52452E722BC(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* a1, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* a2, ::Struct_2_52A902145F5BE513& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_1575D52452E722BC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F1AA92594DE0F1C1(::Struct_2_CECEDD33F79E5905& a1, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* a2, ::Struct_2_52A902145F5BE513& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CECEDD33F79E5905&, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_F1AA92594DE0F1C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E36539046E8A13CC_1(::Class_2_D50782ACCA129D06* a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::Struct_2_52A902145F5BE513& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D50782ACCA129D06*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_1_80427665F2E2AFD0_METHOD_1_E36539046E8A13CC_1_OFFSET))(this, a1, a2, a3);
	}
};
