#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_423CACE4E139A4B8_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CC57B30)
#define CLASS_3_423CACE4E139A4B8_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1CC57AE0)
#define CLASS_3_423CACE4E139A4B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC57B20)

inline static constexpr unsigned int Class_3_423CACE4E139A4B8_TypeDefinitionIndex = 22349;

class Class_3_423CACE4E139A4B8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* FHLJGDGMMHK; // 0x20
	::System::Boolean EKCOLKIKCHO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_423CACE4E139A4B8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_423CACE4E139A4B8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_423CACE4E139A4B8*&))((::PBYTE)hIl2Cpp + CLASS_3_423CACE4E139A4B8_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_423CACE4E139A4B8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_423CACE4E139A4B8*))((::PBYTE)hIl2Cpp + CLASS_3_423CACE4E139A4B8_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
