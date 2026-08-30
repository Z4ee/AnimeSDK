#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_971AA0341F837710;
namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class String; }

#define CLASS_1_056ADF90F4B437E2_METHOD_1_6CA538CF9FEB9943_OFFSET UNITYSDK_OFFSET(0xB8E8FB0)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_821D4346A7E0B2C4_OFFSET UNITYSDK_OFFSET(0xB8E8DA0)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB8E8D30)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_8A8C8D55BEB6E5BA_OFFSET UNITYSDK_OFFSET(0xB8E8DC0)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB8E8CE0)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_ACE6B9BC84CA2B23_OFFSET UNITYSDK_OFFSET(0xB8E8DB0)
#define CLASS_1_056ADF90F4B437E2_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0xB8E8D90)
#define CLASS_1_056ADF90F4B437E2__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E9270)

inline static constexpr unsigned int Class_1_056ADF90F4B437E2_TypeDefinitionIndex = 54421;

class Class_1_056ADF90F4B437E2 : public ::System::Object
{
public:
	::RPG::GameCore::RtSkillConfig* IGHAHBNLIJA; // 0x10
	::Class_1_971AA0341F837710* DGOCFOMEKHO; // 0x18
	::RPG::GameCore::ILBattleAvatarSkillConfigRow* IBPBJBOKKMF; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* BGEOOALFJOL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtSkillConfig* Method_1_821D4346A7E0B2C4()
	{
		return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_821D4346A7E0B2C4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_ACE6B9BC84CA2B23()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_ACE6B9BC84CA2B23_OFFSET))(this);
	}

	::Class_1_056ADF90F4B437E2* Method_1_8A8C8D55BEB6E5BA(::RPG::GameCore::ILBattleAvatarSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2, ::System::UInt32 a3, ::Class_1_971AA0341F837710* a4)
	{
		return ((::Class_1_056ADF90F4B437E2*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*, ::System::UInt32, ::Class_1_971AA0341F837710*))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_8A8C8D55BEB6E5BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_6CA538CF9FEB9943(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_056ADF90F4B437E2_METHOD_1_6CA538CF9FEB9943_OFFSET))(this, a1);
	}
};
