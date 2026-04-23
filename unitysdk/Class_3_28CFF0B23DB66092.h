#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsForumOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_28CFF0B23DB66092_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x18447220)
#define CLASS_3_28CFF0B23DB66092_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x184472A0)
#define CLASS_3_28CFF0B23DB66092__CTOR_OFFSET UNITYSDK_OFFSET(0x18447270)

inline static constexpr unsigned int Class_3_28CFF0B23DB66092_TypeDefinitionIndex = 10114;

class Class_3_28CFF0B23DB66092 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_1; // 0x18
	::RPG::Client::LimaoNewsForumOperationType Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28CFF0B23DB66092__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_28CFF0B23DB66092*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_28CFF0B23DB66092*&))((::PBYTE)hIl2Cpp + CLASS_3_28CFF0B23DB66092_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_28CFF0B23DB66092* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_28CFF0B23DB66092*))((::PBYTE)hIl2Cpp + CLASS_3_28CFF0B23DB66092_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
