#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"
#include "unitysdk/Class_2_4A6CCBF4B50B37E8_Enum_3_31CEC0C035193BA9.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_20A4F4259B985034_OFFSET UNITYSDK_OFFSET(0x16E01000)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x16E00350)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_4C39746E51A5C1EF_OFFSET UNITYSDK_OFFSET(0x16E00D60)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x16E003D0)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_7BA25A064A240B5C_OFFSET UNITYSDK_OFFSET(0x16E006E0)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0x16E00470)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x16E00F80)
#define CLASS_2_4A6CCBF4B50B37E8_METHOD_2_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0x16DFFBC0)
#define CLASS_2_4A6CCBF4B50B37E8__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFFBB0)

inline static constexpr unsigned int Class_2_4A6CCBF4B50B37E8_TypeDefinitionIndex = 64429;

class Class_2_4A6CCBF4B50B37E8 : public ::Class_1_480FC3B3774489BF
{
public:
	static ::Class_2_4A6CCBF4B50B37E8_Enum_3_31CEC0C035193BA9* StaticGet_Field_2_0()
	{
		return (::Class_2_4A6CCBF4B50B37E8_Enum_3_31CEC0C035193BA9*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A6CCBF4B50B37E8_TypeDefinitionIndex)->GetStaticField(0xC730);
	}

	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_CF27EDB12528CE39_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_C7E039FB0453A06F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_C7E039FB0453A06F_OFFSET))(a1);
	}

	static ::System::Void Method_2_4C39746E51A5C1EF(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_4C39746E51A5C1EF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_CE18697B63E52504_OFFSET))();
	}

	static ::Class_2_4A6CCBF4B50B37E8_Enum_3_31CEC0C035193BA9 Method_2_20A4F4259B985034()
	{
		return ((::Class_2_4A6CCBF4B50B37E8_Enum_3_31CEC0C035193BA9(*)())((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_20A4F4259B985034_OFFSET))();
	}

	static ::System::Void Method_2_7BA25A064A240B5C(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A6CCBF4B50B37E8_METHOD_2_7BA25A064A240B5C_OFFSET))(a1, a2, a3, a4);
	}
};
