#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_813;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_2_FA7C91D2F7CF66BC;

#define CLASS_1_E237981F46A3942F_METHOD_1_075FB83861D06F32_OFFSET UNITYSDK_OFFSET(0x1766ADA0)
#define CLASS_1_E237981F46A3942F_METHOD_1_14E5136739BC7654_OFFSET UNITYSDK_OFFSET(0x1766AB30)
#define CLASS_1_E237981F46A3942F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1766A900)
#define CLASS_1_E237981F46A3942F_METHOD_1_513E26C0006A0592_OFFSET UNITYSDK_OFFSET(0x1766A9A0)
#define CLASS_1_E237981F46A3942F__CTOR_OFFSET UNITYSDK_OFFSET(0x1766A850)

inline static constexpr unsigned int Class_1_E237981F46A3942F_TypeDefinitionIndex = 90879;

class Class_1_E237981F46A3942F : public ::System::Object
{
public:
	::Class_2_FA7C91D2F7CF66BC<::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_813*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_513E26C0006A0592(::MoleMole::UIBaseController* a1, ::Class_0_16E4307DCC419505_813* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_813*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_513E26C0006A0592_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_813* Method_1_14E5136739BC7654(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_813*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_14E5136739BC7654_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_075FB83861D06F32(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_075FB83861D06F32_OFFSET))(this, a1);
	}
};
