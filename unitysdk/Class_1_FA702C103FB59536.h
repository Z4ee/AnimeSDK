#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FA702C103FB59536_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8AA52F0)
#define CLASS_1_FA702C103FB59536_METHOD_1_32582ECF04298C89_OFFSET UNITYSDK_OFFSET(0x8AA5580)
#define CLASS_1_FA702C103FB59536_METHOD_1_376C650B81097D8F_OFFSET UNITYSDK_OFFSET(0x8AA5880)
#define CLASS_1_FA702C103FB59536_METHOD_1_413B430FB1991D5D_OFFSET UNITYSDK_OFFSET(0x8AA5800)
#define CLASS_1_FA702C103FB59536_METHOD_1_5B5E06906D1E02BA_OFFSET UNITYSDK_OFFSET(0x8AA5490)
#define CLASS_1_FA702C103FB59536_METHOD_1_708C7718971B6B4D_1_OFFSET UNITYSDK_OFFSET(0x8AA5200)
#define CLASS_1_FA702C103FB59536_METHOD_1_708C7718971B6B4D_OFFSET UNITYSDK_OFFSET(0x8AA5110)
#define CLASS_1_FA702C103FB59536_METHOD_1_B694D86922D003D2_OFFSET UNITYSDK_OFFSET(0x8AA5630)
#define CLASS_1_FA702C103FB59536_METHOD_1_C5E7B1367E9C9EA6_OFFSET UNITYSDK_OFFSET(0x8AA5390)
#define CLASS_1_FA702C103FB59536_METHOD_1_D836DBC0A4CACC09_1_OFFSET UNITYSDK_OFFSET(0x8AA57B0)
#define CLASS_1_FA702C103FB59536_METHOD_1_D836DBC0A4CACC09_OFFSET UNITYSDK_OFFSET(0x8AA5760)
#define CLASS_1_FA702C103FB59536__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA58D0)

inline static constexpr unsigned int Class_1_FA702C103FB59536_TypeDefinitionIndex = 46478;

class Class_1_FA702C103FB59536 : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ControlSkillType Field_1_0; // 0x0
	// static const ::RPG::GameCore::ControlSkillType Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_708C7718971B6B4D_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_708C7718971B6B4D_1()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_708C7718971B6B4D_1_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_C5E7B1367E9C9EA6(::RPG::GameCore::SkillLayoutKey a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_C5E7B1367E9C9EA6_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType Method_1_5B5E06906D1E02BA(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_5B5E06906D1E02BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32582ECF04298C89(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_32582ECF04298C89_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B694D86922D003D2(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_B694D86922D003D2_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::SkillLayoutKey Method_1_D836DBC0A4CACC09(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::SkillLayoutKey(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_D836DBC0A4CACC09_OFFSET))(a1);
	}

	static ::RPG::Client::UISkillIndex Method_1_D836DBC0A4CACC09_1(::RPG::GameCore::SkillLayoutKey a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_D836DBC0A4CACC09_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_413B430FB1991D5D(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_413B430FB1991D5D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_376C650B81097D8F(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_FA702C103FB59536_METHOD_1_376C650B81097D8F_OFFSET))(a1);
	}
};
