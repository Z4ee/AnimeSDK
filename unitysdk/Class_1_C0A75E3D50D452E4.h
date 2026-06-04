#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class String; }

#define CLASS_1_C0A75E3D50D452E4_COMPARETO_OFFSET UNITYSDK_OFFSET(0xAB16640)
#define CLASS_1_C0A75E3D50D452E4_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xAB16720)
#define CLASS_1_C0A75E3D50D452E4_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xAB16780)
#define CLASS_1_C0A75E3D50D452E4_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xAB16730)
#define CLASS_1_C0A75E3D50D452E4_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xAB16740)
#define CLASS_1_C0A75E3D50D452E4_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xAB16790)
#define CLASS_1_C0A75E3D50D452E4_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xAB165D0)
#define CLASS_1_C0A75E3D50D452E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB166D0)
#define CLASS_1_C0A75E3D50D452E4__CTOR_OFFSET UNITYSDK_OFFSET(0xAB165C0)
#define CLASS_1_C0A75E3D50D452E4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB167A0)

inline static constexpr unsigned int Class_1_C0A75E3D50D452E4_TypeDefinitionIndex = 63225;

class Class_1_C0A75E3D50D452E4 : public ::System::Object
{
public:
	static ::Class_1_C0A75E3D50D452E4** StaticGet_Field_1_0()
	{
		return (::Class_1_C0A75E3D50D452E4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0A75E3D50D452E4_TypeDefinitionIndex)->GetStaticField(0x7930);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4__CTOR_OFFSET))(this);
	}

	static ::Class_1_C0A75E3D50D452E4* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_C0A75E3D50D452E4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_TOSTRING_OFFSET))(this);
	}

	::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
	{
		return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Boolean get_IsHard()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_GET_ISHARD_OFFSET))(this);
	}

	::RPG::Client::TextID get_RomanNumber()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_GET_ROMANNUMBER_OFFSET))(this);
	}

	::System::Boolean get_HasSubLevel()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_GET_HASSUBLEVEL_OFFSET))(this);
	}

	::System::UInt32 get_SubLevelNumber()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4_GET_SUBLEVELNUMBER_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A75E3D50D452E4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
