#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_F2238C1CD159CABC_1_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x197707C0)
#define CLASS_3_F2238C1CD159CABC_1_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x19770890)
#define CLASS_3_F2238C1CD159CABC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19770840)

inline static constexpr unsigned int Class_3_F2238C1CD159CABC_1_TypeDefinitionIndex = 21867;

class Class_3_F2238C1CD159CABC_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2238C1CD159CABC_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F2238C1CD159CABC_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F2238C1CD159CABC_1*&))((::PBYTE)hIl2Cpp + CLASS_3_F2238C1CD159CABC_1_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F2238C1CD159CABC_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F2238C1CD159CABC_1*))((::PBYTE)hIl2Cpp + CLASS_3_F2238C1CD159CABC_1_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
