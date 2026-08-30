#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_8E674185A55892B4_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1CF9BB00)
#define CLASS_3_8E674185A55892B4_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1CF9BB40)
#define CLASS_3_8E674185A55892B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9BB30)

inline static constexpr unsigned int Class_3_8E674185A55892B4_TypeDefinitionIndex = 23449;

class Class_3_8E674185A55892B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* DPJIJDKJFJL; // 0x28
	::System::String* NHMCBAJHOLP; // 0x30
	::System::String* KFEANGGPLGP; // 0x38
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8E674185A55892B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8E674185A55892B4*&))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8E674185A55892B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8E674185A55892B4*))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
