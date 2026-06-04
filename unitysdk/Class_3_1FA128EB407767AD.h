#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_1FA128EB407767AD_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x19299240)
#define CLASS_3_1FA128EB407767AD_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x192992D0)
#define CLASS_3_1FA128EB407767AD__CTOR_OFFSET UNITYSDK_OFFSET(0x192992A0)

inline static constexpr unsigned int Class_3_1FA128EB407767AD_TypeDefinitionIndex = 21155;

class Class_3_1FA128EB407767AD : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FA128EB407767AD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1FA128EB407767AD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1FA128EB407767AD*&))((::PBYTE)hIl2Cpp + CLASS_3_1FA128EB407767AD_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1FA128EB407767AD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1FA128EB407767AD*))((::PBYTE)hIl2Cpp + CLASS_3_1FA128EB407767AD_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
