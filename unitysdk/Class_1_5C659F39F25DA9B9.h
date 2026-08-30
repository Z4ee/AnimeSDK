#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueCompositionTypeDisableOperation.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5C659F39F25DA9B9_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1CF95CD0)
#define CLASS_1_5C659F39F25DA9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96170)

inline static constexpr unsigned int Class_1_5C659F39F25DA9B9_TypeDefinitionIndex = 14888;

class Class_1_5C659F39F25DA9B9 : public ::System::Object
{
public:
	::System::String* CILPGJAFCOK; // 0x10
	::Il2CppArray<::RPG::GameCore::RogueCompositionTypeDisableOperation>* ENFPMJCLEON; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::RPG::Client::TextID LJPBJNANBLB; // 0x28
	::RPG::Client::TextID NMAHGFAPENI; // 0x38
	::RPG::Client::TextID BAAOGIMCALN; // 0x48
	::System::UInt32 LLICIMBCNPF; // 0x58
	::System::Boolean LOBGFEKCOHM; // 0x5C
	::System::UInt32 HCBADDHNIDG; // 0x60
	::RPG::GameCore::RogueTournPersonaRoomBgColorType JPLIONFJGCL; // 0x64
	::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C659F39F25DA9B9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5C659F39F25DA9B9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5C659F39F25DA9B9*&))((::PBYTE)hIl2Cpp + CLASS_1_5C659F39F25DA9B9_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
