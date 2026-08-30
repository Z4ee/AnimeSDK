#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_8E56BCC8BC47354E_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x16F391C0)
#define CLASS_4_8E56BCC8BC47354E_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x16F39200)
#define CLASS_4_8E56BCC8BC47354E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F391F0)

inline static constexpr unsigned int Class_4_8E56BCC8BC47354E_TypeDefinitionIndex = 22199;

class Class_4_8E56BCC8BC47354E : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* LNFFCDHBNGG; // 0x18
	::System::String* LLOBIMGOPOP; // 0x20
	::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E56BCC8BC47354E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8E56BCC8BC47354E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8E56BCC8BC47354E*&))((::PBYTE)hIl2Cpp + CLASS_4_8E56BCC8BC47354E_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8E56BCC8BC47354E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8E56BCC8BC47354E*))((::PBYTE)hIl2Cpp + CLASS_4_8E56BCC8BC47354E_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};
