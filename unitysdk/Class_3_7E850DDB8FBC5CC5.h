#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_7E850DDB8FBC5CC5_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x1CB86BD0)
#define CLASS_3_7E850DDB8FBC5CC5_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x1CB86B80)
#define CLASS_3_7E850DDB8FBC5CC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB86BC0)

inline static constexpr unsigned int Class_3_7E850DDB8FBC5CC5_TypeDefinitionIndex = 21706;

class Class_3_7E850DDB8FBC5CC5 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* JNFIMJCGHHG; // 0x18
	::System::String* HACNFPHPJJI; // 0x20
	::System::UInt32 DFEJABODPGM; // 0x28
	::System::UInt32 LGNNJDNJPJA; // 0x2C
	::System::Boolean LIACIODABKH; // 0x30
	::System::Boolean MIHCGIAMIGE; // 0x31
	::System::Single DONJLCGKLMB; // 0x34
	::System::UInt32 DLCKGFJLONK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E850DDB8FBC5CC5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7E850DDB8FBC5CC5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7E850DDB8FBC5CC5*&))((::PBYTE)hIl2Cpp + CLASS_3_7E850DDB8FBC5CC5_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7E850DDB8FBC5CC5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_3_7E850DDB8FBC5CC5_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
