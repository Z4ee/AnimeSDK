#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_21611E8BFC39DB2F_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x16C7EDD0)
#define CLASS_3_21611E8BFC39DB2F_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x16C7EE50)
#define CLASS_3_21611E8BFC39DB2F__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7EE20)

inline static constexpr unsigned int Class_3_21611E8BFC39DB2F_TypeDefinitionIndex = 19666;

class Class_3_21611E8BFC39DB2F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_2; // 0x20
	::System::Boolean Field_3_1; // 0x28
	::System::Boolean Field_3_3; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21611E8BFC39DB2F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_21611E8BFC39DB2F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_21611E8BFC39DB2F*&))((::PBYTE)hIl2Cpp + CLASS_3_21611E8BFC39DB2F_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_21611E8BFC39DB2F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_21611E8BFC39DB2F*))((::PBYTE)hIl2Cpp + CLASS_3_21611E8BFC39DB2F_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
