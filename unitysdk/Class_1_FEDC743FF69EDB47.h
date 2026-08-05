#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C4E182242E3E9AF6.h"
#include "unitysdk/Struct_2_1B8F7BE563C4A68A.h"
#include "unitysdk/Struct_2_3A004622942516C0.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_1.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/Struct_2_F7D9A87D5D39583B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3E3BE90491DD71C7;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FEDC743FF69EDB47_METHOD_1_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x1346CAE0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_0ABD873703441DA3_OFFSET UNITYSDK_OFFSET(0x1346D060)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_342463BFC7A92A03_OFFSET UNITYSDK_OFFSET(0x13473960)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_63320E40C83A8B11_OFFSET UNITYSDK_OFFSET(0x1346CA20)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_6BBBCF2363A84D57_OFFSET UNITYSDK_OFFSET(0x13473590)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_92B899C479DAC368_OFFSET UNITYSDK_OFFSET(0x1346DBD0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_9EE86727A80FA270_OFFSET UNITYSDK_OFFSET(0x13473400)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_B529488ADCB33E71_OFFSET UNITYSDK_OFFSET(0x1346D3E0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_B7CFB6C39206B4C5_1_OFFSET UNITYSDK_OFFSET(0x13473BE0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_B7CFB6C39206B4C5_OFFSET UNITYSDK_OFFSET(0x13473A90)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_C1E224DB82BCF338_OFFSET UNITYSDK_OFFSET(0x1346CEC0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x1346C670)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_DF325174E6384D03_OFFSET UNITYSDK_OFFSET(0x1346CF30)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_DFB2CD212B3E024C_OFFSET UNITYSDK_OFFSET(0x1346D730)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_E36539046E8A13CC_1_OFFSET UNITYSDK_OFFSET(0x13473AA0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_E36539046E8A13CC_OFFSET UNITYSDK_OFFSET(0x1346DCE0)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_E76929C754422B05_OFFSET UNITYSDK_OFFSET(0x1346DE20)
#define CLASS_1_FEDC743FF69EDB47_METHOD_1_F9D7EC28C3CD48AF_OFFSET UNITYSDK_OFFSET(0x13473270)
#define CLASS_1_FEDC743FF69EDB47__CTOR_OFFSET UNITYSDK_OFFSET(0x1346C560)

inline static constexpr unsigned int Class_1_FEDC743FF69EDB47_TypeDefinitionIndex = 56561;

class Class_1_FEDC743FF69EDB47 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_CECEDD33F79E5905>* Field_1_10; // 0x10
	::System::Func_1<::UnityEngine::Vector3>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_CECEDD33F79E5905>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F7D9A87D5D39583B<::Enum_3_C4E182242E3E9AF6>>* Field_1_4; // 0x30
	::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_3A004622942516C0>* Field_1_7; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC4DC8FB65DC8FF4(::Struct_2_3A004622942516C0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3A004622942516C0))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_63320E40C83A8B11(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_63320E40C83A8B11_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_052FAABF5BB8BE83(::Struct_2_3A004622942516C0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3A004622942516C0))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_052FAABF5BB8BE83_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1E224DB82BCF338(::System::Func_1<::UnityEngine::Vector3>* a1, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_3A004622942516C0>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_3A004622942516C0>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_C1E224DB82BCF338_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF325174E6384D03(::System::Nullable_1<::Struct_2_CECEDD33F79E5905>& a1, ::Struct_2_1B8F7BE563C4A68A& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>&, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_DF325174E6384D03_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_B529488ADCB33E71(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_B529488ADCB33E71_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DFB2CD212B3E024C(::Struct_2_52A902145F5BE51F_1& a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::Struct_2_52A902145F5BE51F_1&, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_DFB2CD212B3E024C_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_E36539046E8A13CC(::Class_2_3E3BE90491DD71C7* a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::Struct_2_1B8F7BE563C4A68A& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3E3BE90491DD71C7*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_E36539046E8A13CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E76929C754422B05(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* a1, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* a2, ::Struct_2_1B8F7BE563C4A68A& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_E76929C754422B05_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_342463BFC7A92A03(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a1, ::Struct_2_1B8F7BE563C4A68A& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_342463BFC7A92A03_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_F9D7EC28C3CD48AF(::UnityEngine::Vector3 a1, ::Struct_2_52A902145F5BE51F_1& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::Struct_2_52A902145F5BE51F_1&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_F9D7EC28C3CD48AF_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>* Method_1_B7CFB6C39206B4C5()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_B7CFB6C39206B4C5_OFFSET))(this);
	}

	::System::Single Method_1_9EE86727A80FA270(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_9EE86727A80FA270_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_92B899C479DAC368(::UnityEngine::Bounds& a1, ::UnityEngine::Plane& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_92B899C479DAC368_OFFSET))(a1, a2);
	}

	::System::Void Method_1_0ABD873703441DA3(::Struct_2_CECEDD33F79E5905& a1, ::Struct_2_1B8F7BE563C4A68A& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CECEDD33F79E5905&, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_0ABD873703441DA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BBBCF2363A84D57(::Struct_2_CECEDD33F79E5905& a1, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* a2, ::Struct_2_1B8F7BE563C4A68A& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CECEDD33F79E5905&, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_6BBBCF2363A84D57_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E36539046E8A13CC_1(::Class_2_3E3BE90491DD71C7* a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::Struct_2_1B8F7BE563C4A68A& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3E3BE90491DD71C7*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::Struct_2_1B8F7BE563C4A68A&))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_E36539046E8A13CC_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>* Method_1_B7CFB6C39206B4C5_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_CECEDD33F79E5905>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDC743FF69EDB47_METHOD_1_B7CFB6C39206B4C5_1_OFFSET))(this);
	}
};
