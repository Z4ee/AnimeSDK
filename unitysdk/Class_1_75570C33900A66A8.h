#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_75570C33900A66A8_METHOD_1_0944570E30F06B49_OFFSET UNITYSDK_OFFSET(0x172B8DB0)
#define CLASS_1_75570C33900A66A8_METHOD_1_260EF40221472011_OFFSET UNITYSDK_OFFSET(0x172B8B20)
#define CLASS_1_75570C33900A66A8_METHOD_1_32582ECF04298C89_OFFSET UNITYSDK_OFFSET(0x172B8D00)
#define CLASS_1_75570C33900A66A8_METHOD_1_413B430FB1991D5D_OFFSET UNITYSDK_OFFSET(0x172B8EE0)
#define CLASS_1_75570C33900A66A8_METHOD_1_5B5E06906D1E02BA_OFFSET UNITYSDK_OFFSET(0x172B8C20)
#define CLASS_1_75570C33900A66A8_METHOD_1_6B552C37E234FCE8_OFFSET UNITYSDK_OFFSET(0x172B8F60)
#define CLASS_1_75570C33900A66A8_METHOD_1_708C7718971B6B4D_1_OFFSET UNITYSDK_OFFSET(0x172B89B0)
#define CLASS_1_75570C33900A66A8_METHOD_1_708C7718971B6B4D_OFFSET UNITYSDK_OFFSET(0x172B88D0)
#define CLASS_1_75570C33900A66A8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x172B8A90)
#define CLASS_1_75570C33900A66A8_METHOD_1_D836DBC0A4CACC09_1_OFFSET UNITYSDK_OFFSET(0x172B8E90)
#define CLASS_1_75570C33900A66A8_METHOD_1_D836DBC0A4CACC09_OFFSET UNITYSDK_OFFSET(0x172B8E40)
#define CLASS_1_75570C33900A66A8__CTOR_OFFSET UNITYSDK_OFFSET(0x172B8FC0)

inline static constexpr unsigned int Class_1_75570C33900A66A8_TypeDefinitionIndex = 57820;

class Class_1_75570C33900A66A8 : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ControlSkillType AOMPEPOHIFO; // 0x0
	// static const ::RPG::GameCore::ControlSkillType EPEDHOLJPEI; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* JOHIELEHHEN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_708C7718971B6B4D_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D_1()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_708C7718971B6B4D_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_260EF40221472011(::RPG::GameCore::SkillLayoutKey a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_260EF40221472011_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType Method_1_5B5E06906D1E02BA(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_5B5E06906D1E02BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32582ECF04298C89(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_32582ECF04298C89_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0944570E30F06B49(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_0944570E30F06B49_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::SkillLayoutKey Method_1_D836DBC0A4CACC09(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::SkillLayoutKey(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_D836DBC0A4CACC09_OFFSET))(a1);
	}

	static ::RPG::Client::UISkillIndex Method_1_D836DBC0A4CACC09_1(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_D836DBC0A4CACC09_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_413B430FB1991D5D(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_413B430FB1991D5D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B552C37E234FCE8(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_75570C33900A66A8_METHOD_1_6B552C37E234FCE8_OFFSET))(a1);
	}
};
