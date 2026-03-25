#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class ICharacterSkillRowData; }

#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_SKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA49CE30)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA49CE50)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_SKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA49CE40)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA49CE60)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA49CE70)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillDetailInfoDialogInitParam_TypeDefinitionIndex = 59070;

	class SkillDetailInfoDialogInitParam : public ::System::Object
	{
	public:
		::RPG::GameCore::ICharacterSkillRowData* _SkillRowData_k__BackingField; // 0x10
		::System::Nullable_1<::UnityEngine::Vector3> Offset; // 0x18
		::System::Boolean ShowLevel; // 0x28
		::System::Nullable_1<::UnityEngine::Vector3> Position; // 0x2C
		::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0x3C
		::System::Nullable_1<::System::Int32> CurSP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* get_SkillRowData()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_SKILLROWDATA_OFFSET))(this);
		}

		::System::Void set_SkillRowData(::RPG::GameCore::ICharacterSkillRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_SKILLROWDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_ULTRASKILLTYPE_OFFSET))(this, value);
		}
	};
}
