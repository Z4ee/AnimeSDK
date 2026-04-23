#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_36E4CA071B73A265;

#define CLASS_3_6703C6C34C6ABE20_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x181F75B0)
#define CLASS_3_6703C6C34C6ABE20_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x181F7530)
#define CLASS_3_6703C6C34C6ABE20__CTOR_OFFSET UNITYSDK_OFFSET(0x181F7580)

inline static constexpr unsigned int Class_3_6703C6C34C6ABE20_TypeDefinitionIndex = 23121;

class Class_3_6703C6C34C6ABE20 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_36E4CA071B73A265*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6703C6C34C6ABE20__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6703C6C34C6ABE20*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6703C6C34C6ABE20*&))((::PBYTE)hIl2Cpp + CLASS_3_6703C6C34C6ABE20_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6703C6C34C6ABE20* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6703C6C34C6ABE20*))((::PBYTE)hIl2Cpp + CLASS_3_6703C6C34C6ABE20_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
