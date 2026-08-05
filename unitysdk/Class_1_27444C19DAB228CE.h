#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeviceType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class DevicePhysicalData; }
namespace MoleMole { class DevicePhysicalPadingData; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_1_OFFSET UNITYSDK_OFFSET(0x13CD2640)
#define CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_OFFSET UNITYSDK_OFFSET(0x13CD1560)
#define CLASS_1_27444C19DAB228CE_METHOD_1_08FE6E442A19B10E_OFFSET UNITYSDK_OFFSET(0x13CD2980)
#define CLASS_1_27444C19DAB228CE_METHOD_1_093EA43DB4ED711A_OFFSET UNITYSDK_OFFSET(0x13CD26C0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_0BABA9B9DB990C03_OFFSET UNITYSDK_OFFSET(0x13CD20E0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_2942C5D71FB9D518_OFFSET UNITYSDK_OFFSET(0x13CD2E20)
#define CLASS_1_27444C19DAB228CE_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x13CD15E0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_4E30EAD831ABAB2E_OFFSET UNITYSDK_OFFSET(0x13CD2B60)
#define CLASS_1_27444C19DAB228CE_METHOD_1_58EBACEA953BF8BD_OFFSET UNITYSDK_OFFSET(0x13CD1AE0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_1_OFFSET UNITYSDK_OFFSET(0x13CD2AA0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_OFFSET UNITYSDK_OFFSET(0x13CD1F80)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6A5C7F4041315572_OFFSET UNITYSDK_OFFSET(0x13CD2D10)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6BB0D0298525DBFB_OFFSET UNITYSDK_OFFSET(0x13CD25B0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x13CD2400)
#define CLASS_1_27444C19DAB228CE_METHOD_1_97F950E714FD8F2B_OFFSET UNITYSDK_OFFSET(0x13CD27A0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_9B69C5437360C3AB_OFFSET UNITYSDK_OFFSET(0x13CD1800)
#define CLASS_1_27444C19DAB228CE_METHOD_1_C45A7C148E83C429_OFFSET UNITYSDK_OFFSET(0x13CD1D70)
#define CLASS_1_27444C19DAB228CE_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x13CD3040)
#define CLASS_1_27444C19DAB228CE_METHOD_1_EC51DBC6B6B2501B_OFFSET UNITYSDK_OFFSET(0x13CD2050)
#define CLASS_1_27444C19DAB228CE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x13CD2370)
#define CLASS_1_27444C19DAB228CE_METHOD_1_FDA309F11AC8B46B_OFFSET UNITYSDK_OFFSET(0x13CD2C30)
#define CLASS_1_27444C19DAB228CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD1530)

inline static constexpr unsigned int Class_1_27444C19DAB228CE_TypeDefinitionIndex = 91359;

class Class_1_27444C19DAB228CE : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIAdapt** StaticGet_Field_1_2()
	{
		return (::MoleMole::ConfigUIAdapt**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x38780);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x38788);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0xD690);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0xD691);
	}
	static ::UnityEngine::DeviceType* StaticGet_Field_1_6()
	{
		return (::UnityEngine::DeviceType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0xD694);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0xD698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_00188D2AAFE2BA67(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIAdaptData* Method_1_9B69C5437360C3AB(::System::String* a1, ::Enum_3_3EDF246633A325B0 a2)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::Enum_3_3EDF246633A325B0))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_9B69C5437360C3AB_OFFSET))(a1, a2);
	}

	static ::MoleMole::DeviceAdaptData* Method_1_58EBACEA953BF8BD(::System::String* a1)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_58EBACEA953BF8BD_OFFSET))(a1);
	}

	static ::System::Single Method_1_C45A7C148E83C429(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_C45A7C148E83C429_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EC51DBC6B6B2501B(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_EC51DBC6B6B2501B_OFFSET))(a1);
	}

	static ::MoleMole::DevicePhysicalPadingData* Method_1_0BABA9B9DB990C03(::System::String* a1)
	{
		return ((::MoleMole::DevicePhysicalPadingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_0BABA9B9DB990C03_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_1_00188D2AAFE2BA67_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_093EA43DB4ED711A(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_093EA43DB4ED711A_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::GlobalPaddingData* Method_1_97F950E714FD8F2B(::System::String* a1)
	{
		return ((::MoleMole::GlobalPaddingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_97F950E714FD8F2B_OFFSET))(a1);
	}

	static ::System::String* Method_1_08FE6E442A19B10E(::System::Boolean a1)
	{
		return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_08FE6E442A19B10E_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BB0D0298525DBFB(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6BB0D0298525DBFB_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_6308C232BF6C33AE(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_6308C232BF6C33AE_1(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_1_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::UIAdaptData* Method_1_4E30EAD831ABAB2E(::System::String* a1, ::Enum_3_3EDF246633A325B0 a2)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::Enum_3_3EDF246633A325B0))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_4E30EAD831ABAB2E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FDA309F11AC8B46B(::UnityEngine::Camera* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_FDA309F11AC8B46B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::DeviceType Method_1_6A5C7F4041315572(::System::Boolean a1)
	{
		return ((::UnityEngine::DeviceType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6A5C7F4041315572_OFFSET))(a1);
	}

	static ::MoleMole::DevicePhysicalData* Method_1_2942C5D71FB9D518(::System::String* a1)
	{
		return ((::MoleMole::DevicePhysicalData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_2942C5D71FB9D518_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}
};
