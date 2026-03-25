#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleSkillCustomToastParam; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_06F2FB528DC08B2C_OFFSET UNITYSDK_OFFSET(0xCB53FF0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_1504138DDA24D085_OFFSET UNITYSDK_OFFSET(0xCB53DA0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_5B13D07C14CDC45D_OFFSET UNITYSDK_OFFSET(0xCB545B0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_7EC40E0A62ADD170_OFFSET UNITYSDK_OFFSET(0xCB53E30)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_944569CB78114375_OFFSET UNITYSDK_OFFSET(0xCB53ED0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_9A2E664738100D72_OFFSET UNITYSDK_OFFSET(0xCB539B0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_A56224AD500A5617_OFFSET UNITYSDK_OFFSET(0xCB543F0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_ABA29FE5E05DC72A_OFFSET UNITYSDK_OFFSET(0xCB53C10)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_BC8439C5A10F7B5B_OFFSET UNITYSDK_OFFSET(0xCB53CD0)
#define CLASS_1_77E96ACE7A0E87CA_METHOD_1_F562E48EB7AE3D67_OFFSET UNITYSDK_OFFSET(0xCB541A0)
#define CLASS_1_77E96ACE7A0E87CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB546C0)
#define CLASS_1_77E96ACE7A0E87CA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB54640)

inline static constexpr unsigned int Class_1_77E96ACE7A0E87CA_TypeDefinitionIndex = 58920;

class Class_1_77E96ACE7A0E87CA : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E96ACE7A0E87CA_TypeDefinitionIndex)->GetStaticField(0x45CC0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E96ACE7A0E87CA_TypeDefinitionIndex)->GetStaticField(0x45CC8);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillType, ::RPG::Client::BattleSkillCustomToastParam*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_9A2E664738100D72(::RPG::GameCore::SkillData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_9A2E664738100D72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1504138DDA24D085(::Il2CppArray<::RPG::GameCore::SkillType>* a1, ::RPG::GameCore::SkillTextDialogType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_1504138DDA24D085_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_BC8439C5A10F7B5B(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::Client::BattleSkillCustomToastParam* a3)
	{
		return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_BC8439C5A10F7B5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5B13D07C14CDC45D(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::GameCore::SkillTextDialogType a3)
	{
		return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_5B13D07C14CDC45D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A56224AD500A5617(::RPG::Client::TextID a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_A56224AD500A5617_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F562E48EB7AE3D67(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::Client::BattleSkillCustomToastParam* a3)
	{
		return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_F562E48EB7AE3D67_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::BattleSkillCustomToastParam* Method_1_7EC40E0A62ADD170(::RPG::GameCore::SkillTextDialogType a1)
	{
		return ((::RPG::Client::BattleSkillCustomToastParam*(*)(::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_7EC40E0A62ADD170_OFFSET))(a1);
	}

	::System::Void Method_1_944569CB78114375(::Il2CppArray<::RPG::GameCore::SkillType>* a1, ::RPG::Client::BattleSkillCustomToastParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_944569CB78114375_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06F2FB528DC08B2C(::Il2CppArray<::RPG::GameCore::SkillType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_06F2FB528DC08B2C_OFFSET))(this, a1);
	}

	::RPG::Client::BattleSkillCustomToastParam* Method_1_ABA29FE5E05DC72A(::RPG::GameCore::SkillType a1)
	{
		return ((::RPG::Client::BattleSkillCustomToastParam*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_1_77E96ACE7A0E87CA_METHOD_1_ABA29FE5E05DC72A_OFFSET))(this, a1);
	}
};
