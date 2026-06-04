#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_720948D49026633D;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_3EED698C7D00D221_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x1919F8D0)
#define CLASS_3_3EED698C7D00D221_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1919F960)
#define CLASS_3_3EED698C7D00D221__CTOR_OFFSET UNITYSDK_OFFSET(0x1919F930)

inline static constexpr unsigned int Class_3_3EED698C7D00D221_TypeDefinitionIndex = 21621;

class Class_3_3EED698C7D00D221 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::Class_2_720948D49026633D* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::Class_2_720948D49026633D* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x48
	::System::String* Field_3_7; // 0x50
	::RPG::GameCore::DynamicFloat* Field_3_8; // 0x58
	::System::Boolean Field_3_9; // 0x60
	::System::Boolean Field_3_10; // 0x61
	::System::Boolean Field_3_11; // 0x62

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EED698C7D00D221__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3EED698C7D00D221*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3EED698C7D00D221*&))((::PBYTE)hIl2Cpp + CLASS_3_3EED698C7D00D221_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3EED698C7D00D221* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3EED698C7D00D221*))((::PBYTE)hIl2Cpp + CLASS_3_3EED698C7D00D221_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
