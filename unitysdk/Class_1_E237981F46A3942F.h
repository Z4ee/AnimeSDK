#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_406;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define CLASS_1_E237981F46A3942F_METHOD_1_075FB83861D06F32_OFFSET UNITYSDK_OFFSET(0xA9414F0)
#define CLASS_1_E237981F46A3942F_METHOD_1_14E5136739BC7654_OFFSET UNITYSDK_OFFSET(0xA941710)
#define CLASS_1_E237981F46A3942F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA941670)
#define CLASS_1_E237981F46A3942F_METHOD_1_513E26C0006A0592_OFFSET UNITYSDK_OFFSET(0xA941360)
#define CLASS_1_E237981F46A3942F__CTOR_OFFSET UNITYSDK_OFFSET(0xA9412B0)

inline static constexpr unsigned int Class_1_E237981F46A3942F_TypeDefinitionIndex = 48598;

class Class_1_E237981F46A3942F : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_406*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_513E26C0006A0592(::MoleMole::UIBaseController* a1, ::Class_0_16E4307DCC419505_406* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_406*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_513E26C0006A0592_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_075FB83861D06F32(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_075FB83861D06F32_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_406* Method_1_14E5136739BC7654(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_406*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E237981F46A3942F_METHOD_1_14E5136739BC7654_OFFSET))(this, a1, a2);
	}
};
