#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E6F7DC36AD7CF0C0___C_METHOD_1_E636F7E6BCF8B2F2_OFFSET UNITYSDK_OFFSET(0xE533DC0)
#define CLASS_1_E6F7DC36AD7CF0C0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE533D70)
#define CLASS_1_E6F7DC36AD7CF0C0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE533DB0)

inline static constexpr unsigned int Class_1_E6F7DC36AD7CF0C0___c_TypeDefinitionIndex = 74100;

class Class_1_E6F7DC36AD7CF0C0___c : public ::System::Object
{
public:
	static ::Class_1_E6F7DC36AD7CF0C0___c** StaticGet___9()
	{
		return (::Class_1_E6F7DC36AD7CF0C0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6F7DC36AD7CF0C0___c_TypeDefinitionIndex)->GetStaticField(0x37300);
	}
	static ::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6F7DC36AD7CF0C0___c_TypeDefinitionIndex)->GetStaticField(0x37308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6F7DC36AD7CF0C0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F7DC36AD7CF0C0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E636F7E6BCF8B2F2(::MoleMole::ConfigTimelineDataExtra* a1, ::MoleMole::ConfigTimelineDataExtra* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CLASS_1_E6F7DC36AD7CF0C0___C_METHOD_1_E636F7E6BCF8B2F2_OFFSET))(this, a1, a2);
	}
};
