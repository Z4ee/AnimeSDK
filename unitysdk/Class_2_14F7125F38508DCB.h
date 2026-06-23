#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRightListRowHintContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_14F7125F38508DCB_METHOD_2_076188C050222996_OFFSET UNITYSDK_OFFSET(0x133A8E90)
#define CLASS_2_14F7125F38508DCB_METHOD_2_11B05DF3A7C1620A_OFFSET UNITYSDK_OFFSET(0x133A91D0)
#define CLASS_2_14F7125F38508DCB_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0x133A9030)
#define CLASS_2_14F7125F38508DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x133A8FE0)

inline static constexpr unsigned int Class_2_14F7125F38508DCB_TypeDefinitionIndex = 80835;

class Class_2_14F7125F38508DCB : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightListRowHintContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F7125F38508DCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_076188C050222996(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_14F7125F38508DCB_METHOD_2_076188C050222996_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_FF7D42127627E96E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F7125F38508DCB_METHOD_2_FF7D42127627E96E_OFFSET))(this);
	}

	::System::Void Method_2_11B05DF3A7C1620A(::MoleMole::UIUrbanMapRightListRowHintContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightListRowHintContext*))((::PBYTE)hIl2Cpp + CLASS_2_14F7125F38508DCB_METHOD_2_11B05DF3A7C1620A_OFFSET))(this, a1);
	}
};
