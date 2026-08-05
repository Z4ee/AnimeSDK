#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow01RoleContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_3AC406B7A7149EA7_METHOD_2_7A4DA50406643EC6_1_OFFSET UNITYSDK_OFFSET(0x1453D9B0)
#define CLASS_2_3AC406B7A7149EA7_METHOD_2_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x1453D630)
#define CLASS_2_3AC406B7A7149EA7_METHOD_2_7D84555C3F963721_OFFSET UNITYSDK_OFFSET(0x1453D800)
#define CLASS_2_3AC406B7A7149EA7_METHOD_2_8DA4249BAB405C79_OFFSET UNITYSDK_OFFSET(0x1453DB80)
#define CLASS_2_3AC406B7A7149EA7_METHOD_2_91888C692DAC5E58_OFFSET UNITYSDK_OFFSET(0x1453D380)
#define CLASS_2_3AC406B7A7149EA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1453D5E0)

inline static constexpr unsigned int Class_2_3AC406B7A7149EA7_TypeDefinitionIndex = 67181;

class Class_2_3AC406B7A7149EA7 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_91888C692DAC5E58(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7_METHOD_2_91888C692DAC5E58_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7_METHOD_2_7A4DA50406643EC6_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_7D84555C3F963721()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7_METHOD_2_7D84555C3F963721_OFFSET))(this);
	}

	::System::Boolean Method_2_7A4DA50406643EC6_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7_METHOD_2_7A4DA50406643EC6_1_OFFSET))(this);
	}

	::System::Void Method_2_8DA4249BAB405C79(::MoleMole::UIUrbanMapLeftTastListRow01RoleContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*))((::PBYTE)hIl2Cpp + CLASS_2_3AC406B7A7149EA7_METHOD_2_8DA4249BAB405C79_OFFSET))(this, a1);
	}
};
