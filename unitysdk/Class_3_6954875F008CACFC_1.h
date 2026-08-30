#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6954875F008CACFC_1_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1C72BAD0)
#define CLASS_3_6954875F008CACFC_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1C72BB10)
#define CLASS_3_6954875F008CACFC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72BB00)

inline static constexpr unsigned int Class_3_6954875F008CACFC_1_TypeDefinitionIndex = 21576;

class Class_3_6954875F008CACFC_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* DHMDAEKJENF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6954875F008CACFC_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6954875F008CACFC_1*&))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_1_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6954875F008CACFC_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6954875F008CACFC_1*))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
