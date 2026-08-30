#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D90F30BC090D5446_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1C943210)
#define CLASS_3_D90F30BC090D5446_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1C9431D0)
#define CLASS_3_D90F30BC090D5446__CTOR_OFFSET UNITYSDK_OFFSET(0x1C943200)

inline static constexpr unsigned int Class_3_D90F30BC090D5446_TypeDefinitionIndex = 23451;

class Class_3_D90F30BC090D5446 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GPOICLIDHEH; // 0x18
	::RPG::GameCore::TargetEvaluator* BPCHFCBIOEB; // 0x20
	::RPG::GameCore::TargetEvaluator* KKJIDEIGBIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90F30BC090D5446__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D90F30BC090D5446*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D90F30BC090D5446*&))((::PBYTE)hIl2Cpp + CLASS_3_D90F30BC090D5446_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D90F30BC090D5446* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D90F30BC090D5446*))((::PBYTE)hIl2Cpp + CLASS_3_D90F30BC090D5446_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
