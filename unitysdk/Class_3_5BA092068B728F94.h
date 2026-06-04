#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_E0E8B7AE6E718844;
namespace System { class String; }

#define CLASS_3_5BA092068B728F94_METHOD_3_59C91D10D1D461D5_OFFSET UNITYSDK_OFFSET(0x18FFAC70)
#define CLASS_3_5BA092068B728F94_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x18FFACF0)
#define CLASS_3_5BA092068B728F94__CTOR_OFFSET UNITYSDK_OFFSET(0x18FFACC0)

inline static constexpr unsigned int Class_3_5BA092068B728F94_TypeDefinitionIndex = 21182;

class Class_3_5BA092068B728F94 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::Class_2_E0E8B7AE6E718844*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BA092068B728F94__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59C91D10D1D461D5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5BA092068B728F94*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5BA092068B728F94*&))((::PBYTE)hIl2Cpp + CLASS_3_5BA092068B728F94_METHOD_3_59C91D10D1D461D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5BA092068B728F94* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5BA092068B728F94*))((::PBYTE)hIl2Cpp + CLASS_3_5BA092068B728F94_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
