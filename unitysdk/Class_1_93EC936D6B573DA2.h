#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_93EC936D6B573DA2_METHOD_1_7D943A9BCF65B455_OFFSET UNITYSDK_OFFSET(0x19128750)
#define CLASS_1_93EC936D6B573DA2_METHOD_1_D7AE7665A3425DE9_OFFSET UNITYSDK_OFFSET(0x191287F0)
#define CLASS_1_93EC936D6B573DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x19128880)

inline static constexpr unsigned int Class_1_93EC936D6B573DA2_TypeDefinitionIndex = 54986;

class Class_1_93EC936D6B573DA2 : public ::System::Object
{
public:
	::Class_1_1C30CE192ABE4C54* NCMDGGHBPFD; // 0x10
	::Class_1_93EC936D6B573DA2* BNLCCCCMABF; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93EC936D6B573DA2__CTOR_OFFSET))(this);
	}

	::Class_1_1C30CE192ABE4C54* Method_1_7D943A9BCF65B455(::RPG::GameCore::StringHash a1)
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_93EC936D6B573DA2_METHOD_1_7D943A9BCF65B455_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_1_D7AE7665A3425DE9(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_93EC936D6B573DA2_METHOD_1_D7AE7665A3425DE9_OFFSET))(this, a1);
	}
};
