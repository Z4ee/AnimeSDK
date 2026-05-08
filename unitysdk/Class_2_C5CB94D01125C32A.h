#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow01RoleContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_C5CB94D01125C32A_METHOD_2_0D9C76C4B2D944F5_OFFSET UNITYSDK_OFFSET(0x1369D450)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_7A4DA50406643EC6_1_OFFSET UNITYSDK_OFFSET(0x1369DBC0)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x1369D9E0)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_7D84555C3F963721_OFFSET UNITYSDK_OFFSET(0x1369D790)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_8DA4249BAB405C79_OFFSET UNITYSDK_OFFSET(0x1369D940)
#define CLASS_2_C5CB94D01125C32A__CTOR_OFFSET UNITYSDK_OFFSET(0x1369D740)

inline static constexpr unsigned int Class_2_C5CB94D01125C32A_TypeDefinitionIndex = 78888;

class Class_2_C5CB94D01125C32A : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D9C76C4B2D944F5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_0D9C76C4B2D944F5_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_2_7D84555C3F963721()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_7D84555C3F963721_OFFSET))(this);
	}

	::System::Void Method_2_8DA4249BAB405C79(::MoleMole::UIUrbanMapLeftTastListRow01RoleContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_8DA4249BAB405C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_7A4DA50406643EC6_OFFSET))(this);
	}

	::System::Boolean Method_2_7A4DA50406643EC6_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_7A4DA50406643EC6_1_OFFSET))(this);
	}
};
