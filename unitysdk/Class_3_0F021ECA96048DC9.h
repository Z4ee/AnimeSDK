#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0F021ECA96048DC9_METHOD_3_3464E46948A9A039_OFFSET UNITYSDK_OFFSET(0x1ADF0160)
#define CLASS_3_0F021ECA96048DC9_METHOD_3_F39F86C4A9457EE8_OFFSET UNITYSDK_OFFSET(0x1ADF0120)
#define CLASS_3_0F021ECA96048DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF0150)

inline static constexpr unsigned int Class_3_0F021ECA96048DC9_TypeDefinitionIndex = 23910;

class Class_3_0F021ECA96048DC9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* DNLHMCNMCBC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x20
	::System::String* IFNAGLOMHBK; // 0x28
	::Il2CppArray<::RPG::GameCore::RtModifierPropertyOverrideData*>* FBEBNLOPIBL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F39F86C4A9457EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F021ECA96048DC9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F021ECA96048DC9*&))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9_METHOD_3_F39F86C4A9457EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3464E46948A9A039(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F021ECA96048DC9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F021ECA96048DC9*))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9_METHOD_3_3464E46948A9A039_OFFSET))(a1, a2);
	}
};
