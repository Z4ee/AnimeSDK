#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_64C5F1782CF2062E_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x19250370)
#define CLASS_4_64C5F1782CF2062E_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x192502A0)
#define CLASS_4_64C5F1782CF2062E__CTOR_OFFSET UNITYSDK_OFFSET(0x19250320)

inline static constexpr unsigned int Class_4_64C5F1782CF2062E_TypeDefinitionIndex = 21217;

class Class_4_64C5F1782CF2062E : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x18
	::System::String* Field_4_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x28
	::RPG::GameCore::STTaskExecutePhase Field_4_3; // 0x30
	::System::Boolean Field_4_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_64C5F1782CF2062E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_64C5F1782CF2062E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_64C5F1782CF2062E*&))((::PBYTE)hIl2Cpp + CLASS_4_64C5F1782CF2062E_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_64C5F1782CF2062E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_64C5F1782CF2062E*))((::PBYTE)hIl2Cpp + CLASS_4_64C5F1782CF2062E_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};
