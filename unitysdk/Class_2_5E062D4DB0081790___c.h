#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_938;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5E062D4DB0081790___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B08DE0)
#define CLASS_2_5E062D4DB0081790___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B08E10)
#define CLASS_2_5E062D4DB0081790___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET UNITYSDK_OFFSET(0x12B08E20)

inline static constexpr unsigned int Class_2_5E062D4DB0081790___c_TypeDefinitionIndex = 65857;

class Class_2_5E062D4DB0081790___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_938*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_938*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E062D4DB0081790___c_TypeDefinitionIndex)->GetStaticField(0x49A50);
	}
	static ::Class_2_5E062D4DB0081790___c** StaticGet___9()
	{
		return (::Class_2_5E062D4DB0081790___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E062D4DB0081790___c_TypeDefinitionIndex)->GetStaticField(0x49A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshAvatarHUDPanelSiblingIndex_b__10_0(::Class_0_16E4307DCC419505_938* a, ::Class_0_16E4307DCC419505_938* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_938*, ::Class_0_16E4307DCC419505_938*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET))(this, a, b);
	}
};
