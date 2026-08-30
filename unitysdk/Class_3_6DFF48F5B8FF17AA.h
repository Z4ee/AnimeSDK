#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6DFF48F5B8FF17AA_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1C8032D0)
#define CLASS_3_6DFF48F5B8FF17AA_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1C803370)
#define CLASS_3_6DFF48F5B8FF17AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C803330)

inline static constexpr unsigned int Class_3_6DFF48F5B8FF17AA_TypeDefinitionIndex = 20828;

class Class_3_6DFF48F5B8FF17AA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Single HKGPLKJOCDH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DFF48F5B8FF17AA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DFF48F5B8FF17AA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DFF48F5B8FF17AA*&))((::PBYTE)hIl2Cpp + CLASS_3_6DFF48F5B8FF17AA_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DFF48F5B8FF17AA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DFF48F5B8FF17AA*))((::PBYTE)hIl2Cpp + CLASS_3_6DFF48F5B8FF17AA_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
