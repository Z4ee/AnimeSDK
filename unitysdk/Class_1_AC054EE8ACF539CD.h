#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2768AF8030FDF1BC;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_AC054EE8ACF539CD_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16773980)
#define CLASS_1_AC054EE8ACF539CD_METHOD_1_98816D470243CCFA_OFFSET UNITYSDK_OFFSET(0x16773CD0)
#define CLASS_1_AC054EE8ACF539CD_METHOD_1_A51E1A43FA3F52D4_OFFSET UNITYSDK_OFFSET(0x167739E0)
#define CLASS_1_AC054EE8ACF539CD__CTOR_OFFSET UNITYSDK_OFFSET(0x16773C80)

inline static constexpr unsigned int Class_1_AC054EE8ACF539CD_TypeDefinitionIndex = 59825;

class Class_1_AC054EE8ACF539CD : public ::System::Object
{
public:
	::Class_1_2768AF8030FDF1BC* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_2768AF8030FDF1BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2768AF8030FDF1BC*))((::PBYTE)hIl2Cpp + CLASS_1_AC054EE8ACF539CD__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC054EE8ACF539CD_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_A51E1A43FA3F52D4()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC054EE8ACF539CD_METHOD_1_A51E1A43FA3F52D4_OFFSET))(this);
	}

	::System::Void Method_1_98816D470243CCFA(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_AC054EE8ACF539CD_METHOD_1_98816D470243CCFA_OFFSET))(this, a1);
	}
};
