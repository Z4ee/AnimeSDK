#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIInLevelOnlineRoleTipsWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C777FDB0F8AF9D8_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x165EA2D0)
#define CLASS_1_5C777FDB0F8AF9D8_METHOD_1_4CF1E9146B25F456_OFFSET UNITYSDK_OFFSET(0x165EA4D0)
#define CLASS_1_5C777FDB0F8AF9D8_METHOD_1_6632971549249DA6_OFFSET UNITYSDK_OFFSET(0x165EA6E0)
#define CLASS_1_5C777FDB0F8AF9D8_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x165EA420)
#define CLASS_1_5C777FDB0F8AF9D8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165EA3E0)
#define CLASS_1_5C777FDB0F8AF9D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x165EA230)
#define CLASS_1_5C777FDB0F8AF9D8__CTOR_OFFSET UNITYSDK_OFFSET(0x165EA1B0)

inline static constexpr unsigned int Class_1_5C777FDB0F8AF9D8_TypeDefinitionIndex = 45881;

class Class_1_5C777FDB0F8AF9D8 : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::Class_1_5C777FDB0F8AF9D8*>** StaticGet_Field_1_10()
	{
		return (::Foundation::ObjectPool_1<::Class_1_5C777FDB0F8AF9D8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C777FDB0F8AF9D8_TypeDefinitionIndex)->GetStaticField(0x386D0);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x10
	::MoleMole::UIInLevelOnlineRoleTipsWidgetController* Field_1_11; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x24
	::Enum_3_41536F26CBEE8D4C_1 Field_1_1; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8__CCTOR_OFFSET))();
	}

	static ::Class_1_5C777FDB0F8AF9D8* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_5C777FDB0F8AF9D8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::System::Void Method_1_4CF1E9146B25F456(::System::UInt32 a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8_METHOD_1_4CF1E9146B25F456_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_5C777FDB0F8AF9D8* Method_1_6632971549249DA6()
	{
		return ((::Class_1_5C777FDB0F8AF9D8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C777FDB0F8AF9D8_METHOD_1_6632971549249DA6_OFFSET))();
	}
};
