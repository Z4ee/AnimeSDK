#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_98FFFA7C5D9AE91D_METHOD_4_7280B491C803D3E8_OFFSET UNITYSDK_OFFSET(0x199879A0)
#define CLASS_4_98FFFA7C5D9AE91D_METHOD_4_B92733AFFA6C06B2_OFFSET UNITYSDK_OFFSET(0x19987A80)
#define CLASS_4_98FFFA7C5D9AE91D__CTOR_OFFSET UNITYSDK_OFFSET(0x19987A20)

inline static constexpr unsigned int Class_4_98FFFA7C5D9AE91D_TypeDefinitionIndex = 20752;

class Class_4_98FFFA7C5D9AE91D : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_98FFFA7C5D9AE91D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_7280B491C803D3E8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_98FFFA7C5D9AE91D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_98FFFA7C5D9AE91D*&))((::PBYTE)hIl2Cpp + CLASS_4_98FFFA7C5D9AE91D_METHOD_4_7280B491C803D3E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B92733AFFA6C06B2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_98FFFA7C5D9AE91D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_98FFFA7C5D9AE91D*))((::PBYTE)hIl2Cpp + CLASS_4_98FFFA7C5D9AE91D_METHOD_4_B92733AFFA6C06B2_OFFSET))(a1, a2);
	}
};
