#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_3CE902158D332CDC_METHOD_2_05414D908FAFAF7F_OFFSET UNITYSDK_OFFSET(0x194A77F0)
#define CLASS_2_3CE902158D332CDC_METHOD_2_49E029E8C4CDEB30_OFFSET UNITYSDK_OFFSET(0x194A7D80)
#define CLASS_2_3CE902158D332CDC_METHOD_2_C8CE839E665C417D_OFFSET UNITYSDK_OFFSET(0x194A7A50)
#define CLASS_2_3CE902158D332CDC_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x194A7E10)
#define CLASS_2_3CE902158D332CDC__CTOR_OFFSET UNITYSDK_OFFSET(0x194A7A00)

inline static constexpr unsigned int Class_2_3CE902158D332CDC_TypeDefinitionIndex = 54751;

class Class_2_3CE902158D332CDC : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarItemGatherContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE902158D332CDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_05414D908FAFAF7F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_3CE902158D332CDC_METHOD_2_05414D908FAFAF7F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C8CE839E665C417D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE902158D332CDC_METHOD_2_C8CE839E665C417D_OFFSET))(this);
	}

	::System::Void Method_2_49E029E8C4CDEB30(::MoleMole::UIMainCitySidebarItemGatherContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + CLASS_2_3CE902158D332CDC_METHOD_2_49E029E8C4CDEB30_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE902158D332CDC_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}
};
