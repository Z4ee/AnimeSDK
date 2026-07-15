#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillSimpleExtraEffectData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FEDD0)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188FEE10)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__GETSIMPLEEXTRAEFFECTDATALIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x188FEE20)
#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__GETSIMPLEEXTRAEFFECTDATALIST_B__15_1_OFFSET UNITYSDK_OFFSET(0x188FEF00)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillDetailInfoDialogInitParam___c_TypeDefinitionIndex = 68860;

	class SkillDetailInfoDialogInitParam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::SkillSimpleExtraEffectData*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::SkillSimpleExtraEffectData*>**)Il2CppClass::FromTypeDefinitionIndex(SkillDetailInfoDialogInitParam___c_TypeDefinitionIndex)->GetStaticField(0x34BF0);
		}
		static ::RPG::Client::SkillDetailInfoDialogInitParam___c** StaticGet___9()
		{
			return (::RPG::Client::SkillDetailInfoDialogInitParam___c**)Il2CppClass::FromTypeDefinitionIndex(SkillDetailInfoDialogInitParam___c_TypeDefinitionIndex)->GetStaticField(0x34BF8);
		}
		static ::System::Func_2<::RPG::Client::SkillSimpleExtraEffectData*, ::System::Boolean>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::RPG::Client::SkillSimpleExtraEffectData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SkillDetailInfoDialogInitParam___c_TypeDefinitionIndex)->GetStaticField(0x34C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::SkillSimpleExtraEffectData* _GetSimpleExtraEffectDataList_b__15_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::SkillSimpleExtraEffectData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__GETSIMPLEEXTRAEFFECTDATALIST_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetSimpleExtraEffectDataList_b__15_1(::RPG::Client::SkillSimpleExtraEffectData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SkillSimpleExtraEffectData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM___C__GETSIMPLEEXTRAEFFECTDATALIST_B__15_1_OFFSET))(this, a1);
		}
	};
}
