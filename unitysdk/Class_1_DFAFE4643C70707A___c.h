#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B6441625E3D7D3E0;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DFAFE4643C70707A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB25C410)
#define CLASS_1_DFAFE4643C70707A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB25C450)
#define CLASS_1_DFAFE4643C70707A___C__GETALLACTIVECOLLECTABLEUNSEENCARDS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB25C460)
#define CLASS_1_DFAFE4643C70707A___C___GETCASEBOARDMAINPAGEUPDATESIGNATURE_B__26_0_OFFSET UNITYSDK_OFFSET(0xB25C480)

inline static constexpr unsigned int Class_1_DFAFE4643C70707A___c_TypeDefinitionIndex = 80735;

class Class_1_DFAFE4643C70707A___c : public ::System::Object
{
public:
	static ::Class_1_DFAFE4643C70707A___c** StaticGet___9()
	{
		return (::Class_1_DFAFE4643C70707A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DFAFE4643C70707A___c_TypeDefinitionIndex)->GetStaticField(0x200E0);
	}
	static ::System::Func_2<::Class_1_B6441625E3D7D3E0*, ::RPG::GameCore::FateRinHouguOwnerType>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_1_B6441625E3D7D3E0*, ::RPG::GameCore::FateRinHouguOwnerType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DFAFE4643C70707A___c_TypeDefinitionIndex)->GetStaticField(0x200E8);
	}
	static ::System::Func_2<::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::System::UInt32>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DFAFE4643C70707A___c_TypeDefinitionIndex)->GetStaticField(0x200F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateRinHouguOwnerType _GetAllActiveCollectableUnseenCards_b__7_0(::Class_1_B6441625E3D7D3E0* a1)
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::Class_1_B6441625E3D7D3E0*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A___C__GETALLACTIVECOLLECTABLEUNSEENCARDS_B__7_0_OFFSET))(this, a1);
	}

	::System::UInt32 __GetCaseBoardMainPageUpdateSignature_b__26_0(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A___C___GETCASEBOARDMAINPAGEUPDATESIGNATURE_B__26_0_OFFSET))(this, a1);
	}
};
