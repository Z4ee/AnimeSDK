#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_52A694DEA629AAF2_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x1872B770)
#define CLASS_1_52A694DEA629AAF2_METHOD_1_5C79EB279B70B70D_OFFSET UNITYSDK_OFFSET(0x1872B590)
#define CLASS_1_52A694DEA629AAF2_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x1872BEF0)
#define CLASS_1_52A694DEA629AAF2_METHOD_1_C39BCD4770A2AE60_OFFSET UNITYSDK_OFFSET(0x1872BF90)
#define CLASS_1_52A694DEA629AAF2_METHOD_1_ECE7E97E6C9FEF70_OFFSET UNITYSDK_OFFSET(0x1872A9F0)
#define CLASS_1_52A694DEA629AAF2_METHOD_1_F133162ABA946CC7_OFFSET UNITYSDK_OFFSET(0x1872BA30)
#define CLASS_1_52A694DEA629AAF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1872A920)

inline static constexpr unsigned int Class_1_52A694DEA629AAF2_TypeDefinitionIndex = 46044;

class Class_1_52A694DEA629AAF2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::UIBangkovItemInfoWidgetController*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::UIBangkovItemInfoWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52A694DEA629AAF2_TypeDefinitionIndex)->GetStaticField(0x3B6E0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52A694DEA629AAF2_TypeDefinitionIndex)->GetStaticField(0xE060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_ECE7E97E6C9FEF70(::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_ECE7E97E6C9FEF70_OFFSET))(a1);
	}

	static ::System::Void Method_1_5C79EB279B70B70D(::MoleMole::UIBangkovItemInfoWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_5C79EB279B70B70D_OFFSET))(a1);
	}

	static ::System::Void Method_1_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_585E2EA201FDE7ED_OFFSET))();
	}

	static ::System::Boolean Method_1_F133162ABA946CC7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_F133162ABA946CC7_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_C39BCD4770A2AE60(::MoleMole::UIBangkovItemInfoWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_52A694DEA629AAF2_METHOD_1_C39BCD4770A2AE60_OFFSET))(a1);
	}
};
