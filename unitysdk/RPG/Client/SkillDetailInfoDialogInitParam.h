#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class SkillDetailInfoDialogInitParam_RelatedSkillDetailParam; }
namespace RPG::Client { class SkillSimpleExtraEffectData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GETSIMPLEEXTRAEFFECTDATALIST_OFFSET UNITYSDK_OFFSET(0x188FE790)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_SKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x188FE750)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x188FE770)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_SKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x188FE760)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x188FE780)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x188FEDC0)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__GETSIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x188FE9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillDetailInfoDialogInitParam_TypeDefinitionIndex = 68858;

	class SkillDetailInfoDialogInitParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam*>* RelatedSkillDetailList; // 0x10
		::RPG::GameCore::ICharacterSkillRowData* _SkillRowData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* SpecialTipsList; // 0x20
		::System::Nullable_1<::System::Int32> CurSP; // 0x28
		::System::Boolean ShowLevel; // 0x30
		::System::Nullable_1<::UnityEngine::Vector3> Offset; // 0x34
		::System::Nullable_1<::UnityEngine::Vector3> Position; // 0x44
		::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* get_SkillRowData()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_SKILLROWDATA_OFFSET))(this);
		}

		::System::Void set_SkillRowData(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_SKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_SET_ULTRASKILLTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SkillSimpleExtraEffectData*>* GetSimpleExtraEffectDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SkillSimpleExtraEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_GETSIMPLEEXTRAEFFECTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetSimpleExtraEffectIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM__GETSIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}
	};
}
