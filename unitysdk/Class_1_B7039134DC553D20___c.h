#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"

class Class_1_FCFCC4B97F2390FE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B7039134DC553D20___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B46D50)
#define CLASS_1_B7039134DC553D20___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B46D90)
#define CLASS_1_B7039134DC553D20___C__REPORTJUKEBOXWHITENOISEOPERATE_B__145_0_OFFSET UNITYSDK_OFFSET(0x8B46F40)
#define CLASS_1_B7039134DC553D20___C__REPORTROGUETOURNBUILDREFFILTER_B__9_0_OFFSET UNITYSDK_OFFSET(0x8B46DA0)
#define CLASS_1_B7039134DC553D20___C__REPORTROGUETOURNBUILDREFFILTER_B__9_1_OFFSET UNITYSDK_OFFSET(0x8B46E40)
#define CLASS_1_B7039134DC553D20___C___GENERATEROGUETOURNBUILDREFTEAMMEMBERJSON_B__15_0_OFFSET UNITYSDK_OFFSET(0x8B46EA0)
#define CLASS_1_B7039134DC553D20___C___GENERATESTRINGLIST_B__125_0_OFFSET UNITYSDK_OFFSET(0x8B46EF0)

inline static constexpr unsigned int Class_1_B7039134DC553D20___c_TypeDefinitionIndex = 48609;

class Class_1_B7039134DC553D20___c : public ::System::Object
{
public:
	static ::Class_1_B7039134DC553D20___c** StaticGet___9()
	{
		return (::Class_1_B7039134DC553D20___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C40);
	}
	static ::System::Func_2<::System::Int32, ::UnityEngine::NativeString>** StaticGet___9__9_1()
	{
		return (::System::Func_2<::System::Int32, ::UnityEngine::NativeString>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C48);
	}
	static ::System::Func_2<::System::String*, ::UnityEngine::NativeString>** StaticGet___9__125_0()
	{
		return (::System::Func_2<::System::String*, ::UnityEngine::NativeString>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C50);
	}
	static ::System::Func_2<::Class_1_FCFCC4B97F2390FE*, ::UnityEngine::NativeString>** StaticGet___9__145_0()
	{
		return (::System::Func_2<::Class_1_FCFCC4B97F2390FE*, ::UnityEngine::NativeString>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C58);
	}
	static ::System::Func_2<::RPG::GameCore::AvatarBaseType, ::UnityEngine::NativeString>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::RPG::GameCore::AvatarBaseType, ::UnityEngine::NativeString>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C60);
	}
	static ::System::Func_2<::RPG::Client::MongoObjectId, ::UnityEngine::NativeString>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::RPG::Client::MongoObjectId, ::UnityEngine::NativeString>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7039134DC553D20___c_TypeDefinitionIndex)->GetStaticField(0x46C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::NativeString _ReportRogueTournBuildRefFilter_b__9_0(::RPG::Client::MongoObjectId id)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__REPORTROGUETOURNBUILDREFFILTER_B__9_0_OFFSET))(this, id);
	}

	::UnityEngine::NativeString _ReportRogueTournBuildRefFilter_b__9_1(::System::Int32 id)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__REPORTROGUETOURNBUILDREFFILTER_B__9_1_OFFSET))(this, id);
	}

	::UnityEngine::NativeString __GenerateRogueTournBuildRefTeamMemberJson_b__15_0(::RPG::GameCore::AvatarBaseType baseType)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C___GENERATEROGUETOURNBUILDREFTEAMMEMBERJSON_B__15_0_OFFSET))(this, baseType);
	}

	::UnityEngine::NativeString __GenerateStringList_b__125_0(::System::String* s)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C___GENERATESTRINGLIST_B__125_0_OFFSET))(this, s);
	}

	::UnityEngine::NativeString _ReportJukeboxWhiteNoiseOperate_b__145_0(::Class_1_FCFCC4B97F2390FE* s)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::Class_1_FCFCC4B97F2390FE*))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__REPORTJUKEBOXWHITENOISEOPERATE_B__145_0_OFFSET))(this, s);
	}
};
