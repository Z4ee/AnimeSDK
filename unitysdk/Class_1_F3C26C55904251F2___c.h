#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F3C26C55904251F2___C_METHOD_1_71E1DE8E426E3294_OFFSET UNITYSDK_OFFSET(0x163DB430)
#define CLASS_1_F3C26C55904251F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163DB3E0)
#define CLASS_1_F3C26C55904251F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163DB420)

inline static constexpr unsigned int Class_1_F3C26C55904251F2___c_TypeDefinitionIndex = 52348;

class Class_1_F3C26C55904251F2___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::ConfigTimelineData*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTimelineData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3C26C55904251F2___c_TypeDefinitionIndex)->GetStaticField(0x42060);
	}
	static ::Class_1_F3C26C55904251F2___c** StaticGet___9()
	{
		return (::Class_1_F3C26C55904251F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3C26C55904251F2___c_TypeDefinitionIndex)->GetStaticField(0x42068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_71E1DE8E426E3294(::MoleMole::ConfigTimelineData* a1, ::MoleMole::ConfigTimelineData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTimelineData*, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2___C_METHOD_1_71E1DE8E426E3294_OFFSET))(this, a1, a2);
	}
};
