#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterNatureType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3D819B2B64AE03BA_METHOD_1_77A70440D4F08BD7_1_OFFSET UNITYSDK_OFFSET(0x11463420)
#define CLASS_1_3D819B2B64AE03BA_METHOD_1_77A70440D4F08BD7_OFFSET UNITYSDK_OFFSET(0x11463350)
#define CLASS_1_3D819B2B64AE03BA_METHOD_1_9BF40280E0B406FF_OFFSET UNITYSDK_OFFSET(0x114632D0)
#define CLASS_1_3D819B2B64AE03BA_METHOD_1_DEBB7291DCB11224_OFFSET UNITYSDK_OFFSET(0x114634F0)
#define CLASS_1_3D819B2B64AE03BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x114635C0)

inline static constexpr unsigned int Class_1_3D819B2B64AE03BA_TypeDefinitionIndex = 43530;

class Class_1_3D819B2B64AE03BA : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D819B2B64AE03BA_TypeDefinitionIndex)->GetStaticField(0x357E0);
	}
	static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D819B2B64AE03BA_TypeDefinitionIndex)->GetStaticField(0x357E8);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D819B2B64AE03BA_TypeDefinitionIndex)->GetStaticField(0x10BA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D819B2B64AE03BA__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::CharacterNatureType Method_1_9BF40280E0B406FF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CharacterNatureType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D819B2B64AE03BA_METHOD_1_9BF40280E0B406FF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77A70440D4F08BD7(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_3D819B2B64AE03BA_METHOD_1_77A70440D4F08BD7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_77A70440D4F08BD7_1(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_3D819B2B64AE03BA_METHOD_1_77A70440D4F08BD7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_DEBB7291DCB11224(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_3D819B2B64AE03BA_METHOD_1_DEBB7291DCB11224_OFFSET))(a1, a2);
	}
};
