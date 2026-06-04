#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B411806AE48F8DCB_METHOD_1_0944570E30F06B49_OFFSET UNITYSDK_OFFSET(0x138B85E0)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_32582ECF04298C89_OFFSET UNITYSDK_OFFSET(0x138B8530)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_376C650B81097D8F_OFFSET UNITYSDK_OFFSET(0x138B8790)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_413B430FB1991D5D_OFFSET UNITYSDK_OFFSET(0x138B8710)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_5B5E06906D1E02BA_OFFSET UNITYSDK_OFFSET(0x138B8450)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_708C7718971B6B4D_1_OFFSET UNITYSDK_OFFSET(0x138B8210)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_708C7718971B6B4D_OFFSET UNITYSDK_OFFSET(0x138B8130)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x138B82F0)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_D836DBC0A4CACC09_1_OFFSET UNITYSDK_OFFSET(0x138B86C0)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_D836DBC0A4CACC09_OFFSET UNITYSDK_OFFSET(0x138B8670)
#define CLASS_1_B411806AE48F8DCB_METHOD_1_F1DF56D0A5D4DB8F_OFFSET UNITYSDK_OFFSET(0x138B8380)
#define CLASS_1_B411806AE48F8DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x138B87E0)

inline static constexpr unsigned int Class_1_B411806AE48F8DCB_TypeDefinitionIndex = 53878;

class Class_1_B411806AE48F8DCB : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ControlSkillType Field_1_0; // 0x0
	// static const ::RPG::GameCore::ControlSkillType Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_708C7718971B6B4D_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D_1()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_708C7718971B6B4D_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_F1DF56D0A5D4DB8F(::RPG::GameCore::SkillLayoutKey a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_F1DF56D0A5D4DB8F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType Method_1_5B5E06906D1E02BA(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_5B5E06906D1E02BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32582ECF04298C89(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_32582ECF04298C89_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0944570E30F06B49(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_0944570E30F06B49_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::SkillLayoutKey Method_1_D836DBC0A4CACC09(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::SkillLayoutKey(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_D836DBC0A4CACC09_OFFSET))(a1);
	}

	static ::RPG::Client::UISkillIndex Method_1_D836DBC0A4CACC09_1(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_D836DBC0A4CACC09_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_413B430FB1991D5D(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_413B430FB1991D5D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_376C650B81097D8F(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_B411806AE48F8DCB_METHOD_1_376C650B81097D8F_OFFSET))(a1);
	}
};
