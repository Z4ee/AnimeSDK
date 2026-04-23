#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ILBattleMonsterSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class String; }

#define CLASS_1_0E4A6E743283D611_METHOD_1_6CA538CF9FEB9943_OFFSET UNITYSDK_OFFSET(0x9573C20)
#define CLASS_1_0E4A6E743283D611_METHOD_1_821D4346A7E0B2C4_OFFSET UNITYSDK_OFFSET(0x9573B50)
#define CLASS_1_0E4A6E743283D611_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x9573AE0)
#define CLASS_1_0E4A6E743283D611_METHOD_1_8D180756F040DF0F_OFFSET UNITYSDK_OFFSET(0x9573BC0)
#define CLASS_1_0E4A6E743283D611_METHOD_1_A1EA7A32F3914B21_OFFSET UNITYSDK_OFFSET(0x9573B60)
#define CLASS_1_0E4A6E743283D611_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x9573A90)
#define CLASS_1_0E4A6E743283D611_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x9573B40)
#define CLASS_1_0E4A6E743283D611__CTOR_OFFSET UNITYSDK_OFFSET(0x9573EE0)

inline static constexpr unsigned int Class_1_0E4A6E743283D611_TypeDefinitionIndex = 49994;

class Class_1_0E4A6E743283D611 : public ::System::Object
{
public:
	::RPG::GameCore::ILBattleMonsterSkillConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::RtSkillConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtSkillConfig* Method_1_821D4346A7E0B2C4()
	{
		return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_821D4346A7E0B2C4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_A1EA7A32F3914B21()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_A1EA7A32F3914B21_OFFSET))(this);
	}

	::Class_1_0E4A6E743283D611* Method_1_8D180756F040DF0F(::RPG::GameCore::ILBattleMonsterSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2)
	{
		return ((::Class_1_0E4A6E743283D611*(*)(::PVOID, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_8D180756F040DF0F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_6CA538CF9FEB9943(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_0E4A6E743283D611_METHOD_1_6CA538CF9FEB9943_OFFSET))(this, a1);
	}
};
