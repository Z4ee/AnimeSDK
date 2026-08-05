#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
namespace MoleMole { class UIInterKnotForumLevelRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
template <typename T> class Class_0_16E4307DCC419505_155;

#define CLASS_2_8843AD62FD59CB77_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1CB8E530)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_425FA5A5EA0885BD_OFFSET UNITYSDK_OFFSET(0x1CB8E100)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CB8EB10)
#define CLASS_2_8843AD62FD59CB77_METHOD_2_E0E06BDF0362A747_OFFSET UNITYSDK_OFFSET(0x1CB8EA30)
#define CLASS_2_8843AD62FD59CB77__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8E9E0)

inline static constexpr unsigned int Class_2_8843AD62FD59CB77_TypeDefinitionIndex = 84288;

class Class_2_8843AD62FD59CB77 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::Class_0_16E4307DCC419505_155<::MoleMole::UIInterKnotForumLevelRowWidgetController_Data*>* Field_2_0; // 0x58

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

	::System::Collections::IEnumerable* Method_2_E0E06BDF0362A747()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_E0E06BDF0362A747_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8843AD62FD59CB77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
