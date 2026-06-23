#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
namespace MoleMole { class UIInterKnotForumLevelRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
template <typename T> class Class_0_16E4307DCC419505_145;

#define CLASS_2_8843AD62FD59CB77_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1625FEB0)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_425FA5A5EA0885BD_OFFSET UNITYSDK_OFFSET(0x1625FA80)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0x16260440)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162603B0)
#define CLASS_2_8843AD62FD59CB77__CTOR_OFFSET UNITYSDK_OFFSET(0x16260360)

inline static constexpr unsigned int Class_2_8843AD62FD59CB77_TypeDefinitionIndex = 81457;

class Class_2_8843AD62FD59CB77 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_0_16E4307DCC419505_145<::MoleMole::UIInterKnotForumLevelRowWidgetController_Data*>* Field_2_1; // 0x50
	::MonoUITableScrollV2* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_425FA5A5EA0885BD(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_425FA5A5EA0885BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}
};
