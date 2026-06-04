#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0F021ECA96048DC9_METHOD_3_3464E46948A9A039_OFFSET UNITYSDK_OFFSET(0x18F90940)
#define CLASS_3_0F021ECA96048DC9_METHOD_3_81A21876F94E504E_OFFSET UNITYSDK_OFFSET(0x18F908C0)
#define CLASS_3_0F021ECA96048DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x18F90910)

inline static constexpr unsigned int Class_3_0F021ECA96048DC9_TypeDefinitionIndex = 22863;

class Class_3_0F021ECA96048DC9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtModifierPropertyOverrideData*>* Field_3_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_81A21876F94E504E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F021ECA96048DC9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F021ECA96048DC9*&))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9_METHOD_3_81A21876F94E504E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3464E46948A9A039(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F021ECA96048DC9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F021ECA96048DC9*))((::PBYTE)hIl2Cpp + CLASS_3_0F021ECA96048DC9_METHOD_3_3464E46948A9A039_OFFSET))(a1, a2);
	}
};
