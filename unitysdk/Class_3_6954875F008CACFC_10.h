#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6954875F008CACFC_10_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1D70D8B0)
#define CLASS_3_6954875F008CACFC_10_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1D70D8F0)
#define CLASS_3_6954875F008CACFC_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1D70D8E0)

inline static constexpr unsigned int Class_3_6954875F008CACFC_10_TypeDefinitionIndex = 23871;

class Class_3_6954875F008CACFC_10 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IEABENMOPFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_10__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6954875F008CACFC_10*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6954875F008CACFC_10*&))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_10_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6954875F008CACFC_10* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6954875F008CACFC_10*))((::PBYTE)hIl2Cpp + CLASS_3_6954875F008CACFC_10_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
