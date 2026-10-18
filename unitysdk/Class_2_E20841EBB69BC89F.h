#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"
#include "unitysdk/R3/Unit.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E20841EBB69BC89F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC87F20)
#define CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x1EC88080)
#define CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_2_OFFSET UNITYSDK_OFFSET(0x1EC87C10)
#define CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1EC87370)
#define CLASS_2_E20841EBB69BC89F_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1EC87BB0)
#define CLASS_2_E20841EBB69BC89F_SUBSCRIBECORE_OFFSET UNITYSDK_OFFSET(0x1EC87CD0)
#define CLASS_2_E20841EBB69BC89F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC86E40)

inline static constexpr unsigned int Class_2_E20841EBB69BC89F_TypeDefinitionIndex = 44241;

class Class_2_E20841EBB69BC89F : public ::R3::Observable_1<::System::Boolean>
{
public:
	::System::IDisposable* JLPMGIHHHBG; // 0x10
	::System::Action_1<::Class_2_E20841EBB69BC89F*>* IOAEBFCPHCK; // 0x18
	::R3::Subject_1<::R3::Unit>* AAEDJDAIACP; // 0x20
	::System::Boolean KAIJFBNPEAE; // 0x28
	::System::Boolean AFGOLMJALGN; // 0x29
	::System::Boolean GFAMGLFOMGI; // 0x2A

	::System::Void _ctor(::R3::Observable_1<::System::Boolean>* a1, ::System::Boolean a2, ::System::Action_1<::Class_2_E20841EBB69BC89F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*, ::System::Boolean, ::System::Action_1<::Class_2_E20841EBB69BC89F*>*))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::IDisposable* SubscribeCore(::R3::Observer_1<::System::Boolean>* a1)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::R3::Observer_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_SUBSCRIBECORE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F_METHOD_2_19CCC07C980409E4_2_OFFSET))(this, a1);
	}
};
